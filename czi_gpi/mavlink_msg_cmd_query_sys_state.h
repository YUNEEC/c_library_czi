#pragma once
// MESSAGE CMD_QUERY_SYS_STATE PACKING

#define MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE 100014


typedef struct __mavlink_cmd_query_sys_state_t {
 uint32_t status_id; /*<  Offset(settting)*/
} mavlink_cmd_query_sys_state_t;

#define MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN 4
#define MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_MIN_LEN 4
#define MAVLINK_MSG_ID_100014_LEN 4
#define MAVLINK_MSG_ID_100014_MIN_LEN 4

#define MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_CRC 210
#define MAVLINK_MSG_ID_100014_CRC 210



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_QUERY_SYS_STATE { \
    100014, \
    "CMD_QUERY_SYS_STATE", \
    1, \
    {  { "status_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_cmd_query_sys_state_t, status_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_QUERY_SYS_STATE { \
    "CMD_QUERY_SYS_STATE", \
    1, \
    {  { "status_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_cmd_query_sys_state_t, status_id) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_query_sys_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param status_id  Offset(settting)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_query_sys_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t status_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN];
    _mav_put_uint32_t(buf, 0, status_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN);
#else
    mavlink_cmd_query_sys_state_t packet;
    packet.status_id = status_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_CRC);
}

/**
 * @brief Pack a cmd_query_sys_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param status_id  Offset(settting)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_query_sys_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t status_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN];
    _mav_put_uint32_t(buf, 0, status_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN);
#else
    mavlink_cmd_query_sys_state_t packet;
    packet.status_id = status_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_CRC);
}

/**
 * @brief Encode a cmd_query_sys_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_query_sys_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_query_sys_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_query_sys_state_t* cmd_query_sys_state)
{
    return mavlink_msg_cmd_query_sys_state_pack(system_id, component_id, msg, cmd_query_sys_state->status_id);
}

/**
 * @brief Encode a cmd_query_sys_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_query_sys_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_query_sys_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_query_sys_state_t* cmd_query_sys_state)
{
    return mavlink_msg_cmd_query_sys_state_pack_chan(system_id, component_id, chan, msg, cmd_query_sys_state->status_id);
}

/**
 * @brief Send a cmd_query_sys_state message
 * @param chan MAVLink channel to send the message
 *
 * @param status_id  Offset(settting)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_query_sys_state_send(mavlink_channel_t chan, uint32_t status_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN];
    _mav_put_uint32_t(buf, 0, status_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE, buf, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_CRC);
#else
    mavlink_cmd_query_sys_state_t packet;
    packet.status_id = status_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE, (const char *)&packet, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_CRC);
#endif
}

/**
 * @brief Send a cmd_query_sys_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_query_sys_state_send_struct(mavlink_channel_t chan, const mavlink_cmd_query_sys_state_t* cmd_query_sys_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_query_sys_state_send(chan, cmd_query_sys_state->status_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE, (const char *)cmd_query_sys_state, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_query_sys_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t status_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, status_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE, buf, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_CRC);
#else
    mavlink_cmd_query_sys_state_t *packet = (mavlink_cmd_query_sys_state_t *)msgbuf;
    packet->status_id = status_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE, (const char *)packet, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_QUERY_SYS_STATE UNPACKING


/**
 * @brief Get field status_id from cmd_query_sys_state message
 *
 * @return  Offset(settting)
 */
static inline uint32_t mavlink_msg_cmd_query_sys_state_get_status_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a cmd_query_sys_state message into a struct
 *
 * @param msg The message to decode
 * @param cmd_query_sys_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_query_sys_state_decode(const mavlink_message_t* msg, mavlink_cmd_query_sys_state_t* cmd_query_sys_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_query_sys_state->status_id = mavlink_msg_cmd_query_sys_state_get_status_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN? msg->len : MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN;
        memset(cmd_query_sys_state, 0, MAVLINK_MSG_ID_CMD_QUERY_SYS_STATE_LEN);
    memcpy(cmd_query_sys_state, _MAV_PAYLOAD(msg), len);
#endif
}
