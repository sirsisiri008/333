/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: peer/resources.proto */

#ifndef PROTOBUF_C_peer_2fresources_2eproto__INCLUDED
#define PROTOBUF_C_peer_2fresources_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "common/configtx.pb-c.h"

typedef struct _Protos__ChaincodeIdentifier Protos__ChaincodeIdentifier;
typedef struct _Protos__ChaincodeValidation Protos__ChaincodeValidation;
typedef struct _Protos__VSCCArgs Protos__VSCCArgs;
typedef struct _Protos__ChaincodeEndorsement Protos__ChaincodeEndorsement;
typedef struct _Protos__ConfigTree Protos__ConfigTree;


/* --- enums --- */


/* --- messages --- */

/*
 * ChaincodeIdentifier identifies a piece of chaincode.  For a peer to accept invocations of
 * this chaincode, the hash of the installed code must match, as must the version string
 * included with the install command.
 */
struct  _Protos__ChaincodeIdentifier
{
  ProtobufCMessage base;
  /*
   * The hash of the chaincode bytes
   */
  protobuf_c_boolean has_hash;
  ProtobufCBinaryData hash;
  /*
   * A user friendly human readable name corresponding to the ID
   */
  char *version;
};
#define PROTOS__CHAINCODE_IDENTIFIER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protos__chaincode_identifier__descriptor) \
    , 0,{0,NULL}, NULL }


/*
 * ChaincodeValidation instructs the peer how transactions for this chaincode should be
 * validated.  The only validation mechanism which ships with fabric today is the standard
 * 'vscc' validation mechanism.  This built in validation method utilizes an endorsement policy
 * which checks that a sufficient number of signatures have been included.  The 'arguement'
 * field encodes any parameters required by the validation implementation.
 */
struct  _Protos__ChaincodeValidation
{
  ProtobufCMessage base;
  /*
   * Specifies which code to run to validate transactions, defaults to 'vscc'
   */
  char *name;
  /*
   * When 'vscc' a marshaled VSCCArgs
   */
  protobuf_c_boolean has_argument;
  ProtobufCBinaryData argument;
};
#define PROTOS__CHAINCODE_VALIDATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protos__chaincode_validation__descriptor) \
    , NULL, 0,{0,NULL} }


/*
 * VSCCArgs is passed (marshaled) as a parameter to the VSCC imlementation via the
 * argument field of the ChaincodeValidation message.
 */
struct  _Protos__VSCCArgs
{
  ProtobufCMessage base;
  /*
   * A named reference to an endorsement policy,
   */
  char *endorsement_policy_ref;
};
#define PROTOS__VSCCARGS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protos__vsccargs__descriptor) \
    , NULL }


/*
 * ChaincodeEndorsement instructs the peer how transactions should be endorsed.  The only
 * endorsement mechanism which ships with the fabric today is the standard 'escc' mechanism.
 * This code simply simulates the proposal to generate a RW set, then signs the result
 * using the peer's local signing identity.
 */
struct  _Protos__ChaincodeEndorsement
{
  ProtobufCMessage base;
  /*
   * Specifies what code to run for endorsements, defaults 'escc'
   */
  char *name;
};
#define PROTOS__CHAINCODE_ENDORSEMENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protos__chaincode_endorsement__descriptor) \
    , NULL }


/*
 * ConfigTree encapsulates channel and resources configuration of a channel.
 * Both configurations are represented as common.Config
 */
struct  _Protos__ConfigTree
{
  ProtobufCMessage base;
  Common__Config *channel_config;
  Common__Config *resources_config;
};
#define PROTOS__CONFIG_TREE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protos__config_tree__descriptor) \
    , NULL, NULL }


/* Protos__ChaincodeIdentifier methods */
void   protos__chaincode_identifier__init
                     (Protos__ChaincodeIdentifier         *message);
size_t protos__chaincode_identifier__get_packed_size
                     (const Protos__ChaincodeIdentifier   *message);
size_t protos__chaincode_identifier__pack
                     (const Protos__ChaincodeIdentifier   *message,
                      uint8_t             *out);
size_t protos__chaincode_identifier__pack_to_buffer
                     (const Protos__ChaincodeIdentifier   *message,
                      ProtobufCBuffer     *buffer);
Protos__ChaincodeIdentifier *
       protos__chaincode_identifier__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protos__chaincode_identifier__free_unpacked
                     (Protos__ChaincodeIdentifier *message,
                      ProtobufCAllocator *allocator);
/* Protos__ChaincodeValidation methods */
void   protos__chaincode_validation__init
                     (Protos__ChaincodeValidation         *message);
size_t protos__chaincode_validation__get_packed_size
                     (const Protos__ChaincodeValidation   *message);
size_t protos__chaincode_validation__pack
                     (const Protos__ChaincodeValidation   *message,
                      uint8_t             *out);
size_t protos__chaincode_validation__pack_to_buffer
                     (const Protos__ChaincodeValidation   *message,
                      ProtobufCBuffer     *buffer);
Protos__ChaincodeValidation *
       protos__chaincode_validation__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protos__chaincode_validation__free_unpacked
                     (Protos__ChaincodeValidation *message,
                      ProtobufCAllocator *allocator);
/* Protos__VSCCArgs methods */
void   protos__vsccargs__init
                     (Protos__VSCCArgs         *message);
size_t protos__vsccargs__get_packed_size
                     (const Protos__VSCCArgs   *message);
size_t protos__vsccargs__pack
                     (const Protos__VSCCArgs   *message,
                      uint8_t             *out);
size_t protos__vsccargs__pack_to_buffer
                     (const Protos__VSCCArgs   *message,
                      ProtobufCBuffer     *buffer);
Protos__VSCCArgs *
       protos__vsccargs__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protos__vsccargs__free_unpacked
                     (Protos__VSCCArgs *message,
                      ProtobufCAllocator *allocator);
/* Protos__ChaincodeEndorsement methods */
void   protos__chaincode_endorsement__init
                     (Protos__ChaincodeEndorsement         *message);
size_t protos__chaincode_endorsement__get_packed_size
                     (const Protos__ChaincodeEndorsement   *message);
size_t protos__chaincode_endorsement__pack
                     (const Protos__ChaincodeEndorsement   *message,
                      uint8_t             *out);
size_t protos__chaincode_endorsement__pack_to_buffer
                     (const Protos__ChaincodeEndorsement   *message,
                      ProtobufCBuffer     *buffer);
Protos__ChaincodeEndorsement *
       protos__chaincode_endorsement__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protos__chaincode_endorsement__free_unpacked
                     (Protos__ChaincodeEndorsement *message,
                      ProtobufCAllocator *allocator);
/* Protos__ConfigTree methods */
void   protos__config_tree__init
                     (Protos__ConfigTree         *message);
size_t protos__config_tree__get_packed_size
                     (const Protos__ConfigTree   *message);
size_t protos__config_tree__pack
                     (const Protos__ConfigTree   *message,
                      uint8_t             *out);
size_t protos__config_tree__pack_to_buffer
                     (const Protos__ConfigTree   *message,
                      ProtobufCBuffer     *buffer);
Protos__ConfigTree *
       protos__config_tree__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protos__config_tree__free_unpacked
                     (Protos__ConfigTree *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Protos__ChaincodeIdentifier_Closure)
                 (const Protos__ChaincodeIdentifier *message,
                  void *closure_data);
typedef void (*Protos__ChaincodeValidation_Closure)
                 (const Protos__ChaincodeValidation *message,
                  void *closure_data);
typedef void (*Protos__VSCCArgs_Closure)
                 (const Protos__VSCCArgs *message,
                  void *closure_data);
typedef void (*Protos__ChaincodeEndorsement_Closure)
                 (const Protos__ChaincodeEndorsement *message,
                  void *closure_data);
typedef void (*Protos__ConfigTree_Closure)
                 (const Protos__ConfigTree *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor protos__chaincode_identifier__descriptor;
extern const ProtobufCMessageDescriptor protos__chaincode_validation__descriptor;
extern const ProtobufCMessageDescriptor protos__vsccargs__descriptor;
extern const ProtobufCMessageDescriptor protos__chaincode_endorsement__descriptor;
extern const ProtobufCMessageDescriptor protos__config_tree__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_peer_2fresources_2eproto__INCLUDED */
