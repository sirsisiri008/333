/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: fabric_network.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "fabric_network.pb-c.h"
void   common__fabric_networks__init
                     (Common__FabricNetworks         *message)
{
  static const Common__FabricNetworks init_value = COMMON__FABRIC_NETWORKS__INIT;
  *message = init_value;
}
size_t common__fabric_networks__get_packed_size
                     (const Common__FabricNetworks *message)
{
  assert(message->base.descriptor == &common__fabric_networks__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t common__fabric_networks__pack
                     (const Common__FabricNetworks *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &common__fabric_networks__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t common__fabric_networks__pack_to_buffer
                     (const Common__FabricNetworks *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &common__fabric_networks__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Common__FabricNetworks *
       common__fabric_networks__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Common__FabricNetworks *)
     protobuf_c_message_unpack (&common__fabric_networks__descriptor,
                                allocator, len, data);
}
void   common__fabric_networks__free_unpacked
                     (Common__FabricNetworks *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &common__fabric_networks__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   common__fabric_network_data__init
                     (Common__FabricNetworkData         *message)
{
  static const Common__FabricNetworkData init_value = COMMON__FABRIC_NETWORK_DATA__INIT;
  *message = init_value;
}
size_t common__fabric_network_data__get_packed_size
                     (const Common__FabricNetworkData *message)
{
  assert(message->base.descriptor == &common__fabric_network_data__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t common__fabric_network_data__pack
                     (const Common__FabricNetworkData *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &common__fabric_network_data__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t common__fabric_network_data__pack_to_buffer
                     (const Common__FabricNetworkData *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &common__fabric_network_data__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Common__FabricNetworkData *
       common__fabric_network_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Common__FabricNetworkData *)
     protobuf_c_message_unpack (&common__fabric_network_data__descriptor,
                                allocator, len, data);
}
void   common__fabric_network_data__free_unpacked
                     (Common__FabricNetworkData *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &common__fabric_network_data__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   common__fabric_nodes_cfg__init
                     (Common__FabricNodesCfg         *message)
{
  static const Common__FabricNodesCfg init_value = COMMON__FABRIC_NODES_CFG__INIT;
  *message = init_value;
}
size_t common__fabric_nodes_cfg__get_packed_size
                     (const Common__FabricNodesCfg *message)
{
  assert(message->base.descriptor == &common__fabric_nodes_cfg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t common__fabric_nodes_cfg__pack
                     (const Common__FabricNodesCfg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &common__fabric_nodes_cfg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t common__fabric_nodes_cfg__pack_to_buffer
                     (const Common__FabricNodesCfg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &common__fabric_nodes_cfg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Common__FabricNodesCfg *
       common__fabric_nodes_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Common__FabricNodesCfg *)
     protobuf_c_message_unpack (&common__fabric_nodes_cfg__descriptor,
                                allocator, len, data);
}
void   common__fabric_nodes_cfg__free_unpacked
                     (Common__FabricNodesCfg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &common__fabric_nodes_cfg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   common__fabric_node_layout_cfg__init
                     (Common__FabricNodeLayoutCfg         *message)
{
  static const Common__FabricNodeLayoutCfg init_value = COMMON__FABRIC_NODE_LAYOUT_CFG__INIT;
  *message = init_value;
}
size_t common__fabric_node_layout_cfg__get_packed_size
                     (const Common__FabricNodeLayoutCfg *message)
{
  assert(message->base.descriptor == &common__fabric_node_layout_cfg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t common__fabric_node_layout_cfg__pack
                     (const Common__FabricNodeLayoutCfg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &common__fabric_node_layout_cfg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t common__fabric_node_layout_cfg__pack_to_buffer
                     (const Common__FabricNodeLayoutCfg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &common__fabric_node_layout_cfg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Common__FabricNodeLayoutCfg *
       common__fabric_node_layout_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Common__FabricNodeLayoutCfg *)
     protobuf_c_message_unpack (&common__fabric_node_layout_cfg__descriptor,
                                allocator, len, data);
}
void   common__fabric_node_layout_cfg__free_unpacked
                     (Common__FabricNodeLayoutCfg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &common__fabric_node_layout_cfg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   common__fabric_node_group_cfg__init
                     (Common__FabricNodeGroupCfg         *message)
{
  static const Common__FabricNodeGroupCfg init_value = COMMON__FABRIC_NODE_GROUP_CFG__INIT;
  *message = init_value;
}
size_t common__fabric_node_group_cfg__get_packed_size
                     (const Common__FabricNodeGroupCfg *message)
{
  assert(message->base.descriptor == &common__fabric_node_group_cfg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t common__fabric_node_group_cfg__pack
                     (const Common__FabricNodeGroupCfg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &common__fabric_node_group_cfg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t common__fabric_node_group_cfg__pack_to_buffer
                     (const Common__FabricNodeGroupCfg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &common__fabric_node_group_cfg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Common__FabricNodeGroupCfg *
       common__fabric_node_group_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Common__FabricNodeGroupCfg *)
     protobuf_c_message_unpack (&common__fabric_node_group_cfg__descriptor,
                                allocator, len, data);
}
void   common__fabric_node_group_cfg__free_unpacked
                     (Common__FabricNodeGroupCfg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &common__fabric_node_group_cfg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   common__fabric_node_info__init
                     (Common__FabricNodeInfo         *message)
{
  static const Common__FabricNodeInfo init_value = COMMON__FABRIC_NODE_INFO__INIT;
  *message = init_value;
}
size_t common__fabric_node_info__get_packed_size
                     (const Common__FabricNodeInfo *message)
{
  assert(message->base.descriptor == &common__fabric_node_info__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t common__fabric_node_info__pack
                     (const Common__FabricNodeInfo *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &common__fabric_node_info__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t common__fabric_node_info__pack_to_buffer
                     (const Common__FabricNodeInfo *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &common__fabric_node_info__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Common__FabricNodeInfo *
       common__fabric_node_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Common__FabricNodeInfo *)
     protobuf_c_message_unpack (&common__fabric_node_info__descriptor,
                                allocator, len, data);
}
void   common__fabric_node_info__free_unpacked
                     (Common__FabricNodeInfo *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &common__fabric_node_info__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor common__fabric_networks__field_descriptors[2] =
{
  {
    "networkNum",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Common__FabricNetworks, networknum),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "networks",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Common__FabricNetworks, networks),
    &common__fabric_network_data__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned common__fabric_networks__field_indices_by_name[] = {
  0,   /* field[0] = networkNum */
  1,   /* field[1] = networks */
};
static const ProtobufCIntRange common__fabric_networks__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor common__fabric_networks__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "common.fabricNetworks",
  "FabricNetworks",
  "Common__FabricNetworks",
  "common",
  sizeof(Common__FabricNetworks),
  2,
  common__fabric_networks__field_descriptors,
  common__fabric_networks__field_indices_by_name,
  1,  common__fabric_networks__number_ranges,
  (ProtobufCMessageInit) common__fabric_networks__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor common__fabric_network_data__field_descriptors[5] =
{
  {
    "index",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Common__FabricNetworkData, index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "accountCertContent",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Common__FabricNetworkData, accountcertcontent),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tlsClientCertContent",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Common__FabricNetworkData, tlsclientcertcontent),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "layoutCfg",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Common__FabricNetworkData, n_layoutcfg),
    offsetof(Common__FabricNetworkData, layoutcfg),
    &common__fabric_node_layout_cfg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "orderCfg",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Common__FabricNetworkData, ordercfg),
    &common__fabric_node_group_cfg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned common__fabric_network_data__field_indices_by_name[] = {
  1,   /* field[1] = accountCertContent */
  0,   /* field[0] = index */
  3,   /* field[3] = layoutCfg */
  4,   /* field[4] = orderCfg */
  2,   /* field[2] = tlsClientCertContent */
};
static const ProtobufCIntRange common__fabric_network_data__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor common__fabric_network_data__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "common.fabricNetworkData",
  "FabricNetworkData",
  "Common__FabricNetworkData",
  "common",
  sizeof(Common__FabricNetworkData),
  5,
  common__fabric_network_data__field_descriptors,
  common__fabric_network_data__field_indices_by_name,
  1,  common__fabric_network_data__number_ranges,
  (ProtobufCMessageInit) common__fabric_network_data__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor common__fabric_nodes_cfg__field_descriptors[2] =
{
  {
    "layoutCfg",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Common__FabricNodesCfg, n_layoutcfg),
    offsetof(Common__FabricNodesCfg, layoutcfg),
    &common__fabric_node_layout_cfg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "orderCfg",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Common__FabricNodesCfg, ordercfg),
    &common__fabric_node_group_cfg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned common__fabric_nodes_cfg__field_indices_by_name[] = {
  0,   /* field[0] = layoutCfg */
  1,   /* field[1] = orderCfg */
};
static const ProtobufCIntRange common__fabric_nodes_cfg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor common__fabric_nodes_cfg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "common.fabricNodesCfg",
  "FabricNodesCfg",
  "Common__FabricNodesCfg",
  "common",
  sizeof(Common__FabricNodesCfg),
  2,
  common__fabric_nodes_cfg__field_descriptors,
  common__fabric_nodes_cfg__field_indices_by_name,
  1,  common__fabric_nodes_cfg__number_ranges,
  (ProtobufCMessageInit) common__fabric_nodes_cfg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor common__fabric_node_layout_cfg__field_descriptors[1] =
{
  {
    "groupCfg",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Common__FabricNodeLayoutCfg, n_groupcfg),
    offsetof(Common__FabricNodeLayoutCfg, groupcfg),
    &common__fabric_node_group_cfg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned common__fabric_node_layout_cfg__field_indices_by_name[] = {
  0,   /* field[0] = groupCfg */
};
static const ProtobufCIntRange common__fabric_node_layout_cfg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor common__fabric_node_layout_cfg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "common.fabricNodeLayoutCfg",
  "FabricNodeLayoutCfg",
  "Common__FabricNodeLayoutCfg",
  "common",
  sizeof(Common__FabricNodeLayoutCfg),
  1,
  common__fabric_node_layout_cfg__field_descriptors,
  common__fabric_node_layout_cfg__field_indices_by_name,
  1,  common__fabric_node_layout_cfg__number_ranges,
  (ProtobufCMessageInit) common__fabric_node_layout_cfg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor common__fabric_node_group_cfg__field_descriptors[3] =
{
  {
    "quantities",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Common__FabricNodeGroupCfg, quantities),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "endorser",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Common__FabricNodeGroupCfg, n_endorser),
    offsetof(Common__FabricNodeGroupCfg, endorser),
    &common__fabric_node_info__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tlsOrgCertContent",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Common__FabricNodeGroupCfg, tlsorgcertcontent),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned common__fabric_node_group_cfg__field_indices_by_name[] = {
  1,   /* field[1] = endorser */
  0,   /* field[0] = quantities */
  2,   /* field[2] = tlsOrgCertContent */
};
static const ProtobufCIntRange common__fabric_node_group_cfg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor common__fabric_node_group_cfg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "common.fabricNodeGroupCfg",
  "FabricNodeGroupCfg",
  "Common__FabricNodeGroupCfg",
  "common",
  sizeof(Common__FabricNodeGroupCfg),
  3,
  common__fabric_node_group_cfg__field_descriptors,
  common__fabric_node_group_cfg__field_indices_by_name,
  1,  common__fabric_node_group_cfg__number_ranges,
  (ProtobufCMessageInit) common__fabric_node_group_cfg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor common__fabric_node_info__field_descriptors[2] =
{
  {
    "nodeUrl",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Common__FabricNodeInfo, nodeurl),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "hostName",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Common__FabricNodeInfo, hostname),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned common__fabric_node_info__field_indices_by_name[] = {
  1,   /* field[1] = hostName */
  0,   /* field[0] = nodeUrl */
};
static const ProtobufCIntRange common__fabric_node_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor common__fabric_node_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "common.fabricNodeInfo",
  "FabricNodeInfo",
  "Common__FabricNodeInfo",
  "common",
  sizeof(Common__FabricNodeInfo),
  2,
  common__fabric_node_info__field_descriptors,
  common__fabric_node_info__field_indices_by_name,
  1,  common__fabric_node_info__number_ranges,
  (ProtobufCMessageInit) common__fabric_node_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
