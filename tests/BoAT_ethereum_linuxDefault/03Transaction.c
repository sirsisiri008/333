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
#include "tcase_ethereum.h"

#define TEST_EIP155_COMPATIBILITY   BOAT_FALSE
#define TEST_ETHEREUM_CHAIN_ID      5777
#define TEST_GAS_LIMIT              "0x6691B7"
#define TEST_GAS_PRICE              "0x4A817C800"
#define TEST_IS_SYNC_TX             BOAT_TRUE
#define TEST_RECIPIENT_ADDRESS      "0xde4c806b372Df8857C97cF36A08D528bB8E261Bd"
#define TEST_STOREREAD_ADDRESS      "0x"

extern BoatEthWalletConfig get_ethereum_wallet_settings();

START_TEST(test_006GetBalance_0001GetSuccess) 
{
    BOAT_RESULT result;
    BoatEthTx tx_ctx;
    BCHAR *cur_balance_wei = NULL;
    BoatFieldVariable parse_result = {NULL, 0};

    BoatIotSdkInit();

    ethereumWalletPrepare();

    result = BoatEthTxInit(g_ethereum_wallet_ptr, &tx_ctx, BOAT_TRUE, NULL,
                           "0x333333",
                           (BCHAR *)TEST_RECIPIENT_ADDRESS);
    ck_assert_int_eq(result, BOAT_SUCCESS);


    cur_balance_wei = BoatEthWalletGetBalance(g_ethereum_wallet_ptr, TEST_RECIPIENT_ADDRESS);
	result          = BoatEthParseRpcResponseStringResult(cur_balance_wei, &parse_result);

    ck_assert_ptr_nonnull(parse_result.field_ptr);
    ck_assert_int_eq(result, BOAT_SUCCESS);

    BoatFree(parse_result.field_ptr);

    BoatIotSdkDeInit();
}

START_TEST(test_006GetBalance_0002GetSuccessNullAddress) 
{
    BOAT_RESULT result;
    BoatEthTx tx_ctx;
    BCHAR *cur_balance_wei = NULL;
    BoatFieldVariable parse_result = {NULL, 0};

    BoatIotSdkInit();

    ethereumWalletPrepare();

    result = BoatEthTxInit(g_ethereum_wallet_ptr, &tx_ctx, BOAT_TRUE, NULL,
                           "0x333333",
                           (BCHAR *)TEST_RECIPIENT_ADDRESS);
    ck_assert_int_eq(result, BOAT_SUCCESS);


    cur_balance_wei = BoatEthWalletGetBalance(g_ethereum_wallet_ptr, NULL);
	result          = BoatEthParseRpcResponseStringResult(cur_balance_wei, &parse_result);

    ck_assert_ptr_nonnull(parse_result.field_ptr);
    ck_assert_int_eq(result, BOAT_SUCCESS);

    BoatFree(parse_result.field_ptr);

    BoatIotSdkDeInit();
}

START_TEST(test_006GetBalance_0003GetFailureNullWallet) 
{
    BCHAR *cur_balance_wei = NULL;

    BoatIotSdkInit();

    cur_balance_wei = BoatEthWalletGetBalance(NULL, NULL);

    ck_assert_ptr_null(cur_balance_wei);

    BoatIotSdkDeInit();
}



START_TEST(test_007Transfer_0001TransferSuccess) 
{
    BOAT_RESULT result;
    BoatEthTx tx_ctx;

    BoatIotSdkInit();

    ethereumWalletPrepare();

    result = BoatEthTxInit(g_ethereum_wallet_ptr, &tx_ctx, BOAT_TRUE, NULL,
                           "0x333333",
                           (BCHAR *)TEST_RECIPIENT_ADDRESS);
    ck_assert_int_eq(result, BOAT_SUCCESS);

    result = BoatEthTransfer(&tx_ctx, "0x1");
    ck_assert_int_eq(result, BOAT_SUCCESS);

    BoatIotSdkDeInit();
}

START_TEST(test_007Transfer_0002TransferFailureNullParam) 
{
    BOAT_RESULT result;
    BoatEthTx tx_ctx;

    BoatIotSdkInit();

    ethereumWalletPrepare();

    result = BoatEthTxInit(g_ethereum_wallet_ptr, &tx_ctx, BOAT_TRUE, NULL,
                           "0x333333",
                           (BCHAR *)TEST_RECIPIENT_ADDRESS);
    ck_assert_int_eq(result, BOAT_SUCCESS);

    result = BoatEthTransfer(&tx_ctx, NULL);
    ck_assert_int_eq(result, BOAT_ERROR_COMMON_INVALID_ARGUMENT);

    BoatIotSdkDeInit();
}



Suite *make_transactions_suite(void)
{
    /* Create Suite */
    Suite *s_transaction = suite_create("transaction");


    /* Create test cases */
    TCase *tc_transaction_api = tcase_create("transaction_api");


    /* Add a test case to the Suite */
    suite_add_tcase(s_transaction, tc_transaction_api);      
 
    /* Test cases are added to the test set */
    tcase_add_test(tc_transaction_api, test_006GetBalance_0001GetSuccess); 
    tcase_add_test(tc_transaction_api, test_006GetBalance_0002GetSuccessNullAddress); 
    tcase_add_test(tc_transaction_api, test_006GetBalance_0003GetFailureNullWallet);
    tcase_add_test(tc_transaction_api, test_007Transfer_0001TransferSuccess); 
    tcase_add_test(tc_transaction_api, test_007Transfer_0002TransferFailureNullParam); 

    return s_transaction;
}