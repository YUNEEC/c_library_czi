#pragma once
// MESSAGE CMD_COPY_FILE_FROM_RECORD_TO_BGM PACKING

#define MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM 100106


typedef struct __mavlink_cmd_copy_file_from_record_to_bgm_t {
 uint8_t channel; /*<  Channel Num*/
 uint8_t result; /*<  Result*/
 char name[100]; /*<  File Name*/
} mavlink_cmd_copy_file_from_record_to_bgm_t;

#define MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN 102
#define MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_MIN_LEN 102
#define MAVLINK_MSG_ID_100106_LEN 102
#define MAVLINK_MSG_ID_100106_MIN_LEN 102

#define MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_CRC 111
#define MAVLINK_MSG_ID_100106_CRC 111

#define MAVLINK_MSG_CMD_COPY_FILE_FROM_RECORD_TO_BGM_FIELD_NAME_LEN 100

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_COPY_FILE_FROM_RECORD_TO_BGM { \
    100106, \
    "CMD_COPY_FILE_FROM_RECORD_TO_BGM", \
    3, \
    {  { "channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_copy_file_from_record_to_bgm_t, channel) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_copy_file_from_record_to_bgm_t, result) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 100, 2, offsetof(mavlink_cmd_copy_file_from_record_to_bgm_t, name) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_COPY_FILE_FROM_RECORD_TO_BGM { \
    "CMD_COPY_FILE_FROM_RECORD_TO_BGM", \
    3, \
    {  { "channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_copy_file_from_record_to_bgm_t, channel) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_copy_file_from_record_to_bgm_t, result) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 100, 2, offsetof(mavlink_cmd_copy_file_from_record_to_bgm_t, name) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_copy_file_from_record_to_bgm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param channel  Channel Num
 * @param result  Result
 * @param name  File Name
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_copy_file_from_record_to_bgm_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t channel, uint8_t result, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);
    _mav_put_char_array(buf, 2, name, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN);
#else
    mavlink_cmd_copy_file_from_record_to_bgm_t packet;
    packet.channel = channel;
    packet.result = result;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_MIN_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_CRC);
}

/**
 * @brief Pack a cmd_copy_file_from_record_to_bgm message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param channel  Channel Num
 * @param result  Result
 * @param name  File Name
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_copy_file_from_record_to_bgm_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t channel,uint8_t result,const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);
    _mav_put_char_array(buf, 2, name, 100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN);
#else
    mavlink_cmd_copy_file_from_record_to_bgm_t packet;
    packet.channel = channel;
    packet.result = result;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_MIN_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_CRC);
}

/**
 * @brief Encode a cmd_copy_file_from_record_to_bgm struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_copy_file_from_record_to_bgm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_copy_file_from_record_to_bgm_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_copy_file_from_record_to_bgm_t* cmd_copy_file_from_record_to_bgm)
{
    return mavlink_msg_cmd_copy_file_from_record_to_bgm_pack(system_id, component_id, msg, cmd_copy_file_from_record_to_bgm->channel, cmd_copy_file_from_record_to_bgm->result, cmd_copy_file_from_record_to_bgm->name);
}

/**
 * @brief Encode a cmd_copy_file_from_record_to_bgm struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_copy_file_from_record_to_bgm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_copy_file_from_record_to_bgm_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_copy_file_from_record_to_bgm_t* cmd_copy_file_from_record_to_bgm)
{
    return mavlink_msg_cmd_copy_file_from_record_to_bgm_pack_chan(system_id, component_id, chan, msg, cmd_copy_file_from_record_to_bgm->channel, cmd_copy_file_from_record_to_bgm->result, cmd_copy_file_from_record_to_bgm->name);
}

/**
 * @brief Send a cmd_copy_file_from_record_to_bgm message
 * @param chan MAVLink channel to send the message
 *
 * @param channel  Channel Num
 * @param result  Result
 * @param name  File Name
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_copy_file_from_record_to_bgm_send(mavlink_channel_t chan, uint8_t channel, uint8_t result, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);
    _mav_put_char_array(buf, 2, name, 100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM, buf, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_MIN_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_CRC);
#else
    mavlink_cmd_copy_file_from_record_to_bgm_t packet;
    packet.channel = channel;
    packet.result = result;
    mav_array_memcpy(packet.name, name, sizeof(char)*100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM, (const char *)&packet, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_MIN_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_CRC);
#endif
}

/**
 * @brief Send a cmd_copy_file_from_record_to_bgm message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_copy_file_from_record_to_bgm_send_struct(mavlink_channel_t chan, const mavlink_cmd_copy_file_from_record_to_bgm_t* cmd_copy_file_from_record_to_bgm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_copy_file_from_record_to_bgm_send(chan, cmd_copy_file_from_record_to_bgm->channel, cmd_copy_file_from_record_to_bgm->result, cmd_copy_file_from_record_to_bgm->name);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM, (const char *)cmd_copy_file_from_record_to_bgm, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_MIN_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_copy_file_from_record_to_bgm_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t channel, uint8_t result, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);
    _mav_put_char_array(buf, 2, name, 100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM, buf, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_MIN_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_CRC);
#else
    mavlink_cmd_copy_file_from_record_to_bgm_t *packet = (mavlink_cmd_copy_file_from_record_to_bgm_t *)msgbuf;
    packet->channel = channel;
    packet->result = result;
    mav_array_memcpy(packet->name, name, sizeof(char)*100);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM, (const char *)packet, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_MIN_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_COPY_FILE_FROM_RECORD_TO_BGM UNPACKING


/**
 * @brief Get field channel from cmd_copy_file_from_record_to_bgm message
 *
 * @return  Channel Num
 */
static inline uint8_t mavlink_msg_cmd_copy_file_from_record_to_bgm_get_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field result from cmd_copy_file_from_record_to_bgm message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_copy_file_from_record_to_bgm_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field name from cmd_copy_file_from_record_to_bgm message
 *
 * @return  File Name
 */
static inline uint16_t mavlink_msg_cmd_copy_file_from_record_to_bgm_get_name(const mavlink_message_t* msg, char *name)
{
    return _MAV_RETURN_char_array(msg, name, 100,  2);
}

/**
 * @brief Decode a cmd_copy_file_from_record_to_bgm message into a struct
 *
 * @param msg The message to decode
 * @param cmd_copy_file_from_record_to_bgm C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_copy_file_from_record_to_bgm_decode(const mavlink_message_t* msg, mavlink_cmd_copy_file_from_record_to_bgm_t* cmd_copy_file_from_record_to_bgm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_copy_file_from_record_to_bgm->channel = mavlink_msg_cmd_copy_file_from_record_to_bgm_get_channel(msg);
    cmd_copy_file_from_record_to_bgm->result = mavlink_msg_cmd_copy_file_from_record_to_bgm_get_result(msg);
    mavlink_msg_cmd_copy_file_from_record_to_bgm_get_name(msg, cmd_copy_file_from_record_to_bgm->name);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN? msg->len : MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN;
        memset(cmd_copy_file_from_record_to_bgm, 0, MAVLINK_MSG_ID_CMD_COPY_FILE_FROM_RECORD_TO_BGM_LEN);
    memcpy(cmd_copy_file_from_record_to_bgm, _MAV_PAYLOAD(msg), len);
#endif
}
