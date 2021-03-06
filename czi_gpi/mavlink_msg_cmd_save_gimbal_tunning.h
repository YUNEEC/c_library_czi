#pragma once
// MESSAGE CMD_SAVE_GIMBAL_TUNNING PACKING

#define MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING 100034


typedef struct __mavlink_cmd_save_gimbal_tunning_t {
 uint8_t param_1; /*<  parameter 1*/
} mavlink_cmd_save_gimbal_tunning_t;

#define MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN 1
#define MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_MIN_LEN 1
#define MAVLINK_MSG_ID_100034_LEN 1
#define MAVLINK_MSG_ID_100034_MIN_LEN 1

#define MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_CRC 157
#define MAVLINK_MSG_ID_100034_CRC 157



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_SAVE_GIMBAL_TUNNING { \
    100034, \
    "CMD_SAVE_GIMBAL_TUNNING", \
    1, \
    {  { "param_1", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_save_gimbal_tunning_t, param_1) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_SAVE_GIMBAL_TUNNING { \
    "CMD_SAVE_GIMBAL_TUNNING", \
    1, \
    {  { "param_1", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_save_gimbal_tunning_t, param_1) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_save_gimbal_tunning message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param param_1  parameter 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_save_gimbal_tunning_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t param_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN];
    _mav_put_uint8_t(buf, 0, param_1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN);
#else
    mavlink_cmd_save_gimbal_tunning_t packet;
    packet.param_1 = param_1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_CRC);
}

/**
 * @brief Pack a cmd_save_gimbal_tunning message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param param_1  parameter 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_save_gimbal_tunning_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t param_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN];
    _mav_put_uint8_t(buf, 0, param_1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN);
#else
    mavlink_cmd_save_gimbal_tunning_t packet;
    packet.param_1 = param_1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_CRC);
}

/**
 * @brief Encode a cmd_save_gimbal_tunning struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_save_gimbal_tunning C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_save_gimbal_tunning_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_save_gimbal_tunning_t* cmd_save_gimbal_tunning)
{
    return mavlink_msg_cmd_save_gimbal_tunning_pack(system_id, component_id, msg, cmd_save_gimbal_tunning->param_1);
}

/**
 * @brief Encode a cmd_save_gimbal_tunning struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_save_gimbal_tunning C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_save_gimbal_tunning_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_save_gimbal_tunning_t* cmd_save_gimbal_tunning)
{
    return mavlink_msg_cmd_save_gimbal_tunning_pack_chan(system_id, component_id, chan, msg, cmd_save_gimbal_tunning->param_1);
}

/**
 * @brief Send a cmd_save_gimbal_tunning message
 * @param chan MAVLink channel to send the message
 *
 * @param param_1  parameter 1
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_save_gimbal_tunning_send(mavlink_channel_t chan, uint8_t param_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN];
    _mav_put_uint8_t(buf, 0, param_1);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING, buf, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_CRC);
#else
    mavlink_cmd_save_gimbal_tunning_t packet;
    packet.param_1 = param_1;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING, (const char *)&packet, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_CRC);
#endif
}

/**
 * @brief Send a cmd_save_gimbal_tunning message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_save_gimbal_tunning_send_struct(mavlink_channel_t chan, const mavlink_cmd_save_gimbal_tunning_t* cmd_save_gimbal_tunning)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_save_gimbal_tunning_send(chan, cmd_save_gimbal_tunning->param_1);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING, (const char *)cmd_save_gimbal_tunning, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_save_gimbal_tunning_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t param_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, param_1);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING, buf, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_CRC);
#else
    mavlink_cmd_save_gimbal_tunning_t *packet = (mavlink_cmd_save_gimbal_tunning_t *)msgbuf;
    packet->param_1 = param_1;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING, (const char *)packet, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_SAVE_GIMBAL_TUNNING UNPACKING


/**
 * @brief Get field param_1 from cmd_save_gimbal_tunning message
 *
 * @return  parameter 1
 */
static inline uint8_t mavlink_msg_cmd_save_gimbal_tunning_get_param_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a cmd_save_gimbal_tunning message into a struct
 *
 * @param msg The message to decode
 * @param cmd_save_gimbal_tunning C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_save_gimbal_tunning_decode(const mavlink_message_t* msg, mavlink_cmd_save_gimbal_tunning_t* cmd_save_gimbal_tunning)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_save_gimbal_tunning->param_1 = mavlink_msg_cmd_save_gimbal_tunning_get_param_1(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN? msg->len : MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN;
        memset(cmd_save_gimbal_tunning, 0, MAVLINK_MSG_ID_CMD_SAVE_GIMBAL_TUNNING_LEN);
    memcpy(cmd_save_gimbal_tunning, _MAV_PAYLOAD(msg), len);
#endif
}
