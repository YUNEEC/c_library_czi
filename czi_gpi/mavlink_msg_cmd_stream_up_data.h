#pragma once
// MESSAGE CMD_STREAM_UP_DATA PACKING

#define MAVLINK_MSG_ID_CMD_STREAM_UP_DATA 100098


typedef struct __mavlink_cmd_stream_up_data_t {
 uint8_t len; /*<  Length*/
 char data[250]; /*<  Data*/
} mavlink_cmd_stream_up_data_t;

#define MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN 251
#define MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_MIN_LEN 251
#define MAVLINK_MSG_ID_100098_LEN 251
#define MAVLINK_MSG_ID_100098_MIN_LEN 251

#define MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_CRC 14
#define MAVLINK_MSG_ID_100098_CRC 14

#define MAVLINK_MSG_CMD_STREAM_UP_DATA_FIELD_DATA_LEN 250

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_STREAM_UP_DATA { \
    100098, \
    "CMD_STREAM_UP_DATA", \
    2, \
    {  { "len", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_stream_up_data_t, len) }, \
         { "data", NULL, MAVLINK_TYPE_CHAR, 250, 1, offsetof(mavlink_cmd_stream_up_data_t, data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_STREAM_UP_DATA { \
    "CMD_STREAM_UP_DATA", \
    2, \
    {  { "len", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_stream_up_data_t, len) }, \
         { "data", NULL, MAVLINK_TYPE_CHAR, 250, 1, offsetof(mavlink_cmd_stream_up_data_t, data) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_stream_up_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param len  Length
 * @param data  Data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_stream_up_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t len, const char *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN];
    _mav_put_uint8_t(buf, 0, len);
    _mav_put_char_array(buf, 1, data, 250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN);
#else
    mavlink_cmd_stream_up_data_t packet;
    packet.len = len;
    mav_array_memcpy(packet.data, data, sizeof(char)*250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_STREAM_UP_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_CRC);
}

/**
 * @brief Pack a cmd_stream_up_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param len  Length
 * @param data  Data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_stream_up_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t len,const char *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN];
    _mav_put_uint8_t(buf, 0, len);
    _mav_put_char_array(buf, 1, data, 250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN);
#else
    mavlink_cmd_stream_up_data_t packet;
    packet.len = len;
    mav_array_memcpy(packet.data, data, sizeof(char)*250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_STREAM_UP_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_CRC);
}

/**
 * @brief Encode a cmd_stream_up_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_stream_up_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_stream_up_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_stream_up_data_t* cmd_stream_up_data)
{
    return mavlink_msg_cmd_stream_up_data_pack(system_id, component_id, msg, cmd_stream_up_data->len, cmd_stream_up_data->data);
}

/**
 * @brief Encode a cmd_stream_up_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_stream_up_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_stream_up_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_stream_up_data_t* cmd_stream_up_data)
{
    return mavlink_msg_cmd_stream_up_data_pack_chan(system_id, component_id, chan, msg, cmd_stream_up_data->len, cmd_stream_up_data->data);
}

/**
 * @brief Send a cmd_stream_up_data message
 * @param chan MAVLink channel to send the message
 *
 * @param len  Length
 * @param data  Data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_stream_up_data_send(mavlink_channel_t chan, uint8_t len, const char *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN];
    _mav_put_uint8_t(buf, 0, len);
    _mav_put_char_array(buf, 1, data, 250);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA, buf, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_CRC);
#else
    mavlink_cmd_stream_up_data_t packet;
    packet.len = len;
    mav_array_memcpy(packet.data, data, sizeof(char)*250);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA, (const char *)&packet, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_CRC);
#endif
}

/**
 * @brief Send a cmd_stream_up_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_stream_up_data_send_struct(mavlink_channel_t chan, const mavlink_cmd_stream_up_data_t* cmd_stream_up_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_stream_up_data_send(chan, cmd_stream_up_data->len, cmd_stream_up_data->data);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA, (const char *)cmd_stream_up_data, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_stream_up_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t len, const char *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, len);
    _mav_put_char_array(buf, 1, data, 250);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA, buf, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_CRC);
#else
    mavlink_cmd_stream_up_data_t *packet = (mavlink_cmd_stream_up_data_t *)msgbuf;
    packet->len = len;
    mav_array_memcpy(packet->data, data, sizeof(char)*250);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA, (const char *)packet, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_STREAM_UP_DATA UNPACKING


/**
 * @brief Get field len from cmd_stream_up_data message
 *
 * @return  Length
 */
static inline uint8_t mavlink_msg_cmd_stream_up_data_get_len(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field data from cmd_stream_up_data message
 *
 * @return  Data
 */
static inline uint16_t mavlink_msg_cmd_stream_up_data_get_data(const mavlink_message_t* msg, char *data)
{
    return _MAV_RETURN_char_array(msg, data, 250,  1);
}

/**
 * @brief Decode a cmd_stream_up_data message into a struct
 *
 * @param msg The message to decode
 * @param cmd_stream_up_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_stream_up_data_decode(const mavlink_message_t* msg, mavlink_cmd_stream_up_data_t* cmd_stream_up_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_stream_up_data->len = mavlink_msg_cmd_stream_up_data_get_len(msg);
    mavlink_msg_cmd_stream_up_data_get_data(msg, cmd_stream_up_data->data);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN? msg->len : MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN;
        memset(cmd_stream_up_data, 0, MAVLINK_MSG_ID_CMD_STREAM_UP_DATA_LEN);
    memcpy(cmd_stream_up_data, _MAV_PAYLOAD(msg), len);
#endif
}
