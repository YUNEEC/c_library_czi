#pragma once
// MESSAGE CMD_UPDATE_VEHICLE_STATE PACKING

#define MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE 100050


typedef struct __mavlink_cmd_update_vehicle_state_t {
 int16_t acc_x; /*<  accelerated speed x 0.01m/s2*/
 int16_t acc_y; /*<  accelerated speed y 0.01m/s2*/
 int16_t acc_z; /*<  accelerated speed z 0.01m/s2*/
 int16_t gimbal_mount_offset; /*<  the offset from gimbal direction to vehicle direction. avalible number:0-360 0.1degree each*/
 int16_t vehicle_yaw; /*<  yaw angle. from north to east, north=0.avalible number:0-360 0.1degree each. */
} mavlink_cmd_update_vehicle_state_t;

#define MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN 10
#define MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_MIN_LEN 10
#define MAVLINK_MSG_ID_100050_LEN 10
#define MAVLINK_MSG_ID_100050_MIN_LEN 10

#define MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_CRC 145
#define MAVLINK_MSG_ID_100050_CRC 145



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_UPDATE_VEHICLE_STATE { \
    100050, \
    "CMD_UPDATE_VEHICLE_STATE", \
    5, \
    {  { "acc_x", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_cmd_update_vehicle_state_t, acc_x) }, \
         { "acc_y", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_cmd_update_vehicle_state_t, acc_y) }, \
         { "acc_z", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_cmd_update_vehicle_state_t, acc_z) }, \
         { "gimbal_mount_offset", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_cmd_update_vehicle_state_t, gimbal_mount_offset) }, \
         { "vehicle_yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_cmd_update_vehicle_state_t, vehicle_yaw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_UPDATE_VEHICLE_STATE { \
    "CMD_UPDATE_VEHICLE_STATE", \
    5, \
    {  { "acc_x", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_cmd_update_vehicle_state_t, acc_x) }, \
         { "acc_y", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_cmd_update_vehicle_state_t, acc_y) }, \
         { "acc_z", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_cmd_update_vehicle_state_t, acc_z) }, \
         { "gimbal_mount_offset", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_cmd_update_vehicle_state_t, gimbal_mount_offset) }, \
         { "vehicle_yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_cmd_update_vehicle_state_t, vehicle_yaw) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_update_vehicle_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param acc_x  accelerated speed x 0.01m/s2
 * @param acc_y  accelerated speed y 0.01m/s2
 * @param acc_z  accelerated speed z 0.01m/s2
 * @param gimbal_mount_offset  the offset from gimbal direction to vehicle direction. avalible number:0-360 0.1degree each
 * @param vehicle_yaw  yaw angle. from north to east, north=0.avalible number:0-360 0.1degree each. 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_update_vehicle_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t acc_x, int16_t acc_y, int16_t acc_z, int16_t gimbal_mount_offset, int16_t vehicle_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN];
    _mav_put_int16_t(buf, 0, acc_x);
    _mav_put_int16_t(buf, 2, acc_y);
    _mav_put_int16_t(buf, 4, acc_z);
    _mav_put_int16_t(buf, 6, gimbal_mount_offset);
    _mav_put_int16_t(buf, 8, vehicle_yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN);
#else
    mavlink_cmd_update_vehicle_state_t packet;
    packet.acc_x = acc_x;
    packet.acc_y = acc_y;
    packet.acc_z = acc_z;
    packet.gimbal_mount_offset = gimbal_mount_offset;
    packet.vehicle_yaw = vehicle_yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_CRC);
}

/**
 * @brief Pack a cmd_update_vehicle_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param acc_x  accelerated speed x 0.01m/s2
 * @param acc_y  accelerated speed y 0.01m/s2
 * @param acc_z  accelerated speed z 0.01m/s2
 * @param gimbal_mount_offset  the offset from gimbal direction to vehicle direction. avalible number:0-360 0.1degree each
 * @param vehicle_yaw  yaw angle. from north to east, north=0.avalible number:0-360 0.1degree each. 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_update_vehicle_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t acc_x,int16_t acc_y,int16_t acc_z,int16_t gimbal_mount_offset,int16_t vehicle_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN];
    _mav_put_int16_t(buf, 0, acc_x);
    _mav_put_int16_t(buf, 2, acc_y);
    _mav_put_int16_t(buf, 4, acc_z);
    _mav_put_int16_t(buf, 6, gimbal_mount_offset);
    _mav_put_int16_t(buf, 8, vehicle_yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN);
#else
    mavlink_cmd_update_vehicle_state_t packet;
    packet.acc_x = acc_x;
    packet.acc_y = acc_y;
    packet.acc_z = acc_z;
    packet.gimbal_mount_offset = gimbal_mount_offset;
    packet.vehicle_yaw = vehicle_yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_CRC);
}

/**
 * @brief Encode a cmd_update_vehicle_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_update_vehicle_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_update_vehicle_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_update_vehicle_state_t* cmd_update_vehicle_state)
{
    return mavlink_msg_cmd_update_vehicle_state_pack(system_id, component_id, msg, cmd_update_vehicle_state->acc_x, cmd_update_vehicle_state->acc_y, cmd_update_vehicle_state->acc_z, cmd_update_vehicle_state->gimbal_mount_offset, cmd_update_vehicle_state->vehicle_yaw);
}

/**
 * @brief Encode a cmd_update_vehicle_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_update_vehicle_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_update_vehicle_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_update_vehicle_state_t* cmd_update_vehicle_state)
{
    return mavlink_msg_cmd_update_vehicle_state_pack_chan(system_id, component_id, chan, msg, cmd_update_vehicle_state->acc_x, cmd_update_vehicle_state->acc_y, cmd_update_vehicle_state->acc_z, cmd_update_vehicle_state->gimbal_mount_offset, cmd_update_vehicle_state->vehicle_yaw);
}

/**
 * @brief Send a cmd_update_vehicle_state message
 * @param chan MAVLink channel to send the message
 *
 * @param acc_x  accelerated speed x 0.01m/s2
 * @param acc_y  accelerated speed y 0.01m/s2
 * @param acc_z  accelerated speed z 0.01m/s2
 * @param gimbal_mount_offset  the offset from gimbal direction to vehicle direction. avalible number:0-360 0.1degree each
 * @param vehicle_yaw  yaw angle. from north to east, north=0.avalible number:0-360 0.1degree each. 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_update_vehicle_state_send(mavlink_channel_t chan, int16_t acc_x, int16_t acc_y, int16_t acc_z, int16_t gimbal_mount_offset, int16_t vehicle_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN];
    _mav_put_int16_t(buf, 0, acc_x);
    _mav_put_int16_t(buf, 2, acc_y);
    _mav_put_int16_t(buf, 4, acc_z);
    _mav_put_int16_t(buf, 6, gimbal_mount_offset);
    _mav_put_int16_t(buf, 8, vehicle_yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE, buf, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_CRC);
#else
    mavlink_cmd_update_vehicle_state_t packet;
    packet.acc_x = acc_x;
    packet.acc_y = acc_y;
    packet.acc_z = acc_z;
    packet.gimbal_mount_offset = gimbal_mount_offset;
    packet.vehicle_yaw = vehicle_yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE, (const char *)&packet, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_CRC);
#endif
}

/**
 * @brief Send a cmd_update_vehicle_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_update_vehicle_state_send_struct(mavlink_channel_t chan, const mavlink_cmd_update_vehicle_state_t* cmd_update_vehicle_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_update_vehicle_state_send(chan, cmd_update_vehicle_state->acc_x, cmd_update_vehicle_state->acc_y, cmd_update_vehicle_state->acc_z, cmd_update_vehicle_state->gimbal_mount_offset, cmd_update_vehicle_state->vehicle_yaw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE, (const char *)cmd_update_vehicle_state, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_update_vehicle_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t acc_x, int16_t acc_y, int16_t acc_z, int16_t gimbal_mount_offset, int16_t vehicle_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, acc_x);
    _mav_put_int16_t(buf, 2, acc_y);
    _mav_put_int16_t(buf, 4, acc_z);
    _mav_put_int16_t(buf, 6, gimbal_mount_offset);
    _mav_put_int16_t(buf, 8, vehicle_yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE, buf, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_CRC);
#else
    mavlink_cmd_update_vehicle_state_t *packet = (mavlink_cmd_update_vehicle_state_t *)msgbuf;
    packet->acc_x = acc_x;
    packet->acc_y = acc_y;
    packet->acc_z = acc_z;
    packet->gimbal_mount_offset = gimbal_mount_offset;
    packet->vehicle_yaw = vehicle_yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE, (const char *)packet, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_UPDATE_VEHICLE_STATE UNPACKING


/**
 * @brief Get field acc_x from cmd_update_vehicle_state message
 *
 * @return  accelerated speed x 0.01m/s2
 */
static inline int16_t mavlink_msg_cmd_update_vehicle_state_get_acc_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field acc_y from cmd_update_vehicle_state message
 *
 * @return  accelerated speed y 0.01m/s2
 */
static inline int16_t mavlink_msg_cmd_update_vehicle_state_get_acc_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field acc_z from cmd_update_vehicle_state message
 *
 * @return  accelerated speed z 0.01m/s2
 */
static inline int16_t mavlink_msg_cmd_update_vehicle_state_get_acc_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field gimbal_mount_offset from cmd_update_vehicle_state message
 *
 * @return  the offset from gimbal direction to vehicle direction. avalible number:0-360 0.1degree each
 */
static inline int16_t mavlink_msg_cmd_update_vehicle_state_get_gimbal_mount_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field vehicle_yaw from cmd_update_vehicle_state message
 *
 * @return  yaw angle. from north to east, north=0.avalible number:0-360 0.1degree each. 
 */
static inline int16_t mavlink_msg_cmd_update_vehicle_state_get_vehicle_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Decode a cmd_update_vehicle_state message into a struct
 *
 * @param msg The message to decode
 * @param cmd_update_vehicle_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_update_vehicle_state_decode(const mavlink_message_t* msg, mavlink_cmd_update_vehicle_state_t* cmd_update_vehicle_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_update_vehicle_state->acc_x = mavlink_msg_cmd_update_vehicle_state_get_acc_x(msg);
    cmd_update_vehicle_state->acc_y = mavlink_msg_cmd_update_vehicle_state_get_acc_y(msg);
    cmd_update_vehicle_state->acc_z = mavlink_msg_cmd_update_vehicle_state_get_acc_z(msg);
    cmd_update_vehicle_state->gimbal_mount_offset = mavlink_msg_cmd_update_vehicle_state_get_gimbal_mount_offset(msg);
    cmd_update_vehicle_state->vehicle_yaw = mavlink_msg_cmd_update_vehicle_state_get_vehicle_yaw(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN? msg->len : MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN;
        memset(cmd_update_vehicle_state, 0, MAVLINK_MSG_ID_CMD_UPDATE_VEHICLE_STATE_LEN);
    memcpy(cmd_update_vehicle_state, _MAV_PAYLOAD(msg), len);
#endif
}
