#pragma once
// MESSAGE CMD_SET_GIMBAL_ATT_TUNNING PACKING

#define MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING 100033


typedef struct __mavlink_cmd_set_gimbal_att_tunning_t {
 int16_t pitch; /*<  Pitch: -1200~450 unit: 0.1 deg*/
 int16_t roll; /*<  Roll: -300~300 unit: 0.1 deg*/
 int16_t yaw; /*<  Yaw: -2700-2700 unit: 0.1 deg*/
} mavlink_cmd_set_gimbal_att_tunning_t;

#define MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN 6
#define MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_MIN_LEN 6
#define MAVLINK_MSG_ID_100033_LEN 6
#define MAVLINK_MSG_ID_100033_MIN_LEN 6

#define MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_CRC 72
#define MAVLINK_MSG_ID_100033_CRC 72



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_SET_GIMBAL_ATT_TUNNING { \
    100033, \
    "CMD_SET_GIMBAL_ATT_TUNNING", \
    3, \
    {  { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_cmd_set_gimbal_att_tunning_t, pitch) }, \
         { "roll", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_cmd_set_gimbal_att_tunning_t, roll) }, \
         { "yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_cmd_set_gimbal_att_tunning_t, yaw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_SET_GIMBAL_ATT_TUNNING { \
    "CMD_SET_GIMBAL_ATT_TUNNING", \
    3, \
    {  { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_cmd_set_gimbal_att_tunning_t, pitch) }, \
         { "roll", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_cmd_set_gimbal_att_tunning_t, roll) }, \
         { "yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_cmd_set_gimbal_att_tunning_t, yaw) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_set_gimbal_att_tunning message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pitch  Pitch: -1200~450 unit: 0.1 deg
 * @param roll  Roll: -300~300 unit: 0.1 deg
 * @param yaw  Yaw: -2700-2700 unit: 0.1 deg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_gimbal_att_tunning_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t pitch, int16_t roll, int16_t yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN];
    _mav_put_int16_t(buf, 0, pitch);
    _mav_put_int16_t(buf, 2, roll);
    _mav_put_int16_t(buf, 4, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN);
#else
    mavlink_cmd_set_gimbal_att_tunning_t packet;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_CRC);
}

/**
 * @brief Pack a cmd_set_gimbal_att_tunning message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pitch  Pitch: -1200~450 unit: 0.1 deg
 * @param roll  Roll: -300~300 unit: 0.1 deg
 * @param yaw  Yaw: -2700-2700 unit: 0.1 deg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_gimbal_att_tunning_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t pitch,int16_t roll,int16_t yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN];
    _mav_put_int16_t(buf, 0, pitch);
    _mav_put_int16_t(buf, 2, roll);
    _mav_put_int16_t(buf, 4, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN);
#else
    mavlink_cmd_set_gimbal_att_tunning_t packet;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_CRC);
}

/**
 * @brief Encode a cmd_set_gimbal_att_tunning struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_gimbal_att_tunning C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_gimbal_att_tunning_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_set_gimbal_att_tunning_t* cmd_set_gimbal_att_tunning)
{
    return mavlink_msg_cmd_set_gimbal_att_tunning_pack(system_id, component_id, msg, cmd_set_gimbal_att_tunning->pitch, cmd_set_gimbal_att_tunning->roll, cmd_set_gimbal_att_tunning->yaw);
}

/**
 * @brief Encode a cmd_set_gimbal_att_tunning struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_gimbal_att_tunning C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_gimbal_att_tunning_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_set_gimbal_att_tunning_t* cmd_set_gimbal_att_tunning)
{
    return mavlink_msg_cmd_set_gimbal_att_tunning_pack_chan(system_id, component_id, chan, msg, cmd_set_gimbal_att_tunning->pitch, cmd_set_gimbal_att_tunning->roll, cmd_set_gimbal_att_tunning->yaw);
}

/**
 * @brief Send a cmd_set_gimbal_att_tunning message
 * @param chan MAVLink channel to send the message
 *
 * @param pitch  Pitch: -1200~450 unit: 0.1 deg
 * @param roll  Roll: -300~300 unit: 0.1 deg
 * @param yaw  Yaw: -2700-2700 unit: 0.1 deg
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_set_gimbal_att_tunning_send(mavlink_channel_t chan, int16_t pitch, int16_t roll, int16_t yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN];
    _mav_put_int16_t(buf, 0, pitch);
    _mav_put_int16_t(buf, 2, roll);
    _mav_put_int16_t(buf, 4, yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING, buf, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_CRC);
#else
    mavlink_cmd_set_gimbal_att_tunning_t packet;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.yaw = yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING, (const char *)&packet, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_CRC);
#endif
}

/**
 * @brief Send a cmd_set_gimbal_att_tunning message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_set_gimbal_att_tunning_send_struct(mavlink_channel_t chan, const mavlink_cmd_set_gimbal_att_tunning_t* cmd_set_gimbal_att_tunning)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_set_gimbal_att_tunning_send(chan, cmd_set_gimbal_att_tunning->pitch, cmd_set_gimbal_att_tunning->roll, cmd_set_gimbal_att_tunning->yaw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING, (const char *)cmd_set_gimbal_att_tunning, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_set_gimbal_att_tunning_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t pitch, int16_t roll, int16_t yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, pitch);
    _mav_put_int16_t(buf, 2, roll);
    _mav_put_int16_t(buf, 4, yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING, buf, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_CRC);
#else
    mavlink_cmd_set_gimbal_att_tunning_t *packet = (mavlink_cmd_set_gimbal_att_tunning_t *)msgbuf;
    packet->pitch = pitch;
    packet->roll = roll;
    packet->yaw = yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING, (const char *)packet, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_SET_GIMBAL_ATT_TUNNING UNPACKING


/**
 * @brief Get field pitch from cmd_set_gimbal_att_tunning message
 *
 * @return  Pitch: -1200~450 unit: 0.1 deg
 */
static inline int16_t mavlink_msg_cmd_set_gimbal_att_tunning_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field roll from cmd_set_gimbal_att_tunning message
 *
 * @return  Roll: -300~300 unit: 0.1 deg
 */
static inline int16_t mavlink_msg_cmd_set_gimbal_att_tunning_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field yaw from cmd_set_gimbal_att_tunning message
 *
 * @return  Yaw: -2700-2700 unit: 0.1 deg
 */
static inline int16_t mavlink_msg_cmd_set_gimbal_att_tunning_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Decode a cmd_set_gimbal_att_tunning message into a struct
 *
 * @param msg The message to decode
 * @param cmd_set_gimbal_att_tunning C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_set_gimbal_att_tunning_decode(const mavlink_message_t* msg, mavlink_cmd_set_gimbal_att_tunning_t* cmd_set_gimbal_att_tunning)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_set_gimbal_att_tunning->pitch = mavlink_msg_cmd_set_gimbal_att_tunning_get_pitch(msg);
    cmd_set_gimbal_att_tunning->roll = mavlink_msg_cmd_set_gimbal_att_tunning_get_roll(msg);
    cmd_set_gimbal_att_tunning->yaw = mavlink_msg_cmd_set_gimbal_att_tunning_get_yaw(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN? msg->len : MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN;
        memset(cmd_set_gimbal_att_tunning, 0, MAVLINK_MSG_ID_CMD_SET_GIMBAL_ATT_TUNNING_LEN);
    memcpy(cmd_set_gimbal_att_tunning, _MAV_PAYLOAD(msg), len);
#endif
}
