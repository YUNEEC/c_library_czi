#pragma once
// MESSAGE ACK_SYS_STATE PACKING

#define MAVLINK_MSG_ID_ACK_SYS_STATE 100015


typedef struct __mavlink_ack_sys_state_t {
 uint32_t status_id; /*<  Offset(settting)*/
 uint8_t result; /*<  0: succeed 1: failed 3: busy*/
 char status_info[200]; /*<  parameters*/
} mavlink_ack_sys_state_t;

#define MAVLINK_MSG_ID_ACK_SYS_STATE_LEN 205
#define MAVLINK_MSG_ID_ACK_SYS_STATE_MIN_LEN 205
#define MAVLINK_MSG_ID_100015_LEN 205
#define MAVLINK_MSG_ID_100015_MIN_LEN 205

#define MAVLINK_MSG_ID_ACK_SYS_STATE_CRC 210
#define MAVLINK_MSG_ID_100015_CRC 210

#define MAVLINK_MSG_ACK_SYS_STATE_FIELD_STATUS_INFO_LEN 200

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACK_SYS_STATE { \
    100015, \
    "ACK_SYS_STATE", \
    3, \
    {  { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ack_sys_state_t, result) }, \
         { "status_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ack_sys_state_t, status_id) }, \
         { "status_info", NULL, MAVLINK_TYPE_CHAR, 200, 5, offsetof(mavlink_ack_sys_state_t, status_info) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACK_SYS_STATE { \
    "ACK_SYS_STATE", \
    3, \
    {  { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ack_sys_state_t, result) }, \
         { "status_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ack_sys_state_t, status_id) }, \
         { "status_info", NULL, MAVLINK_TYPE_CHAR, 200, 5, offsetof(mavlink_ack_sys_state_t, status_info) }, \
         } \
}
#endif

/**
 * @brief Pack a ack_sys_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param result  0: succeed 1: failed 3: busy
 * @param status_id  Offset(settting)
 * @param status_info  parameters
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ack_sys_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t result, uint32_t status_id, const char *status_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACK_SYS_STATE_LEN];
    _mav_put_uint32_t(buf, 0, status_id);
    _mav_put_uint8_t(buf, 4, result);
    _mav_put_char_array(buf, 5, status_info, 200);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACK_SYS_STATE_LEN);
#else
    mavlink_ack_sys_state_t packet;
    packet.status_id = status_id;
    packet.result = result;
    mav_array_memcpy(packet.status_info, status_info, sizeof(char)*200);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACK_SYS_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACK_SYS_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACK_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_CRC);
}

/**
 * @brief Pack a ack_sys_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param result  0: succeed 1: failed 3: busy
 * @param status_id  Offset(settting)
 * @param status_info  parameters
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ack_sys_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t result,uint32_t status_id,const char *status_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACK_SYS_STATE_LEN];
    _mav_put_uint32_t(buf, 0, status_id);
    _mav_put_uint8_t(buf, 4, result);
    _mav_put_char_array(buf, 5, status_info, 200);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACK_SYS_STATE_LEN);
#else
    mavlink_ack_sys_state_t packet;
    packet.status_id = status_id;
    packet.result = result;
    mav_array_memcpy(packet.status_info, status_info, sizeof(char)*200);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACK_SYS_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACK_SYS_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACK_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_CRC);
}

/**
 * @brief Encode a ack_sys_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ack_sys_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ack_sys_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ack_sys_state_t* ack_sys_state)
{
    return mavlink_msg_ack_sys_state_pack(system_id, component_id, msg, ack_sys_state->result, ack_sys_state->status_id, ack_sys_state->status_info);
}

/**
 * @brief Encode a ack_sys_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ack_sys_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ack_sys_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ack_sys_state_t* ack_sys_state)
{
    return mavlink_msg_ack_sys_state_pack_chan(system_id, component_id, chan, msg, ack_sys_state->result, ack_sys_state->status_id, ack_sys_state->status_info);
}

/**
 * @brief Send a ack_sys_state message
 * @param chan MAVLink channel to send the message
 *
 * @param result  0: succeed 1: failed 3: busy
 * @param status_id  Offset(settting)
 * @param status_info  parameters
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ack_sys_state_send(mavlink_channel_t chan, uint8_t result, uint32_t status_id, const char *status_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACK_SYS_STATE_LEN];
    _mav_put_uint32_t(buf, 0, status_id);
    _mav_put_uint8_t(buf, 4, result);
    _mav_put_char_array(buf, 5, status_info, 200);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_SYS_STATE, buf, MAVLINK_MSG_ID_ACK_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_CRC);
#else
    mavlink_ack_sys_state_t packet;
    packet.status_id = status_id;
    packet.result = result;
    mav_array_memcpy(packet.status_info, status_info, sizeof(char)*200);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_SYS_STATE, (const char *)&packet, MAVLINK_MSG_ID_ACK_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_CRC);
#endif
}

/**
 * @brief Send a ack_sys_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ack_sys_state_send_struct(mavlink_channel_t chan, const mavlink_ack_sys_state_t* ack_sys_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ack_sys_state_send(chan, ack_sys_state->result, ack_sys_state->status_id, ack_sys_state->status_info);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_SYS_STATE, (const char *)ack_sys_state, MAVLINK_MSG_ID_ACK_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACK_SYS_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ack_sys_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t result, uint32_t status_id, const char *status_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, status_id);
    _mav_put_uint8_t(buf, 4, result);
    _mav_put_char_array(buf, 5, status_info, 200);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_SYS_STATE, buf, MAVLINK_MSG_ID_ACK_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_CRC);
#else
    mavlink_ack_sys_state_t *packet = (mavlink_ack_sys_state_t *)msgbuf;
    packet->status_id = status_id;
    packet->result = result;
    mav_array_memcpy(packet->status_info, status_info, sizeof(char)*200);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_SYS_STATE, (const char *)packet, MAVLINK_MSG_ID_ACK_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_LEN, MAVLINK_MSG_ID_ACK_SYS_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE ACK_SYS_STATE UNPACKING


/**
 * @brief Get field result from ack_sys_state message
 *
 * @return  0: succeed 1: failed 3: busy
 */
static inline uint8_t mavlink_msg_ack_sys_state_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field status_id from ack_sys_state message
 *
 * @return  Offset(settting)
 */
static inline uint32_t mavlink_msg_ack_sys_state_get_status_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field status_info from ack_sys_state message
 *
 * @return  parameters
 */
static inline uint16_t mavlink_msg_ack_sys_state_get_status_info(const mavlink_message_t* msg, char *status_info)
{
    return _MAV_RETURN_char_array(msg, status_info, 200,  5);
}

/**
 * @brief Decode a ack_sys_state message into a struct
 *
 * @param msg The message to decode
 * @param ack_sys_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_ack_sys_state_decode(const mavlink_message_t* msg, mavlink_ack_sys_state_t* ack_sys_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ack_sys_state->status_id = mavlink_msg_ack_sys_state_get_status_id(msg);
    ack_sys_state->result = mavlink_msg_ack_sys_state_get_result(msg);
    mavlink_msg_ack_sys_state_get_status_info(msg, ack_sys_state->status_info);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACK_SYS_STATE_LEN? msg->len : MAVLINK_MSG_ID_ACK_SYS_STATE_LEN;
        memset(ack_sys_state, 0, MAVLINK_MSG_ID_ACK_SYS_STATE_LEN);
    memcpy(ack_sys_state, _MAV_PAYLOAD(msg), len);
#endif
}
