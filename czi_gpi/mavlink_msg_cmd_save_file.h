#pragma once
// MESSAGE CMD_SAVE_FILE PACKING

#define MAVLINK_MSG_ID_CMD_SAVE_FILE 100103


typedef struct __mavlink_cmd_save_file_t {
 uint8_t channel; /*<  Channel Num*/
 uint8_t result; /*<  Result*/
 char name[100]; /*<  File Name*/
} mavlink_cmd_save_file_t;

#define MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN 102
#define MAVLINK_MSG_ID_CMD_SAVE_FILE_MIN_LEN 102
#define MAVLINK_MSG_ID_100103_LEN 102
#define MAVLINK_MSG_ID_100103_MIN_LEN 102

#define MAVLINK_MSG_ID_CMD_SAVE_FILE_CRC 49
#define MAVLINK_MSG_ID_100103_CRC 49

#define MAVLINK_MSG_CMD_SAVE_FILE_FIELD_NAME_LEN 100

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_SAVE_FILE { \
    100103, \
    "CMD_SAVE_FILE", \
    3, \
    {  { "channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_save_file_t, channel) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_save_file_t, result) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 100, 2, offsetof(mavlink_cmd_save_file_t, name) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_SAVE_FILE { \
    "CMD_SAVE_FILE", \
    3, \
    {  { "channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_save_file_t, channel) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_save_file_t, result) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 100, 2, offsetof(mavlink_cmd_save_file_t, name) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_save_file message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param channel  Channel Num
 * @param result  Result
 * @param name  File Name
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_save_file_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t channel, uint8_t result, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);
    _mav_put_char_array(buf, 2, name, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN);
#else
    mavlink_cmd_save_file_t packet;
    packet.channel = channel;
    packet.result = result;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SAVE_FILE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SAVE_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_CRC);
}

/**
 * @brief Pack a cmd_save_file message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param channel  Channel Num
 * @param result  Result
 * @param name  File Name
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_save_file_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t channel,uint8_t result,const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);
    _mav_put_char_array(buf, 2, name, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN);
#else
    mavlink_cmd_save_file_t packet;
    packet.channel = channel;
    packet.result = result;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SAVE_FILE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SAVE_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_CRC);
}

/**
 * @brief Encode a cmd_save_file struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_save_file C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_save_file_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_save_file_t* cmd_save_file)
{
    return mavlink_msg_cmd_save_file_pack(system_id, component_id, msg, cmd_save_file->channel, cmd_save_file->result, cmd_save_file->name);
}

/**
 * @brief Encode a cmd_save_file struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_save_file C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_save_file_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_save_file_t* cmd_save_file)
{
    return mavlink_msg_cmd_save_file_pack_chan(system_id, component_id, chan, msg, cmd_save_file->channel, cmd_save_file->result, cmd_save_file->name);
}

/**
 * @brief Send a cmd_save_file message
 * @param chan MAVLink channel to send the message
 *
 * @param channel  Channel Num
 * @param result  Result
 * @param name  File Name
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_save_file_send(mavlink_channel_t chan, uint8_t channel, uint8_t result, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);
    _mav_put_char_array(buf, 2, name, 100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SAVE_FILE, buf, MAVLINK_MSG_ID_CMD_SAVE_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_CRC);
#else
    mavlink_cmd_save_file_t packet;
    packet.channel = channel;
    packet.result = result;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SAVE_FILE, (const char *)&packet, MAVLINK_MSG_ID_CMD_SAVE_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_CRC);
#endif
}

/**
 * @brief Send a cmd_save_file message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_save_file_send_struct(mavlink_channel_t chan, const mavlink_cmd_save_file_t* cmd_save_file)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_save_file_send(chan, cmd_save_file->channel, cmd_save_file->result, cmd_save_file->name);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SAVE_FILE, (const char *)cmd_save_file, MAVLINK_MSG_ID_CMD_SAVE_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_save_file_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t channel, uint8_t result, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);
    _mav_put_char_array(buf, 2, name, 100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SAVE_FILE, buf, MAVLINK_MSG_ID_CMD_SAVE_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_CRC);
#else
    mavlink_cmd_save_file_t *packet = (mavlink_cmd_save_file_t *)msgbuf;
    packet->channel = channel;
    packet->result = result;
    mav_array_memcpy(packet->name, name, sizeof(char)*100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SAVE_FILE, (const char *)packet, MAVLINK_MSG_ID_CMD_SAVE_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN, MAVLINK_MSG_ID_CMD_SAVE_FILE_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_SAVE_FILE UNPACKING


/**
 * @brief Get field channel from cmd_save_file message
 *
 * @return  Channel Num
 */
static inline uint8_t mavlink_msg_cmd_save_file_get_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field result from cmd_save_file message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_save_file_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field name from cmd_save_file message
 *
 * @return  File Name
 */
static inline uint16_t mavlink_msg_cmd_save_file_get_name(const mavlink_message_t* msg, char *name)
{
    return _MAV_RETURN_char_array(msg, name, 100,  2);
}

/**
 * @brief Decode a cmd_save_file message into a struct
 *
 * @param msg The message to decode
 * @param cmd_save_file C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_save_file_decode(const mavlink_message_t* msg, mavlink_cmd_save_file_t* cmd_save_file)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_save_file->channel = mavlink_msg_cmd_save_file_get_channel(msg);
    cmd_save_file->result = mavlink_msg_cmd_save_file_get_result(msg);
    mavlink_msg_cmd_save_file_get_name(msg, cmd_save_file->name);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN? msg->len : MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN;
        memset(cmd_save_file, 0, MAVLINK_MSG_ID_CMD_SAVE_FILE_LEN);
    memcpy(cmd_save_file, _MAV_PAYLOAD(msg), len);
#endif
}
