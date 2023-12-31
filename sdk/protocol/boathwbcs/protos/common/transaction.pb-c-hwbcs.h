/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: common/transaction.proto */

#ifndef PROTOBUF_C_common_2ftransaction_2eproto__INCLUDED
#define PROTOBUF_C_common_2ftransaction_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "message.pb-c.h"

typedef struct Common__TxResult Common__TxResult;
typedef struct Common__Transaction Common__Transaction;
typedef struct Common__Transaction__ExtensionsEntry Common__Transaction__ExtensionsEntry;
typedef struct Common__TxPayload Common__TxPayload;
typedef struct Common__TxHeader Common__TxHeader;
typedef struct Common__Identity Common__Identity;
typedef struct Common__CommonTxData Common__CommonTxData;
typedef struct Common__StateUpdates Common__StateUpdates;
typedef struct Common__KvStateUpdates Common__KvStateUpdates;
typedef struct Common__InvocationResponse Common__InvocationResponse;
typedef struct Common__KeyVersion Common__KeyVersion;
typedef struct Common__Version Common__Version;
typedef struct Common__IterationInfo Common__IterationInfo;
typedef struct Common__MerkleTree Common__MerkleTree;
typedef struct Common__KeyValue Common__KeyValue;
typedef struct Common__Approval Common__Approval;


/* --- enums --- */

typedef enum _Common__Identity__Type {
  COMMON__IDENTITY__TYPE__COMMON_NAME = 0,
  COMMON__IDENTITY__TYPE__CERT = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(COMMON__IDENTITY__TYPE)
} Common__Identity__Type;
typedef enum _Common__TxType {
  COMMON__TX_TYPE__COMMON_TRANSACTION = 0,
  COMMON__TX_TYPE__VOTE_TRANSACTION = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(COMMON__TX_TYPE)
} Common__TxType;
typedef enum _Common__ContractRunEnv {
  COMMON__CONTRACT_RUN_ENV__Docker = 0,
  COMMON__CONTRACT_RUN_ENV__Native = 1,
  COMMON__CONTRACT_RUN_ENV__NativeWasm = 2,
  COMMON__CONTRACT_RUN_ENV__TEEWasm = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(COMMON__CONTRACT_RUN_ENV)
} Common__ContractRunEnv;
typedef enum _Common__TxStatus_hwbcs {
  COMMON__STATUS__HWBCS__VALID = 0,
  COMMON__STATUS__HWBCS__INVALID_TX_PAYLOAD = 1,
  COMMON__STATUS__HWBCS__INVALID_TX_HEADER = 2,
  COMMON__STATUS__HWBCS__INVALID_TX_TYPE = 3,
  COMMON__STATUS__HWBCS__UNKNOWN_TX_TYPE = 4,
  COMMON__STATUS__HWBCS__DUPLICATE_TX = 5,
  COMMON__STATUS__HWBCS__INVALID_STATE_UPDATES_TYPE = 6,
  COMMON__STATUS__HWBCS__INVALID_INSERT_STATEMENTS = 7,
  COMMON__STATUS__HWBCS__INVALID_SELECT_STATEMENTS = 8,
  COMMON__STATUS__HWBCS__INVALID_SQL_SYNTAX = 9,
  COMMON__STATUS__HWBCS__INVALID_SQL_SCHEMA = 10,
  COMMON__STATUS__HWBCS__INVALID_COMMON_TX_DATA = 11,
  COMMON__STATUS__HWBCS__INVALID_VOTE_TX_DATA = 12,
  COMMON__STATUS__HWBCS__INVALID_CHAIN_CONFIG = 13,
  COMMON__STATUS__HWBCS__INVALID_ARCHIVE_TX_DATA = 14,
  COMMON__STATUS__HWBCS__INVALID_CONTRACT_INVOCATION = 21,
  COMMON__STATUS__HWBCS__INVALID_APPROVAL_SIGNATURE = 22,
  COMMON__STATUS__HWBCS__APPROVALS_VALIDATION_FAILURE = 23,
  COMMON__STATUS__HWBCS__UNKNOWN_VOTE_HANDLER = 31,
  COMMON__STATUS__HWBCS__INVALID_VOTE_PAYLOAD = 32,
  COMMON__STATUS__HWBCS__INVALID_MVCC = 41,
  COMMON__STATUS__HWBCS__CONTRACT_ALREADY_INIT = 42,
  COMMON__STATUS__HWBCS__CONTRACT_NOT_INIT = 43,
  COMMON__STATUS__HWBCS__INVALID_LATEST_BLOCK = 44,
  COMMON__STATUS__HWBCS__INVALID = 255
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(COMMON__TX_STATUS)
} Common__TxStatus_hwbcs;

/* --- messages --- */

struct  Common__TxResult
{
  ProtobufCMessage base;
  ProtobufCBinaryData tx_hash;
  Common__TxStatus_hwbcs status;
};
#define COMMON__TX_RESULT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__tx_result__descriptor) \
    , {0,NULL}, COMMON__STATUS__HWBCS__VALID }


struct  Common__Transaction__ExtensionsEntry
{
  ProtobufCMessage base;
  char *key;
  ProtobufCBinaryData value;
};
#define COMMON__TRANSACTION__EXTENSIONS_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__transaction__extensions_entry__descriptor) \
    , (char *)protobuf_c_empty_string, {0,NULL} }


struct  Common__Transaction
{
  ProtobufCMessage base;
  size_t n_approvals;
  Common__Approval **approvals;
  /*
   * TxPayload
   */
  ProtobufCBinaryData payload;
  size_t n_extensions;
  Common__Transaction__ExtensionsEntry **extensions;
};
#define COMMON__TRANSACTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__transaction__descriptor) \
    ,  0,NULL,{0,NULL}, 0,NULL }


struct  Common__TxPayload
{
  ProtobufCMessage base;
  Common__TxHeader *header;
  /*
   * CommonTxData, VoteTxData
   */
  ProtobufCBinaryData data;
};
#define COMMON__TX_PAYLOAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__tx_payload__descriptor) \
    , NULL, {0,NULL} }


struct  Common__TxHeader
{
  ProtobufCMessage base;
  Common__TxType type;
  char *chain_id;
  Common__Identity *creator;
  uint64_t timestamp;
  uint64_t nonce;
  uint64_t latest_block;
  size_t n_domains;
  char **domains;
};
#define COMMON__TX_HEADER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__tx_header__descriptor) \
    , COMMON__TX_TYPE__COMMON_TRANSACTION, (char *)protobuf_c_empty_string, NULL, 0, 0, 0, 0,NULL }


struct  Common__Identity
{
  ProtobufCMessage base;
  char *org;
  Common__Identity__Type type;
  ProtobufCBinaryData id;
};
#define COMMON__IDENTITY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__identity__descriptor) \
    , (char *)protobuf_c_empty_string, COMMON__IDENTITY__TYPE__COMMON_NAME, {0,NULL} }


struct  Common__CommonTxData
{
  ProtobufCMessage base;
  ProtobufCBinaryData contractinvocation;
  Common__InvocationResponse *response;
  size_t n_stateupdates;
  Common__StateUpdates **stateupdates;
};
#define COMMON__COMMON_TX_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__common_tx_data__descriptor) \
    , {0,NULL}, NULL, 0,NULL }


typedef enum {
  COMMON__STATE_UPDATES__UPDATES__NOT_SET = 0,
  COMMON__STATE_UPDATES__UPDATES_KV_UPDATES = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(COMMON__STATE_UPDATES__UPDATES__CASE)
} Common__StateUpdates__UpdatesCase;

struct  Common__StateUpdates
{
  ProtobufCMessage base;
  char *namespace_;
  Common__StateUpdates__UpdatesCase updates_case;
  union {
    Common__KvStateUpdates *kvupdates;
  };
};
#define COMMON__STATE_UPDATES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__state_updates__descriptor) \
    , (char *)protobuf_c_empty_string, COMMON__STATE_UPDATES__UPDATES__NOT_SET, {0} }


struct  Common__KvStateUpdates
{
  ProtobufCMessage base;
  size_t n_key_versions;
  Common__KeyVersion **key_versions;
  size_t n_itr_infos;
  Common__IterationInfo **itr_infos;
  size_t n_updates;
  Common__KeyValue **updates;
  size_t n_deletes;
  char **deletes;
};
#define COMMON__KV_STATE_UPDATES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__kv_state_updates__descriptor) \
    , 0,NULL, 0,NULL, 0,NULL, 0,NULL }


struct  Common__InvocationResponse
{
  ProtobufCMessage base;
  Common__Status_hwbcs status;
  char *status_info;
  /*
   * Maybe the get state result
   */
  ProtobufCBinaryData payload;
};
#define COMMON__INVOCATION_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__invocation_response__descriptor) \
    , COMMON__STATUS__HWBCS__UNKNOWN, (char *)protobuf_c_empty_string, {0,NULL} }


struct  Common__KeyVersion
{
  ProtobufCMessage base;
  char *key;
  Common__Version *version;
};
#define COMMON__KEY_VERSION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__key_version__descriptor) \
    , (char *)protobuf_c_empty_string, NULL }


struct  Common__Version
{
  ProtobufCMessage base;
  uint64_t block_num;
  int32_t tx_num;
};
#define COMMON__VERSION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__version__descriptor) \
    , 0, 0 }


struct  Common__IterationInfo
{
  ProtobufCMessage base;
  char *start_key;
  char *end_key;
  protobuf_c_boolean inclusive;
  Common__MerkleTree *tree;
};
#define COMMON__ITERATION_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__iteration_info__descriptor) \
    , (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, 0, NULL }


struct  Common__MerkleTree
{
  ProtobufCMessage base;
  int32_t level;
  size_t n_nodes;
  ProtobufCBinaryData *nodes;
};
#define COMMON__MERKLE_TREE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__merkle_tree__descriptor) \
    , 0, 0,NULL }


struct  Common__KeyValue
{
  ProtobufCMessage base;
  char *key;
  ProtobufCBinaryData value;
  ProtobufCBinaryData signature;
};
#define COMMON__KEY_VALUE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__key_value__descriptor) \
    , (char *)protobuf_c_empty_string, {0,NULL}, {0,NULL} }


struct  Common__Approval
{
  ProtobufCMessage base;
  ProtobufCBinaryData identity;
  ProtobufCBinaryData sign;
  Common__ContractRunEnv type;
  char *org_name;
  char *node_name;
};
#define COMMON__APPROVAL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&common__approval__descriptor) \
    , {0,NULL}, {0,NULL}, COMMON__CONTRACT_RUN_ENV__Docker, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string }


/* Common__TxResult methods */
void   common__tx_result__init
                     (Common__TxResult         *message);
size_t common__tx_result__get_packed_size
                     (const Common__TxResult   *message);
size_t common__tx_result__pack
                     (const Common__TxResult   *message,
                      uint8_t             *out);
size_t common__tx_result__pack_to_buffer
                     (const Common__TxResult   *message,
                      ProtobufCBuffer     *buffer);
Common__TxResult *
       common__tx_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__tx_result__free_unpacked
                     (Common__TxResult *message,
                      ProtobufCAllocator *allocator);
/* Common__Transaction__ExtensionsEntry methods */
void   common__transaction__extensions_entry__init
                     (Common__Transaction__ExtensionsEntry         *message);
/* Common__Transaction methods */
void   common__transaction__init
                     (Common__Transaction         *message);
size_t common__transaction__get_packed_size
                     (const Common__Transaction   *message);
size_t common__transaction__pack
                     (const Common__Transaction   *message,
                      uint8_t             *out);
size_t common__transaction__pack_to_buffer
                     (const Common__Transaction   *message,
                      ProtobufCBuffer     *buffer);
Common__Transaction *
       common__transaction__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__transaction__free_unpacked
                     (Common__Transaction *message,
                      ProtobufCAllocator *allocator);
/* Common__TxPayload methods */
void   common__tx_payload__init
                     (Common__TxPayload         *message);
size_t common__tx_payload__get_packed_size
                     (const Common__TxPayload   *message);
size_t common__tx_payload__pack
                     (const Common__TxPayload   *message,
                      uint8_t             *out);
size_t common__tx_payload__pack_to_buffer
                     (const Common__TxPayload   *message,
                      ProtobufCBuffer     *buffer);
Common__TxPayload *
       common__tx_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__tx_payload__free_unpacked
                     (Common__TxPayload *message,
                      ProtobufCAllocator *allocator);
/* Common__TxHeader methods */
void   common__tx_header__init
                     (Common__TxHeader         *message);
size_t common__tx_header__get_packed_size
                     (const Common__TxHeader   *message);
size_t common__tx_header__pack
                     (const Common__TxHeader   *message,
                      uint8_t             *out);
size_t common__tx_header__pack_to_buffer
                     (const Common__TxHeader   *message,
                      ProtobufCBuffer     *buffer);
Common__TxHeader *
       common__tx_header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__tx_header__free_unpacked
                     (Common__TxHeader *message,
                      ProtobufCAllocator *allocator);
/* Common__Identity methods */
void   common__identity__init
                     (Common__Identity         *message);
size_t common__identity__get_packed_size
                     (const Common__Identity   *message);
size_t common__identity__pack
                     (const Common__Identity   *message,
                      uint8_t             *out);
size_t common__identity__pack_to_buffer
                     (const Common__Identity   *message,
                      ProtobufCBuffer     *buffer);
Common__Identity *
       common__identity__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__identity__free_unpacked
                     (Common__Identity *message,
                      ProtobufCAllocator *allocator);
/* Common__CommonTxData methods */
void   common__common_tx_data__init
                     (Common__CommonTxData         *message);
size_t common__common_tx_data__get_packed_size
                     (const Common__CommonTxData   *message);
size_t common__common_tx_data__pack
                     (const Common__CommonTxData   *message,
                      uint8_t             *out);
size_t common__common_tx_data__pack_to_buffer
                     (const Common__CommonTxData   *message,
                      ProtobufCBuffer     *buffer);
Common__CommonTxData *
       common__common_tx_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__common_tx_data__free_unpacked
                     (Common__CommonTxData *message,
                      ProtobufCAllocator *allocator);
/* Common__StateUpdates methods */
void   common__state_updates__init
                     (Common__StateUpdates         *message);
size_t common__state_updates__get_packed_size
                     (const Common__StateUpdates   *message);
size_t common__state_updates__pack
                     (const Common__StateUpdates   *message,
                      uint8_t             *out);
size_t common__state_updates__pack_to_buffer
                     (const Common__StateUpdates   *message,
                      ProtobufCBuffer     *buffer);
Common__StateUpdates *
       common__state_updates__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__state_updates__free_unpacked
                     (Common__StateUpdates *message,
                      ProtobufCAllocator *allocator);
/* Common__KvStateUpdates methods */
void   common__kv_state_updates__init
                     (Common__KvStateUpdates         *message);
size_t common__kv_state_updates__get_packed_size
                     (const Common__KvStateUpdates   *message);
size_t common__kv_state_updates__pack
                     (const Common__KvStateUpdates   *message,
                      uint8_t             *out);
size_t common__kv_state_updates__pack_to_buffer
                     (const Common__KvStateUpdates   *message,
                      ProtobufCBuffer     *buffer);
Common__KvStateUpdates *
       common__kv_state_updates__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__kv_state_updates__free_unpacked
                     (Common__KvStateUpdates *message,
                      ProtobufCAllocator *allocator);
/* Common__InvocationResponse methods */
void   common__invocation_response__init
                     (Common__InvocationResponse         *message);
size_t common__invocation_response__get_packed_size
                     (const Common__InvocationResponse   *message);
size_t common__invocation_response__pack
                     (const Common__InvocationResponse   *message,
                      uint8_t             *out);
size_t common__invocation_response__pack_to_buffer
                     (const Common__InvocationResponse   *message,
                      ProtobufCBuffer     *buffer);
Common__InvocationResponse *
       common__invocation_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__invocation_response__free_unpacked
                     (Common__InvocationResponse *message,
                      ProtobufCAllocator *allocator);
/* Common__KeyVersion methods */
void   common__key_version__init
                     (Common__KeyVersion         *message);
size_t common__key_version__get_packed_size
                     (const Common__KeyVersion   *message);
size_t common__key_version__pack
                     (const Common__KeyVersion   *message,
                      uint8_t             *out);
size_t common__key_version__pack_to_buffer
                     (const Common__KeyVersion   *message,
                      ProtobufCBuffer     *buffer);
Common__KeyVersion *
       common__key_version__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__key_version__free_unpacked
                     (Common__KeyVersion *message,
                      ProtobufCAllocator *allocator);
/* Common__Version methods */
void   common__version__init
                     (Common__Version         *message);
size_t common__version__get_packed_size
                     (const Common__Version   *message);
size_t common__version__pack
                     (const Common__Version   *message,
                      uint8_t             *out);
size_t common__version__pack_to_buffer
                     (const Common__Version   *message,
                      ProtobufCBuffer     *buffer);
Common__Version *
       common__version__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__version__free_unpacked
                     (Common__Version *message,
                      ProtobufCAllocator *allocator);
/* Common__IterationInfo methods */
void   common__iteration_info__init
                     (Common__IterationInfo         *message);
size_t common__iteration_info__get_packed_size
                     (const Common__IterationInfo   *message);
size_t common__iteration_info__pack
                     (const Common__IterationInfo   *message,
                      uint8_t             *out);
size_t common__iteration_info__pack_to_buffer
                     (const Common__IterationInfo   *message,
                      ProtobufCBuffer     *buffer);
Common__IterationInfo *
       common__iteration_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__iteration_info__free_unpacked
                     (Common__IterationInfo *message,
                      ProtobufCAllocator *allocator);
/* Common__MerkleTree methods */
void   common__merkle_tree__init
                     (Common__MerkleTree         *message);
size_t common__merkle_tree__get_packed_size
                     (const Common__MerkleTree   *message);
size_t common__merkle_tree__pack
                     (const Common__MerkleTree   *message,
                      uint8_t             *out);
size_t common__merkle_tree__pack_to_buffer
                     (const Common__MerkleTree   *message,
                      ProtobufCBuffer     *buffer);
Common__MerkleTree *
       common__merkle_tree__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__merkle_tree__free_unpacked
                     (Common__MerkleTree *message,
                      ProtobufCAllocator *allocator);
/* Common__KeyValue methods */
void   common__key_value__init
                     (Common__KeyValue         *message);
size_t common__key_value__get_packed_size
                     (const Common__KeyValue   *message);
size_t common__key_value__pack
                     (const Common__KeyValue   *message,
                      uint8_t             *out);
size_t common__key_value__pack_to_buffer
                     (const Common__KeyValue   *message,
                      ProtobufCBuffer     *buffer);
Common__KeyValue *
       common__key_value__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__key_value__free_unpacked
                     (Common__KeyValue *message,
                      ProtobufCAllocator *allocator);
/* Common__Approval methods */
void   common__approval__init
                     (Common__Approval         *message);
size_t common__approval__get_packed_size
                     (const Common__Approval   *message);
size_t common__approval__pack
                     (const Common__Approval   *message,
                      uint8_t             *out);
size_t common__approval__pack_to_buffer
                     (const Common__Approval   *message,
                      ProtobufCBuffer     *buffer);
Common__Approval *
       common__approval__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   common__approval__free_unpacked
                     (Common__Approval *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Common__TxResult_Closure)
                 (const Common__TxResult *message,
                  void *closure_data);
typedef void (*Common__Transaction__ExtensionsEntry_Closure)
                 (const Common__Transaction__ExtensionsEntry *message,
                  void *closure_data);
typedef void (*Common__Transaction_Closure)
                 (const Common__Transaction *message,
                  void *closure_data);
typedef void (*Common__TxPayload_Closure)
                 (const Common__TxPayload *message,
                  void *closure_data);
typedef void (*Common__TxHeader_Closure)
                 (const Common__TxHeader *message,
                  void *closure_data);
typedef void (*Common__Identity_Closure)
                 (const Common__Identity *message,
                  void *closure_data);
typedef void (*Common__CommonTxData_Closure)
                 (const Common__CommonTxData *message,
                  void *closure_data);
typedef void (*Common__StateUpdates_Closure)
                 (const Common__StateUpdates *message,
                  void *closure_data);
typedef void (*Common__KvStateUpdates_Closure)
                 (const Common__KvStateUpdates *message,
                  void *closure_data);
typedef void (*Common__InvocationResponse_Closure)
                 (const Common__InvocationResponse *message,
                  void *closure_data);
typedef void (*Common__KeyVersion_Closure)
                 (const Common__KeyVersion *message,
                  void *closure_data);
typedef void (*Common__Version_Closure)
                 (const Common__Version *message,
                  void *closure_data);
typedef void (*Common__IterationInfo_Closure)
                 (const Common__IterationInfo *message,
                  void *closure_data);
typedef void (*Common__MerkleTree_Closure)
                 (const Common__MerkleTree *message,
                  void *closure_data);
typedef void (*Common__KeyValue_Closure)
                 (const Common__KeyValue *message,
                  void *closure_data);
typedef void (*Common__Approval_Closure)
                 (const Common__Approval *message,
                  void *closure_data);

/* --- services --- */

typedef struct Common__TransactionSender_Service Common__TransactionSender_Service;
struct Common__TransactionSender_Service
{
  ProtobufCService base;
  void (*send_transaction)(Common__TransactionSender_Service *service,
                           const Common__RawMessage *input,
                           Common__RawMessage_Closure closure,
                           void *closure_data);
};
typedef void (*Common__TransactionSender_ServiceDestroy)(Common__TransactionSender_Service *);
void common__transaction_sender__init (Common__TransactionSender_Service *service,
                                       Common__TransactionSender_ServiceDestroy destroy);
#define COMMON__TRANSACTION_SENDER__BASE_INIT \
    { &common__transaction_sender__descriptor, protobuf_c_service_invoke_internal, NULL }
#define COMMON__TRANSACTION_SENDER__INIT(function_prefix__) \
    { COMMON__TRANSACTION_SENDER__BASE_INIT,\
      function_prefix__ ## send_transaction  }
void common__transaction_sender__send_transaction(ProtobufCService *service,
                                                  const Common__RawMessage *input,
                                                  Common__RawMessage_Closure closure,
                                                  void *closure_data);

/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    common__tx_type__descriptor;
extern const ProtobufCEnumDescriptor    common__contract_run_env__descriptor;
extern const ProtobufCEnumDescriptor    common__tx_status__descriptor;
extern const ProtobufCMessageDescriptor common__tx_result__descriptor;
extern const ProtobufCMessageDescriptor common__transaction__descriptor;
extern const ProtobufCMessageDescriptor common__transaction__extensions_entry__descriptor;
extern const ProtobufCMessageDescriptor common__tx_payload__descriptor;
extern const ProtobufCMessageDescriptor common__tx_header__descriptor;
extern const ProtobufCMessageDescriptor common__identity__descriptor;
extern const ProtobufCEnumDescriptor    common__identity__type__descriptor;
extern const ProtobufCMessageDescriptor common__common_tx_data__descriptor;
extern const ProtobufCMessageDescriptor common__state_updates__descriptor;
extern const ProtobufCMessageDescriptor common__kv_state_updates__descriptor;
extern const ProtobufCMessageDescriptor common__invocation_response__descriptor;
extern const ProtobufCMessageDescriptor common__key_version__descriptor;
extern const ProtobufCMessageDescriptor common__version__descriptor;
extern const ProtobufCMessageDescriptor common__iteration_info__descriptor;
extern const ProtobufCMessageDescriptor common__merkle_tree__descriptor;
extern const ProtobufCMessageDescriptor common__key_value__descriptor;
extern const ProtobufCMessageDescriptor common__approval__descriptor;
extern const ProtobufCServiceDescriptor common__transaction_sender__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_common_2ftransaction_2eproto__INCLUDED */
