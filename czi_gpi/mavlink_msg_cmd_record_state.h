#pragma once
// MESSAGE CMD_RECORD_STATE PACKING

#define MAVLINK_MSG_ID_CMD_RECORD_STATE 100095


typedef struct __mavlink_cmd_record_state_t {
 uint8_t state; /*<  State*/
 uint8_t result; /*<  Result*/
} mavlink_cmd_record_state_t;

#define MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN 2
#define MAVLINK_MSG_ID_CMD_RECORD_STATE_MIN_LEN 2
#define MAVLINK_MSG_ID_100095_LEN 2
#define MAVLINK_MSG_ID_100095_MIN_LEN 2

#define MAVLINK_MSG_ID_CMD_RECORD_STATE_CRC 132
#define MAVLINK_MSG_ID_100095_CRC 132



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_RECORD_STATE { \
    100095, \
    "CMD_RECORD_STATE", \
    2, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_record_state_t, state) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_record_state_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_RECORD_STATE { \
    "CMD_RECORD_STATE", \
    2, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_record_state_t, state) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_record_state_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_record_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  State
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_record_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t state, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN);
#else
    mavlink_cmd_record_state_t packet;
    packet.state = state;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_RECORD_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_RECORD_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_CRC);
}

/**
 * @brief Pack a cmd_record_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param state  State
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_record_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t state,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN);
#else
    mavlink_cmd_record_state_t packet;
    packet.state = state;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_RECORD_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_RECORD_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_CRC);
}

/**
 * @brief Encode a cmd_record_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_record_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_record_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_record_state_t* cmd_record_state)
{
    return mavlink_msg_cmd_record_state_pack(system_id, component_id, msg, cmd_record_state->state, cmd_record_state->result);
}

/**
 * @brief Encode a cmd_record_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_record_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_record_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_record_state_t* cmd_record_state)
{
    return mavlink_msg_cmd_record_state_pack_chan(system_id, component_id, chan, msg, cmd_record_state->state, cmd_record_state->result);
}

/**
 * @brief Send a cmd_record_state message
 * @param chan MAVLink channel to send the message
 *
 * @param state  State
 * @param result  Result
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_record_state_send(mavlink_channel_t chan, uint8_t state, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_RECORD_STATE, buf, MAVLINK_MSG_ID_CMD_RECORD_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_CRC);
#else
    mavlink_cmd_record_state_t packet;
    packet.state = state;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_RECORD_STATE, (const char *)&packet, MAVLINK_MSG_ID_CMD_RECORD_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_CRC);
#endif
}

/**
 * @brief Send a cmd_record_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_record_state_send_struct(mavlink_channel_t chan, const mavlink_cmd_record_state_t* cmd_record_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_record_state_send(chan, cmd_record_state->state, cmd_record_state->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_RECORD_STATE, (const char *)cmd_record_state, MAVLINK_MSG_ID_CMD_RECORD_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_record_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t state, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_RECORD_STATE, buf, MAVLINK_MSG_ID_CMD_RECORD_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_CRC);
#else
    mavlink_cmd_record_state_t *packet = (mavlink_cmd_record_state_t *)msgbuf;
    packet->state = state;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_RECORD_STATE, (const char *)packet, MAVLINK_MSG_ID_CMD_RECORD_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN, MAVLINK_MSG_ID_CMD_RECORD_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_RECORD_STATE UNPACKING


/**
 * @brief Get field state from cmd_record_state message
 *
 * @return  State
 */
static inline uint8_t mavlink_msg_cmd_record_state_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field result from cmd_record_state message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_record_state_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a cmd_record_state message into a struct
 *
 * @param msg The message to decode
 * @param cmd_record_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_record_state_decode(const mavlink_message_t* msg, mavlink_cmd_record_state_t* cmd_record_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_record_state->state = mavlink_msg_cmd_record_state_get_state(msg);
    cmd_record_state->result = mavlink_msg_cmd_record_state_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN? msg->len : MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN;
        memset(cmd_record_state, 0, MAVLINK_MSG_ID_CMD_RECORD_STATE_LEN);
    memcpy(cmd_record_state, _MAV_PAYLOAD(msg), len);
#endif
}
