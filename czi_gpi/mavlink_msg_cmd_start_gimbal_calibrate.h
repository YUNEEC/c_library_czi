#pragma once
// MESSAGE CMD_START_GIMBAL_CALIBRATE PACKING

#define MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE 100035


typedef struct __mavlink_cmd_start_gimbal_calibrate_t {
 uint8_t param_1; /*<  parameter 1*/
} mavlink_cmd_start_gimbal_calibrate_t;

#define MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN 1
#define MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_MIN_LEN 1
#define MAVLINK_MSG_ID_100035_LEN 1
#define MAVLINK_MSG_ID_100035_MIN_LEN 1

#define MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_CRC 145
#define MAVLINK_MSG_ID_100035_CRC 145



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_START_GIMBAL_CALIBRATE { \
    100035, \
    "CMD_START_GIMBAL_CALIBRATE", \
    1, \
    {  { "param_1", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_start_gimbal_calibrate_t, param_1) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_START_GIMBAL_CALIBRATE { \
    "CMD_START_GIMBAL_CALIBRATE", \
    1, \
    {  { "param_1", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_start_gimbal_calibrate_t, param_1) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_start_gimbal_calibrate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param param_1  parameter 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_start_gimbal_calibrate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t param_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN];
    _mav_put_uint8_t(buf, 0, param_1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN);
#else
    mavlink_cmd_start_gimbal_calibrate_t packet;
    packet.param_1 = param_1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_MIN_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_CRC);
}

/**
 * @brief Pack a cmd_start_gimbal_calibrate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param param_1  parameter 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_start_gimbal_calibrate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t param_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN];
    _mav_put_uint8_t(buf, 0, param_1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN);
#else
    mavlink_cmd_start_gimbal_calibrate_t packet;
    packet.param_1 = param_1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_MIN_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_CRC);
}

/**
 * @brief Encode a cmd_start_gimbal_calibrate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_start_gimbal_calibrate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_start_gimbal_calibrate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_start_gimbal_calibrate_t* cmd_start_gimbal_calibrate)
{
    return mavlink_msg_cmd_start_gimbal_calibrate_pack(system_id, component_id, msg, cmd_start_gimbal_calibrate->param_1);
}

/**
 * @brief Encode a cmd_start_gimbal_calibrate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_start_gimbal_calibrate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_start_gimbal_calibrate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_start_gimbal_calibrate_t* cmd_start_gimbal_calibrate)
{
    return mavlink_msg_cmd_start_gimbal_calibrate_pack_chan(system_id, component_id, chan, msg, cmd_start_gimbal_calibrate->param_1);
}

/**
 * @brief Send a cmd_start_gimbal_calibrate message
 * @param chan MAVLink channel to send the message
 *
 * @param param_1  parameter 1
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_start_gimbal_calibrate_send(mavlink_channel_t chan, uint8_t param_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN];
    _mav_put_uint8_t(buf, 0, param_1);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE, buf, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_MIN_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_CRC);
#else
    mavlink_cmd_start_gimbal_calibrate_t packet;
    packet.param_1 = param_1;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE, (const char *)&packet, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_MIN_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_CRC);
#endif
}

/**
 * @brief Send a cmd_start_gimbal_calibrate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_start_gimbal_calibrate_send_struct(mavlink_channel_t chan, const mavlink_cmd_start_gimbal_calibrate_t* cmd_start_gimbal_calibrate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_start_gimbal_calibrate_send(chan, cmd_start_gimbal_calibrate->param_1);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE, (const char *)cmd_start_gimbal_calibrate, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_MIN_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_start_gimbal_calibrate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t param_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, param_1);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE, buf, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_MIN_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_CRC);
#else
    mavlink_cmd_start_gimbal_calibrate_t *packet = (mavlink_cmd_start_gimbal_calibrate_t *)msgbuf;
    packet->param_1 = param_1;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE, (const char *)packet, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_MIN_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_START_GIMBAL_CALIBRATE UNPACKING


/**
 * @brief Get field param_1 from cmd_start_gimbal_calibrate message
 *
 * @return  parameter 1
 */
static inline uint8_t mavlink_msg_cmd_start_gimbal_calibrate_get_param_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a cmd_start_gimbal_calibrate message into a struct
 *
 * @param msg The message to decode
 * @param cmd_start_gimbal_calibrate C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_start_gimbal_calibrate_decode(const mavlink_message_t* msg, mavlink_cmd_start_gimbal_calibrate_t* cmd_start_gimbal_calibrate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_start_gimbal_calibrate->param_1 = mavlink_msg_cmd_start_gimbal_calibrate_get_param_1(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN? msg->len : MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN;
        memset(cmd_start_gimbal_calibrate, 0, MAVLINK_MSG_ID_CMD_START_GIMBAL_CALIBRATE_LEN);
    memcpy(cmd_start_gimbal_calibrate, _MAV_PAYLOAD(msg), len);
#endif
}
