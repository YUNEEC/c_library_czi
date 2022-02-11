#pragma once
// MESSAGE CMD_MUSIC_NAME PACKING

#define MAVLINK_MSG_ID_CMD_MUSIC_NAME 100090


typedef struct __mavlink_cmd_music_name_t {
 uint8_t result; /*<  Result*/
 char name[100]; /*<  File Name*/
} mavlink_cmd_music_name_t;

#define MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN 101
#define MAVLINK_MSG_ID_CMD_MUSIC_NAME_MIN_LEN 101
#define MAVLINK_MSG_ID_100090_LEN 101
#define MAVLINK_MSG_ID_100090_MIN_LEN 101

#define MAVLINK_MSG_ID_CMD_MUSIC_NAME_CRC 246
#define MAVLINK_MSG_ID_100090_CRC 246

#define MAVLINK_MSG_CMD_MUSIC_NAME_FIELD_NAME_LEN 100

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_MUSIC_NAME { \
    100090, \
    "CMD_MUSIC_NAME", \
    2, \
    {  { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_music_name_t, result) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 100, 1, offsetof(mavlink_cmd_music_name_t, name) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_MUSIC_NAME { \
    "CMD_MUSIC_NAME", \
    2, \
    {  { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_music_name_t, result) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 100, 1, offsetof(mavlink_cmd_music_name_t, name) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_music_name message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param result  Result
 * @param name  File Name
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_music_name_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t result, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN];
    _mav_put_uint8_t(buf, 0, result);
    _mav_put_char_array(buf, 1, name, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN);
#else
    mavlink_cmd_music_name_t packet;
    packet.result = result;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_MUSIC_NAME;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_MUSIC_NAME_MIN_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_CRC);
}

/**
 * @brief Pack a cmd_music_name message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param result  Result
 * @param name  File Name
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_music_name_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t result,const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN];
    _mav_put_uint8_t(buf, 0, result);
    _mav_put_char_array(buf, 1, name, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN);
#else
    mavlink_cmd_music_name_t packet;
    packet.result = result;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_MUSIC_NAME;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_MUSIC_NAME_MIN_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_CRC);
}

/**
 * @brief Encode a cmd_music_name struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_music_name C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_music_name_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_music_name_t* cmd_music_name)
{
    return mavlink_msg_cmd_music_name_pack(system_id, component_id, msg, cmd_music_name->result, cmd_music_name->name);
}

/**
 * @brief Encode a cmd_music_name struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_music_name C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_music_name_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_music_name_t* cmd_music_name)
{
    return mavlink_msg_cmd_music_name_pack_chan(system_id, component_id, chan, msg, cmd_music_name->result, cmd_music_name->name);
}

/**
 * @brief Send a cmd_music_name message
 * @param chan MAVLink channel to send the message
 *
 * @param result  Result
 * @param name  File Name
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_music_name_send(mavlink_channel_t chan, uint8_t result, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN];
    _mav_put_uint8_t(buf, 0, result);
    _mav_put_char_array(buf, 1, name, 100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_MUSIC_NAME, buf, MAVLINK_MSG_ID_CMD_MUSIC_NAME_MIN_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_CRC);
#else
    mavlink_cmd_music_name_t packet;
    packet.result = result;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_MUSIC_NAME, (const char *)&packet, MAVLINK_MSG_ID_CMD_MUSIC_NAME_MIN_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_CRC);
#endif
}

/**
 * @brief Send a cmd_music_name message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_music_name_send_struct(mavlink_channel_t chan, const mavlink_cmd_music_name_t* cmd_music_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_music_name_send(chan, cmd_music_name->result, cmd_music_name->name);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_MUSIC_NAME, (const char *)cmd_music_name, MAVLINK_MSG_ID_CMD_MUSIC_NAME_MIN_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_music_name_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t result, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, result);
    _mav_put_char_array(buf, 1, name, 100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_MUSIC_NAME, buf, MAVLINK_MSG_ID_CMD_MUSIC_NAME_MIN_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_CRC);
#else
    mavlink_cmd_music_name_t *packet = (mavlink_cmd_music_name_t *)msgbuf;
    packet->result = result;
    mav_array_memcpy(packet->name, name, sizeof(char)*100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_MUSIC_NAME, (const char *)packet, MAVLINK_MSG_ID_CMD_MUSIC_NAME_MIN_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN, MAVLINK_MSG_ID_CMD_MUSIC_NAME_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_MUSIC_NAME UNPACKING


/**
 * @brief Get field result from cmd_music_name message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_music_name_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field name from cmd_music_name message
 *
 * @return  File Name
 */
static inline uint16_t mavlink_msg_cmd_music_name_get_name(const mavlink_message_t* msg, char *name)
{
    return _MAV_RETURN_char_array(msg, name, 100,  1);
}

/**
 * @brief Decode a cmd_music_name message into a struct
 *
 * @param msg The message to decode
 * @param cmd_music_name C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_music_name_decode(const mavlink_message_t* msg, mavlink_cmd_music_name_t* cmd_music_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_music_name->result = mavlink_msg_cmd_music_name_get_result(msg);
    mavlink_msg_cmd_music_name_get_name(msg, cmd_music_name->name);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN? msg->len : MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN;
        memset(cmd_music_name, 0, MAVLINK_MSG_ID_CMD_MUSIC_NAME_LEN);
    memcpy(cmd_music_name, _MAV_PAYLOAD(msg), len);
#endif
}
