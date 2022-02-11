#pragma once
// MESSAGE CMD_READ_FILE_LIST PACKING

#define MAVLINK_MSG_ID_CMD_READ_FILE_LIST 100100


typedef struct __mavlink_cmd_read_file_list_t {
 uint8_t channel; /*<  Channel Num*/
 uint8_t id; /*<  ID*/
 uint8_t sum; /*<  File total*/
 char name[100]; /*<  File name*/
} mavlink_cmd_read_file_list_t;

#define MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN 103
#define MAVLINK_MSG_ID_CMD_READ_FILE_LIST_MIN_LEN 103
#define MAVLINK_MSG_ID_100100_LEN 103
#define MAVLINK_MSG_ID_100100_MIN_LEN 103

#define MAVLINK_MSG_ID_CMD_READ_FILE_LIST_CRC 250
#define MAVLINK_MSG_ID_100100_CRC 250

#define MAVLINK_MSG_CMD_READ_FILE_LIST_FIELD_NAME_LEN 100

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_READ_FILE_LIST { \
    100100, \
    "CMD_READ_FILE_LIST", \
    4, \
    {  { "channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_read_file_list_t, channel) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_read_file_list_t, id) }, \
         { "sum", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_cmd_read_file_list_t, sum) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 100, 3, offsetof(mavlink_cmd_read_file_list_t, name) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_READ_FILE_LIST { \
    "CMD_READ_FILE_LIST", \
    4, \
    {  { "channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_read_file_list_t, channel) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_read_file_list_t, id) }, \
         { "sum", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_cmd_read_file_list_t, sum) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 100, 3, offsetof(mavlink_cmd_read_file_list_t, name) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_read_file_list message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param channel  Channel Num
 * @param id  ID
 * @param sum  File total
 * @param name  File name
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_read_file_list_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t channel, uint8_t id, uint8_t sum, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, id);
    _mav_put_uint8_t(buf, 2, sum);
    _mav_put_char_array(buf, 3, name, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN);
#else
    mavlink_cmd_read_file_list_t packet;
    packet.channel = channel;
    packet.id = id;
    packet.sum = sum;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_READ_FILE_LIST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_MIN_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_CRC);
}

/**
 * @brief Pack a cmd_read_file_list message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param channel  Channel Num
 * @param id  ID
 * @param sum  File total
 * @param name  File name
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_read_file_list_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t channel,uint8_t id,uint8_t sum,const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, id);
    _mav_put_uint8_t(buf, 2, sum);
    _mav_put_char_array(buf, 3, name, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN);
#else
    mavlink_cmd_read_file_list_t packet;
    packet.channel = channel;
    packet.id = id;
    packet.sum = sum;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_READ_FILE_LIST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_MIN_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_CRC);
}

/**
 * @brief Encode a cmd_read_file_list struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_read_file_list C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_read_file_list_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_read_file_list_t* cmd_read_file_list)
{
    return mavlink_msg_cmd_read_file_list_pack(system_id, component_id, msg, cmd_read_file_list->channel, cmd_read_file_list->id, cmd_read_file_list->sum, cmd_read_file_list->name);
}

/**
 * @brief Encode a cmd_read_file_list struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_read_file_list C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_read_file_list_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_read_file_list_t* cmd_read_file_list)
{
    return mavlink_msg_cmd_read_file_list_pack_chan(system_id, component_id, chan, msg, cmd_read_file_list->channel, cmd_read_file_list->id, cmd_read_file_list->sum, cmd_read_file_list->name);
}

/**
 * @brief Send a cmd_read_file_list message
 * @param chan MAVLink channel to send the message
 *
 * @param channel  Channel Num
 * @param id  ID
 * @param sum  File total
 * @param name  File name
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_read_file_list_send(mavlink_channel_t chan, uint8_t channel, uint8_t id, uint8_t sum, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, id);
    _mav_put_uint8_t(buf, 2, sum);
    _mav_put_char_array(buf, 3, name, 100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_READ_FILE_LIST, buf, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_MIN_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_CRC);
#else
    mavlink_cmd_read_file_list_t packet;
    packet.channel = channel;
    packet.id = id;
    packet.sum = sum;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_READ_FILE_LIST, (const char *)&packet, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_MIN_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_CRC);
#endif
}

/**
 * @brief Send a cmd_read_file_list message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_read_file_list_send_struct(mavlink_channel_t chan, const mavlink_cmd_read_file_list_t* cmd_read_file_list)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_read_file_list_send(chan, cmd_read_file_list->channel, cmd_read_file_list->id, cmd_read_file_list->sum, cmd_read_file_list->name);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_READ_FILE_LIST, (const char *)cmd_read_file_list, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_MIN_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_read_file_list_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t channel, uint8_t id, uint8_t sum, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, id);
    _mav_put_uint8_t(buf, 2, sum);
    _mav_put_char_array(buf, 3, name, 100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_READ_FILE_LIST, buf, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_MIN_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_CRC);
#else
    mavlink_cmd_read_file_list_t *packet = (mavlink_cmd_read_file_list_t *)msgbuf;
    packet->channel = channel;
    packet->id = id;
    packet->sum = sum;
    mav_array_memcpy(packet->name, name, sizeof(char)*100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_READ_FILE_LIST, (const char *)packet, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_MIN_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_READ_FILE_LIST UNPACKING


/**
 * @brief Get field channel from cmd_read_file_list message
 *
 * @return  Channel Num
 */
static inline uint8_t mavlink_msg_cmd_read_file_list_get_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field id from cmd_read_file_list message
 *
 * @return  ID
 */
static inline uint8_t mavlink_msg_cmd_read_file_list_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field sum from cmd_read_file_list message
 *
 * @return  File total
 */
static inline uint8_t mavlink_msg_cmd_read_file_list_get_sum(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field name from cmd_read_file_list message
 *
 * @return  File name
 */
static inline uint16_t mavlink_msg_cmd_read_file_list_get_name(const mavlink_message_t* msg, char *name)
{
    return _MAV_RETURN_char_array(msg, name, 100,  3);
}

/**
 * @brief Decode a cmd_read_file_list message into a struct
 *
 * @param msg The message to decode
 * @param cmd_read_file_list C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_read_file_list_decode(const mavlink_message_t* msg, mavlink_cmd_read_file_list_t* cmd_read_file_list)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_read_file_list->channel = mavlink_msg_cmd_read_file_list_get_channel(msg);
    cmd_read_file_list->id = mavlink_msg_cmd_read_file_list_get_id(msg);
    cmd_read_file_list->sum = mavlink_msg_cmd_read_file_list_get_sum(msg);
    mavlink_msg_cmd_read_file_list_get_name(msg, cmd_read_file_list->name);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN? msg->len : MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN;
        memset(cmd_read_file_list, 0, MAVLINK_MSG_ID_CMD_READ_FILE_LIST_LEN);
    memcpy(cmd_read_file_list, _MAV_PAYLOAD(msg), len);
#endif
}
