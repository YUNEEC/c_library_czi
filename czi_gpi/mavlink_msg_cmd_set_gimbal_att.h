#pragma once
// MESSAGE CMD_SET_GIMBAL_ATT PACKING

#define MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT 100032


typedef struct __mavlink_cmd_set_gimbal_att_t {
 int16_t pitch; /*<  Pitch: -1200~450 unit: 0.1 deg*/
 int16_t yaw; /*<  Yaw: -2700-2700 unit: 0.1 deg*/
} mavlink_cmd_set_gimbal_att_t;

#define MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN 4
#define MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_MIN_LEN 4
#define MAVLINK_MSG_ID_100032_LEN 4
#define MAVLINK_MSG_ID_100032_MIN_LEN 4

#define MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_CRC 172
#define MAVLINK_MSG_ID_100032_CRC 172



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_SET_GIMBAL_ATT { \
    100032, \
    "CMD_SET_GIMBAL_ATT", \
    2, \
    {  { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_cmd_set_gimbal_att_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_cmd_set_gimbal_att_t, yaw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_SET_GIMBAL_ATT { \
    "CMD_SET_GIMBAL_ATT", \
    2, \
    {  { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_cmd_set_gimbal_att_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_cmd_set_gimbal_att_t, yaw) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_set_gimbal_att message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pitch  Pitch: -1200~450 unit: 0.1 deg
 * @param yaw  Yaw: -2700-2700 unit: 0.1 deg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_gimbal_att_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t pitch, int16_t yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN];
    _mav_put_int16_t(buf, 0, pitch);
    _mav_put_int16_t(buf, 2, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN);
#else
    mavlink_cmd_set_gimbal_att_t packet;
    packet.pitch = pitch;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_CRC);
}

/**
 * @brief Pack a cmd_set_gimbal_att message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pitch  Pitch: -1200~450 unit: 0.1 deg
 * @param yaw  Yaw: -2700-2700 unit: 0.1 deg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_gimbal_att_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t pitch,int16_t yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN];
    _mav_put_int16_t(buf, 0, pitch);
    _mav_put_int16_t(buf, 2, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN);
#else
    mavlink_cmd_set_gimbal_att_t packet;
    packet.pitch = pitch;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_CRC);
}

/**
 * @brief Encode a cmd_set_gimbal_att struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_gimbal_att C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_gimbal_att_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_set_gimbal_att_t* cmd_set_gimbal_att)
{
    return mavlink_msg_cmd_set_gimbal_att_pack(system_id, component_id, msg, cmd_set_gimbal_att->pitch, cmd_set_gimbal_att->yaw);
}

/**
 * @brief Encode a cmd_set_gimbal_att struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_gimbal_att C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_gimbal_att_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_set_gimbal_att_t* cmd_set_gimbal_att)
{
    return mavlink_msg_cmd_set_gimbal_att_pack_chan(system_id, component_id, chan, msg, cmd_set_gimbal_att->pitch, cmd_set_gimbal_att->yaw);
}

/**
 * @brief Send a cmd_set_gimbal_att message
 * @param chan MAVLink channel to send the message
 *
 * @param pitch  Pitch: -1200~450 unit: 0.1 deg
 * @param yaw  Yaw: -2700-2700 unit: 0.1 deg
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_set_gimbal_att_send(mavlink_channel_t chan, int16_t pitch, int16_t yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN];
    _mav_put_int16_t(buf, 0, pitch);
    _mav_put_int16_t(buf, 2, yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT, buf, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_CRC);
#else
    mavlink_cmd_set_gimbal_att_t packet;
    packet.pitch = pitch;
    packet.yaw = yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT, (const char *)&packet, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_CRC);
#endif
}

/**
 * @brief Send a cmd_set_gimbal_att message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_set_gimbal_att_send_struct(mavlink_channel_t chan, const mavlink_cmd_set_gimbal_att_t* cmd_set_gimbal_att)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_set_gimbal_att_send(chan, cmd_set_gimbal_att->pitch, cmd_set_gimbal_att->yaw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT, (const char *)cmd_set_gimbal_att, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_set_gimbal_att_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t pitch, int16_t yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, pitch);
    _mav_put_int16_t(buf, 2, yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT, buf, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_CRC);
#else
    mavlink_cmd_set_gimbal_att_t *packet = (mavlink_cmd_set_gimbal_att_t *)msgbuf;
    packet->pitch = pitch;
    packet->yaw = yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT, (const char *)packet, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_SET_GIMBAL_ATT UNPACKING


/**
 * @brief Get field pitch from cmd_set_gimbal_att message
 *
 * @return  Pitch: -1200~450 unit: 0.1 deg
 */
static inline int16_t mavlink_msg_cmd_set_gimbal_att_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field yaw from cmd_set_gimbal_att message
 *
 * @return  Yaw: -2700-2700 unit: 0.1 deg
 */
static inline int16_t mavlink_msg_cmd_set_gimbal_att_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Decode a cmd_set_gimbal_att message into a struct
 *
 * @param msg The message to decode
 * @param cmd_set_gimbal_att C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_set_gimbal_att_decode(const mavlink_message_t* msg, mavlink_cmd_set_gimbal_att_t* cmd_set_gimbal_att)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_set_gimbal_att->pitch = mavlink_msg_cmd_set_gimbal_att_get_pitch(msg);
    cmd_set_gimbal_att->yaw = mavlink_msg_cmd_set_gimbal_att_get_yaw(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN? msg->len : MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN;
        memset(cmd_set_gimbal_att, 0, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_LEN);
    memcpy(cmd_set_gimbal_att, _MAV_PAYLOAD(msg), len);
#endif
}
