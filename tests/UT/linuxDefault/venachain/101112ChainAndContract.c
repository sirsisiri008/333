/******************************************************************************
 * Copyright (C) 2018-2021 aitos.io
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
#include "tcase_venachain.h"
#include "TestABIContract.abi.h"

#define TEST_GAS_LIMIT              "0x6691B7"
#define TEST_GAS_PRICE              "0x4A817C800"
#define TEST_EIP155_COMPATIBILITY   BOAT_FALSE
#define TEST_VENACHAIN_CHAIN_ID      300

#define TEST_RECIPIENT_ADDRESS      "0x3e3bd84cf33796cb55cc713d5134597eb809fcc3"

__BOATSTATIC BOAT_RESULT venachainOnetimeWalletPrepare(BoatVenachainWallet *wallet_p)
{
    BOAT_RESULT index;
    BoatKeypairPriKeyCtx_config keypair_config;
    BUINT8 keypair_index;
    BoatVenachainNetworkConfig network_config;
    BUINT8 network_index;

        
    if (TEST_KEY_TYPE == "BOAT_WALLET_PRIKEY_FORMAT_NATIVE")
    {
        keypair_config.prikey_format  = BOAT_KEYPAIR_PRIKEY_FORMAT_NATIVE;
        UtilityHexToBin(g_binFormatKey, 32, g_venachain_private_key_buf, TRIMBIN_TRIM_NO, BOAT_FALSE);
        keypair_config.prikey_content.field_ptr = g_binFormatKey;
        keypair_config.prikey_content.field_len = 32;
    }
    else
    {
        keypair_config.prikey_format  = BOAT_KEYPAIR_PRIKEY_FORMAT_PKCS;
        keypair_config.prikey_content.field_ptr = (BUINT8 *)g_venachain_private_key_buf;
	    keypair_config.prikey_content.field_len = strlen(g_venachain_private_key_buf) + 1;
    }
	keypair_config.prikey_genMode = BOAT_KEYPAIR_PRIKEY_GENMODE_EXTERNAL_INJECTION;
	keypair_config.prikey_type	  = BOAT_KEYPAIR_PRIKEY_TYPE_SECP256K1;

    keypair_index = BoatKeypairCreate(&keypair_config,NULL,BOAT_STORE_TYPE_RAM);
    ck_assert_int_eq(keypair_index, 0);

	network_config.chain_id             = TEST_VENACHAIN_CHAIN_ID;
    network_config.eip155_compatibility = TEST_EIP155_COMPATIBILITY;
    memset(network_config.node_url_str,0U,BOAT_VENACHAIN_NODE_URL_MAX_LEN);
    strncpy(network_config.node_url_str, TEST_VENACHAIN_NODE_URL, BOAT_VENACHAIN_NODE_URL_MAX_LEN - 1);

    network_index = BoatVenachainNetworkCreate(&network_config,BOAT_STORE_TYPE_RAM);
    ck_assert_int_eq(network_index, 0);

    wallet_p = BoatVenachainWalletInit(keypair_index,network_index);
    ck_assert(wallet_p != NULL);

    return BOAT_SUCCESS;
}

START_TEST(test_010CallContract_0001CallContractSuccess) 
{
    BOAT_RESULT ret;

    BoatVenachainWallet wallet;
    BoatVenachainTx tx_ctx;

    BCHAR *result_str;
    BSINT32 bs[10];
    BUINT32 i;
    BoatFieldVariable parse_result = {NULL, 0};
    BoatAddress ba;
    Bbytes32 b32;
    BCHAR s[] = "AbCdEfGhIjKlMn";

    BoatIotSdkInit();

    venachainOnetimeWalletPrepare(&wallet);

    /* Init TX */
    ret = BoatVenachainTxInit(&wallet,&tx_ctx,BOAT_TRUE, NULL,
							   TEST_GAS_LIMIT,TEST_RECIPIENT_ADDRESS);
    ck_assert_int_eq(ret, BOAT_SUCCESS);

    /* Call Contract */
    for (i = 0; i < 10; i++)  
    {
        bs[i] = 0 - i;
    }      
    result_str = TestABIContract_abi_setIntArray(&tx_ctx, bs, 10);
    ck_assert_ptr_ne(result_str, NULL);
    result_str = TestABIContract_abi_getIntArray(&tx_ctx);
    ck_assert_ptr_ne(result_str, NULL);
    ret = BoatVenachainParseRpcResponseStringResult(result_str, &parse_result);
    ck_assert_int_eq(ret, BOAT_SUCCESS);   
    BoatLog(BOAT_LOG_NORMAL, "getIntArray returns: %s", parse_result.field_ptr);


    for (i = 0; i < 20; i++)  
    {
        ba[i] = i * 5 + 0x10;
    }       
    result_str = TestABIContract_abi_setAddress(&tx_ctx, ba);
    ck_assert_ptr_ne(result_str, NULL);
    result_str = TestABIContract_abi_getAddress(&tx_ctx);
    ck_assert_ptr_ne(result_str, NULL);
    ret = BoatVenachainParseRpcResponseStringResult(result_str, &parse_result);
    ck_assert_int_eq(ret, BOAT_SUCCESS);   
    BoatLog(BOAT_LOG_NORMAL, "getAddress returns: %s", parse_result.field_ptr);


    for (i = 0; i < 32; i++)  
    {
        b32[i] = 96 - i * 2;
    }     
    result_str = TestABIContract_abi_setByte(&tx_ctx, b32);
    ck_assert_ptr_ne(result_str, NULL);
    result_str = TestABIContract_abi_getByte(&tx_ctx);
    ck_assert_ptr_ne(result_str, NULL);
    ret = BoatVenachainParseRpcResponseStringResult(result_str, &parse_result);
    ck_assert_int_eq(ret, BOAT_SUCCESS);   
    BoatLog(BOAT_LOG_NORMAL, "getByte returns: %s", parse_result.field_ptr);

    result_str = TestABIContract_abi_setString(&tx_ctx, s);
    ck_assert_ptr_ne(result_str, NULL);
    result_str = TestABIContract_abi_getString(&tx_ctx);
    ck_assert_ptr_ne(result_str, NULL);
    ret = BoatVenachainParseRpcResponseStringResult(result_str, &parse_result);
    ck_assert_int_eq(ret, BOAT_SUCCESS);   
    BoatLog(BOAT_LOG_NORMAL, "getString returns: %s", parse_result.field_ptr);

    result_str = TestABIContract_abi_setUint32(&tx_ctx, 0x12345);
    ck_assert_ptr_ne(result_str, NULL);
    result_str = TestABIContract_abi_getUint32(&tx_ctx);
    ck_assert_ptr_ne(result_str, NULL);
    ret = BoatVenachainParseRpcResponseStringResult(result_str, &parse_result);
    ck_assert_int_eq(ret, BOAT_SUCCESS);   
    BoatLog(BOAT_LOG_NORMAL, "getUint32 returns: %s", parse_result.field_ptr);

    result_str = TestABIContract_abi_setBool(&tx_ctx, BOAT_TRUE);
    ck_assert_ptr_ne(result_str, NULL);
    result_str = TestABIContract_abi_getBool(&tx_ctx);
    ck_assert_ptr_ne(result_str, NULL);
    ret = BoatVenachainParseRpcResponseStringResult(result_str, &parse_result);
    ck_assert_int_eq(ret, BOAT_SUCCESS);   
    BoatLog(BOAT_LOG_NORMAL, "getBool returns: %s", parse_result.field_ptr);



    BoatVenachainWalletDeInit(&wallet);

    BoatIotSdkDeInit();
}
END_TEST


START_TEST(test_011GetBalance_0001GetSuccess) 
{
    BOAT_RESULT ret;

    BoatVenachainWallet wallet;
    BoatVenachainTx tx_ctx;

    BCHAR *result_str;

    BoatIotSdkInit();

    venachainOnetimeWalletPrepare(&wallet);

    /* Get Balance */
    result_str = BoatVenachainWalletGetBalance(&wallet,TEST_RECIPIENT_ADDRESS);
    ck_assert_ptr_ne(result_str, NULL);

    BoatVenachainWalletDeInit(&wallet);

    BoatIotSdkDeInit();
}
END_TEST

START_TEST(test_011GetBalance_0002GetSuccessNullAddress) 
{
    BOAT_RESULT ret;

    BoatVenachainWallet wallet;
    BoatVenachainTx tx_ctx;

    BCHAR *result_str;

    BoatIotSdkInit();

    venachainOnetimeWalletPrepare(&wallet);

    /* Get Balance */
    result_str = BoatVenachainWalletGetBalance(&wallet,NULL);
    ck_assert_ptr_ne(result_str, NULL);

    BoatVenachainWalletDeInit(&wallet);

    BoatIotSdkDeInit();
}
END_TEST

START_TEST(test_011GetBalance_0003GetFailureNullWallet) 
{
    BOAT_RESULT ret;

    BoatVenachainWallet wallet;
    BoatVenachainTx tx_ctx;

    BCHAR *result_str;

    BoatIotSdkInit();

    /* Get Balance */
    result_str = BoatVenachainWalletGetBalance(NULL,NULL);
    ck_assert_ptr_eq(result_str, NULL);

    BoatVenachainWalletDeInit(&wallet);

    BoatIotSdkDeInit();
}
END_TEST

START_TEST(test_012Transfer_0001TransferSuccess) 
{
    BOAT_RESULT ret;

    BoatVenachainWallet wallet;
    BoatVenachainTx tx_ctx;


    BoatIotSdkInit();

    venachainOnetimeWalletPrepare(&wallet);

    /* Init TX */
    ret = BoatVenachainTxInit(&wallet,&tx_ctx,BOAT_TRUE, NULL,
							   TEST_GAS_LIMIT,TEST_RECIPIENT_ADDRESS);
    ck_assert_int_eq(ret, BOAT_SUCCESS);

    /* Transfer */
    ret = BoatVenachainTransfer(&tx_ctx,"0x1");
    ck_assert_int_eq(ret, BOAT_SUCCESS);

    BoatVenachainWalletDeInit(&wallet);

    BoatIotSdkDeInit();
}
END_TEST

Suite *make_chainAndContract_suite(void) 
{
    /* Create Suite */
    Suite *s_chainAndContract = suite_create("chainAndContract");

    /* Create test cases */
    TCase *tc_chainAndContract_api = tcase_create("chainAndContract_api");

    /* Add a test case to the Suite */
    suite_add_tcase(s_chainAndContract, tc_chainAndContract_api);       
    /* Test cases are added to the test set */
    tcase_add_test(tc_chainAndContract_api, test_010CallContract_0001CallContractSuccess);
    tcase_add_test(tc_chainAndContract_api, test_011GetBalance_0001GetSuccess);
    tcase_add_test(tc_chainAndContract_api, test_011GetBalance_0002GetSuccessNullAddress);
    tcase_add_test(tc_chainAndContract_api, test_011GetBalance_0003GetFailureNullWallet);
    tcase_add_test(tc_chainAndContract_api, test_012Transfer_0001TransferSuccess);

    return s_chainAndContract;
}

