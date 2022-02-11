#pragma once
// MESSAGE CMD_FILE_SORT_TOP PACKING

#define MAVLINK_MSG_ID_CMD_FILE_SORT_TOP 100104


typedef struct __mavlink_cmd_file_sort_top_t {
 uint8_t channel; /*<  Channel Num*/
 uint8_t result; /*<  Result*/
 char name[100]; /*<  Top File Name*/
} mavlink_cmd_file_sort_top_t;

#define MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN 102
#define MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_MIN_LEN 102
#define MAVLINK_MSG_ID_100104_LEN 102
#define MAVLINK_MSG_ID_100104_MIN_LEN 102

#define MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_CRC 109
#define MAVLINK_MSG_ID_100104_CRC 109

#define MAVLINK_MSG_CMD_FILE_SORT_TOP_FIELD_NAME_LEN 100

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_FILE_SORT_TOP { \
    100104, \
    "CMD_FILE_SORT_TOP", \
    3, \
    {  { "channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_file_sort_top_t, channel) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_file_sort_top_t, result) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 100, 2, offsetof(mavlink_cmd_file_sort_top_t, name) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_FILE_SORT_TOP { \
    "CMD_FILE_SORT_TOP", \
    3, \
    {  { "channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_file_sort_top_t, channel) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_file_sort_top_t, result) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 100, 2, offsetof(mavlink_cmd_file_sort_top_t, name) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_file_sort_top message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param channel  Channel Num
 * @param result  Result
 * @param name  Top File Name
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_file_sort_top_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t channel, uint8_t result, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);
    _mav_put_char_array(buf, 2, name, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN);
#else
    mavlink_cmd_file_sort_top_t packet;
    packet.channel = channel;
    packet.result = result;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_FILE_SORT_TOP;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_MIN_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_CRC);
}

/**
 * @brief Pack a cmd_file_sort_top message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param channel  Channel Num
 * @param result  Result
 * @param name  Top File Name
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_file_sort_top_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t channel,uint8_t result,const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);
    _mav_put_char_array(buf, 2, name, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN);
#else
    mavlink_cmd_file_sort_top_t packet;
    packet.channel = channel;
    packet.result = result;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_FILE_SORT_TOP;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_MIN_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_CRC);
}

/**
 * @brief Encode a cmd_file_sort_top struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_file_sort_top C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_file_sort_top_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_file_sort_top_t* cmd_file_sort_top)
{
    return mavlink_msg_cmd_file_sort_top_pack(system_id, component_id, msg, cmd_file_sort_top->channel, cmd_file_sort_top->result, cmd_file_sort_top->name);
}

/**
 * @brief Encode a cmd_file_sort_top struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_file_sort_top C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_file_sort_top_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_file_sort_top_t* cmd_file_sort_top)
{
    return mavlink_msg_cmd_file_sort_top_pack_chan(system_id, component_id, chan, msg, cmd_file_sort_top->channel, cmd_file_sort_top->result, cmd_file_sort_top->name);
}

/**
 * @brief Send a cmd_file_sort_top message
 * @param chan MAVLink channel to send the message
 *
 * @param channel  Channel Num
 * @param result  Result
 * @param name  Top File Name
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_file_sort_top_send(mavlink_channel_t chan, uint8_t channel, uint8_t result, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);
    _mav_put_char_array(buf, 2, name, 100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP, buf, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_MIN_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_CRC);
#else
    mavlink_cmd_file_sort_top_t packet;
    packet.channel = channel;
    packet.result = result;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP, (const char *)&packet, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_MIN_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_CRC);
#endif
}

/**
 * @brief Send a cmd_file_sort_top message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_file_sort_top_send_struct(mavlink_channel_t chan, const mavlink_cmd_file_sort_top_t* cmd_file_sort_top)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_file_sort_top_send(chan, cmd_file_sort_top->channel, cmd_file_sort_top->result, cmd_file_sort_top->name);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP, (const char *)cmd_file_sort_top, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_MIN_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_file_sort_top_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t channel, uint8_t result, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);
    _mav_put_char_array(buf, 2, name, 100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP, buf, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_MIN_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_CRC);
#else
    mavlink_cmd_file_sort_top_t *packet = (mavlink_cmd_file_sort_top_t *)msgbuf;
    packet->channel = channel;
    packet->result = result;
    mav_array_memcpy(packet->name, name, sizeof(char)*100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP, (const char *)packet, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_MIN_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_FILE_SORT_TOP UNPACKING


/**
 * @brief Get field channel from cmd_file_sort_top message
 *
 * @return  Channel Num
 */
static inline uint8_t mavlink_msg_cmd_file_sort_top_get_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field result from cmd_file_sort_top message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_file_sort_top_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field name from cmd_file_sort_top message
 *
 * @return  Top File Name
 */
static inline uint16_t mavlink_msg_cmd_file_sort_top_get_name(const mavlink_message_t* msg, char *name)
{
    return _MAV_RETURN_char_array(msg, name, 100,  2);
}

/**
 * @brief Decode a cmd_file_sort_top message into a struct
 *
 * @param msg The message to decode
 * @param cmd_file_sort_top C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_file_sort_top_decode(const mavlink_message_t* msg, mavlink_cmd_file_sort_top_t* cmd_file_sort_top)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_file_sort_top->channel = mavlink_msg_cmd_file_sort_top_get_channel(msg);
    cmd_file_sort_top->result = mavlink_msg_cmd_file_sort_top_get_result(msg);
    mavlink_msg_cmd_file_sort_top_get_name(msg, cmd_file_sort_top->name);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN? msg->len : MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN;
        memset(cmd_file_sort_top, 0, MAVLINK_MSG_ID_CMD_FILE_SORT_TOP_LEN);
    memcpy(cmd_file_sort_top, _MAV_PAYLOAD(msg), len);
#endif
}
