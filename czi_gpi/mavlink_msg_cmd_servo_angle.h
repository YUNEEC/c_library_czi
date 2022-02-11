#pragma once
// MESSAGE CMD_SERVO_ANGLE PACKING

#define MAVLINK_MSG_ID_CMD_SERVO_ANGLE 100112


typedef struct __mavlink_cmd_servo_angle_t {
 uint8_t angle; /*<  Angle*/
 uint8_t result; /*<  Result*/
} mavlink_cmd_servo_angle_t;

#define MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN 2
#define MAVLINK_MSG_ID_CMD_SERVO_ANGLE_MIN_LEN 2
#define MAVLINK_MSG_ID_100112_LEN 2
#define MAVLINK_MSG_ID_100112_MIN_LEN 2

#define MAVLINK_MSG_ID_CMD_SERVO_ANGLE_CRC 33
#define MAVLINK_MSG_ID_100112_CRC 33



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_SERVO_ANGLE { \
    100112, \
    "CMD_SERVO_ANGLE", \
    2, \
    {  { "angle", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_servo_angle_t, angle) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_servo_angle_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_SERVO_ANGLE { \
    "CMD_SERVO_ANGLE", \
    2, \
    {  { "angle", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_servo_angle_t, angle) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_servo_angle_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_servo_angle message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param angle  Angle
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_servo_angle_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t angle, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN];
    _mav_put_uint8_t(buf, 0, angle);
    _mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN);
#else
    mavlink_cmd_servo_angle_t packet;
    packet.angle = angle;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SERVO_ANGLE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_MIN_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_CRC);
}

/**
 * @brief Pack a cmd_servo_angle message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param angle  Angle
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_servo_angle_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t angle,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN];
    _mav_put_uint8_t(buf, 0, angle);
    _mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN);
#else
    mavlink_cmd_servo_angle_t packet;
    packet.angle = angle;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SERVO_ANGLE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_MIN_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_CRC);
}

/**
 * @brief Encode a cmd_servo_angle struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_servo_angle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_servo_angle_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_servo_angle_t* cmd_servo_angle)
{
    return mavlink_msg_cmd_servo_angle_pack(system_id, component_id, msg, cmd_servo_angle->angle, cmd_servo_angle->result);
}

/**
 * @brief Encode a cmd_servo_angle struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_servo_angle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_servo_angle_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_servo_angle_t* cmd_servo_angle)
{
    return mavlink_msg_cmd_servo_angle_pack_chan(system_id, component_id, chan, msg, cmd_servo_angle->angle, cmd_servo_angle->result);
}

/**
 * @brief Send a cmd_servo_angle message
 * @param chan MAVLink channel to send the message
 *
 * @param angle  Angle
 * @param result  Result
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_servo_angle_send(mavlink_channel_t chan, uint8_t angle, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN];
    _mav_put_uint8_t(buf, 0, angle);
    _mav_put_uint8_t(buf, 1, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SERVO_ANGLE, buf, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_MIN_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_CRC);
#else
    mavlink_cmd_servo_angle_t packet;
    packet.angle = angle;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SERVO_ANGLE, (const char *)&packet, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_MIN_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_CRC);
#endif
}

/**
 * @brief Send a cmd_servo_angle message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_servo_angle_send_struct(mavlink_channel_t chan, const mavlink_cmd_servo_angle_t* cmd_servo_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_servo_angle_send(chan, cmd_servo_angle->angle, cmd_servo_angle->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SERVO_ANGLE, (const char *)cmd_servo_angle, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_MIN_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_servo_angle_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t angle, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, angle);
    _mav_put_uint8_t(buf, 1, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SERVO_ANGLE, buf, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_MIN_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_CRC);
#else
    mavlink_cmd_servo_angle_t *packet = (mavlink_cmd_servo_angle_t *)msgbuf;
    packet->angle = angle;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SERVO_ANGLE, (const char *)packet, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_MIN_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_SERVO_ANGLE UNPACKING


/**
 * @brief Get field angle from cmd_servo_angle message
 *
 * @return  Angle
 */
static inline uint8_t mavlink_msg_cmd_servo_angle_get_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field result from cmd_servo_angle message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_servo_angle_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a cmd_servo_angle message into a struct
 *
 * @param msg The message to decode
 * @param cmd_servo_angle C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_servo_angle_decode(const mavlink_message_t* msg, mavlink_cmd_servo_angle_t* cmd_servo_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_servo_angle->angle = mavlink_msg_cmd_servo_angle_get_angle(msg);
    cmd_servo_angle->result = mavlink_msg_cmd_servo_angle_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN? msg->len : MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN;
        memset(cmd_servo_angle, 0, MAVLINK_MSG_ID_CMD_SERVO_ANGLE_LEN);
    memcpy(cmd_servo_angle, _MAV_PAYLOAD(msg), len);
#endif
}
