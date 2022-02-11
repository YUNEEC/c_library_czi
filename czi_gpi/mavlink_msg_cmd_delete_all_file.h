#pragma once
// MESSAGE CMD_DELETE_ALL_FILE PACKING

#define MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE 100105


typedef struct __mavlink_cmd_delete_all_file_t {
 uint8_t channel; /*<  Channel Num*/
 uint8_t result; /*<  Result*/
} mavlink_cmd_delete_all_file_t;

#define MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN 2
#define MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_MIN_LEN 2
#define MAVLINK_MSG_ID_100105_LEN 2
#define MAVLINK_MSG_ID_100105_MIN_LEN 2

#define MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_CRC 218
#define MAVLINK_MSG_ID_100105_CRC 218



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_DELETE_ALL_FILE { \
    100105, \
    "CMD_DELETE_ALL_FILE", \
    2, \
    {  { "channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_delete_all_file_t, channel) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_delete_all_file_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_DELETE_ALL_FILE { \
    "CMD_DELETE_ALL_FILE", \
    2, \
    {  { "channel", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_delete_all_file_t, channel) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_delete_all_file_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_delete_all_file message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param channel  Channel Num
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_delete_all_file_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t channel, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN);
#else
    mavlink_cmd_delete_all_file_t packet;
    packet.channel = channel;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_CRC);
}

/**
 * @brief Pack a cmd_delete_all_file message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param channel  Channel Num
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_delete_all_file_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t channel,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN);
#else
    mavlink_cmd_delete_all_file_t packet;
    packet.channel = channel;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_CRC);
}

/**
 * @brief Encode a cmd_delete_all_file struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_delete_all_file C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_delete_all_file_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_delete_all_file_t* cmd_delete_all_file)
{
    return mavlink_msg_cmd_delete_all_file_pack(system_id, component_id, msg, cmd_delete_all_file->channel, cmd_delete_all_file->result);
}

/**
 * @brief Encode a cmd_delete_all_file struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_delete_all_file C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_delete_all_file_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_delete_all_file_t* cmd_delete_all_file)
{
    return mavlink_msg_cmd_delete_all_file_pack_chan(system_id, component_id, chan, msg, cmd_delete_all_file->channel, cmd_delete_all_file->result);
}

/**
 * @brief Send a cmd_delete_all_file message
 * @param chan MAVLink channel to send the message
 *
 * @param channel  Channel Num
 * @param result  Result
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_delete_all_file_send(mavlink_channel_t chan, uint8_t channel, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN];
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE, buf, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_CRC);
#else
    mavlink_cmd_delete_all_file_t packet;
    packet.channel = channel;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE, (const char *)&packet, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_CRC);
#endif
}

/**
 * @brief Send a cmd_delete_all_file message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_delete_all_file_send_struct(mavlink_channel_t chan, const mavlink_cmd_delete_all_file_t* cmd_delete_all_file)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_delete_all_file_send(chan, cmd_delete_all_file->channel, cmd_delete_all_file->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE, (const char *)cmd_delete_all_file, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_delete_all_file_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t channel, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, channel);
    _mav_put_uint8_t(buf, 1, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE, buf, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_CRC);
#else
    mavlink_cmd_delete_all_file_t *packet = (mavlink_cmd_delete_all_file_t *)msgbuf;
    packet->channel = channel;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE, (const char *)packet, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_MIN_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_DELETE_ALL_FILE UNPACKING


/**
 * @brief Get field channel from cmd_delete_all_file message
 *
 * @return  Channel Num
 */
static inline uint8_t mavlink_msg_cmd_delete_all_file_get_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field result from cmd_delete_all_file message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_delete_all_file_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a cmd_delete_all_file message into a struct
 *
 * @param msg The message to decode
 * @param cmd_delete_all_file C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_delete_all_file_decode(const mavlink_message_t* msg, mavlink_cmd_delete_all_file_t* cmd_delete_all_file)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_delete_all_file->channel = mavlink_msg_cmd_delete_all_file_get_channel(msg);
    cmd_delete_all_file->result = mavlink_msg_cmd_delete_all_file_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN? msg->len : MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN;
        memset(cmd_delete_all_file, 0, MAVLINK_MSG_ID_CMD_DELETE_ALL_FILE_LEN);
    memcpy(cmd_delete_all_file, _MAV_PAYLOAD(msg), len);
#endif
}
