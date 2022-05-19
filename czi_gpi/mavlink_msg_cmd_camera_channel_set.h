#pragma once
// MESSAGE CMD_CAMERA_CHANNEL_SET PACKING

#define MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET 100107


typedef struct __mavlink_cmd_camera_channel_set_t {
 uint8_t status; /*<  1:to gpi 2:to ext 3:off*/
 uint8_t result; /*<  Result*/
} mavlink_cmd_camera_channel_set_t;

#define MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN 2
#define MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_MIN_LEN 2
#define MAVLINK_MSG_ID_100107_LEN 2
#define MAVLINK_MSG_ID_100107_MIN_LEN 2

#define MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_CRC 34
#define MAVLINK_MSG_ID_100107_CRC 34



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_CAMERA_CHANNEL_SET { \
    100107, \
    "CMD_CAMERA_CHANNEL_SET", \
    2, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_camera_channel_set_t, status) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_camera_channel_set_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_CAMERA_CHANNEL_SET { \
    "CMD_CAMERA_CHANNEL_SET", \
    2, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_camera_channel_set_t, status) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_camera_channel_set_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_camera_channel_set message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param status  1:to gpi 2:to ext 3:off
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_camera_channel_set_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t status, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN);
#else
    mavlink_cmd_camera_channel_set_t packet;
    packet.status = status;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_MIN_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_CRC);
}

/**
 * @brief Pack a cmd_camera_channel_set message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param status  1:to gpi 2:to ext 3:off
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_camera_channel_set_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t status,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN);
#else
    mavlink_cmd_camera_channel_set_t packet;
    packet.status = status;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_MIN_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_CRC);
}

/**
 * @brief Encode a cmd_camera_channel_set struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_camera_channel_set C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_camera_channel_set_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_camera_channel_set_t* cmd_camera_channel_set)
{
    return mavlink_msg_cmd_camera_channel_set_pack(system_id, component_id, msg, cmd_camera_channel_set->status, cmd_camera_channel_set->result);
}

/**
 * @brief Encode a cmd_camera_channel_set struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_camera_channel_set C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_camera_channel_set_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_camera_channel_set_t* cmd_camera_channel_set)
{
    return mavlink_msg_cmd_camera_channel_set_pack_chan(system_id, component_id, chan, msg, cmd_camera_channel_set->status, cmd_camera_channel_set->result);
}

/**
 * @brief Send a cmd_camera_channel_set message
 * @param chan MAVLink channel to send the message
 *
 * @param status  1:to gpi 2:to ext 3:off
 * @param result  Result
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_camera_channel_set_send(mavlink_channel_t chan, uint8_t status, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET, buf, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_MIN_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_CRC);
#else
    mavlink_cmd_camera_channel_set_t packet;
    packet.status = status;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET, (const char *)&packet, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_MIN_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_CRC);
#endif
}

/**
 * @brief Send a cmd_camera_channel_set message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_camera_channel_set_send_struct(mavlink_channel_t chan, const mavlink_cmd_camera_channel_set_t* cmd_camera_channel_set)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_camera_channel_set_send(chan, cmd_camera_channel_set->status, cmd_camera_channel_set->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET, (const char *)cmd_camera_channel_set, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_MIN_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_camera_channel_set_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t status, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET, buf, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_MIN_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_CRC);
#else
    mavlink_cmd_camera_channel_set_t *packet = (mavlink_cmd_camera_channel_set_t *)msgbuf;
    packet->status = status;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET, (const char *)packet, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_MIN_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_CAMERA_CHANNEL_SET UNPACKING


/**
 * @brief Get field status from cmd_camera_channel_set message
 *
 * @return  1:to gpi 2:to ext 3:off
 */
static inline uint8_t mavlink_msg_cmd_camera_channel_set_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field result from cmd_camera_channel_set message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_camera_channel_set_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a cmd_camera_channel_set message into a struct
 *
 * @param msg The message to decode
 * @param cmd_camera_channel_set C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_camera_channel_set_decode(const mavlink_message_t* msg, mavlink_cmd_camera_channel_set_t* cmd_camera_channel_set)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_camera_channel_set->status = mavlink_msg_cmd_camera_channel_set_get_status(msg);
    cmd_camera_channel_set->result = mavlink_msg_cmd_camera_channel_set_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN? msg->len : MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN;
        memset(cmd_camera_channel_set, 0, MAVLINK_MSG_ID_CMD_CAMERA_CHANNEL_SET_LEN);
    memcpy(cmd_camera_channel_set, _MAV_PAYLOAD(msg), len);
#endif
}
