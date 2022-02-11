#pragma once
// MESSAGE TH4_ERROR_STATE PACKING

#define MAVLINK_MSG_ID_TH4_ERROR_STATE 100257


typedef struct __mavlink_th4_error_state_t {
 uint8_t error; /*<  0xc0: Stuck 0xc1: Data error*/
} mavlink_th4_error_state_t;

#define MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN 1
#define MAVLINK_MSG_ID_TH4_ERROR_STATE_MIN_LEN 1
#define MAVLINK_MSG_ID_100257_LEN 1
#define MAVLINK_MSG_ID_100257_MIN_LEN 1

#define MAVLINK_MSG_ID_TH4_ERROR_STATE_CRC 166
#define MAVLINK_MSG_ID_100257_CRC 166



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TH4_ERROR_STATE { \
    100257, \
    "TH4_ERROR_STATE", \
    1, \
    {  { "error", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_th4_error_state_t, error) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TH4_ERROR_STATE { \
    "TH4_ERROR_STATE", \
    1, \
    {  { "error", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_th4_error_state_t, error) }, \
         } \
}
#endif

/**
 * @brief Pack a th4_error_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param error  0xc0: Stuck 0xc1: Data error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_th4_error_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN];
    _mav_put_uint8_t(buf, 0, error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN);
#else
    mavlink_th4_error_state_t packet;
    packet.error = error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TH4_ERROR_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TH4_ERROR_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_CRC);
}

/**
 * @brief Pack a th4_error_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param error  0xc0: Stuck 0xc1: Data error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_th4_error_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN];
    _mav_put_uint8_t(buf, 0, error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN);
#else
    mavlink_th4_error_state_t packet;
    packet.error = error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TH4_ERROR_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TH4_ERROR_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_CRC);
}

/**
 * @brief Encode a th4_error_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param th4_error_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_th4_error_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_th4_error_state_t* th4_error_state)
{
    return mavlink_msg_th4_error_state_pack(system_id, component_id, msg, th4_error_state->error);
}

/**
 * @brief Encode a th4_error_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param th4_error_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_th4_error_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_th4_error_state_t* th4_error_state)
{
    return mavlink_msg_th4_error_state_pack_chan(system_id, component_id, chan, msg, th4_error_state->error);
}

/**
 * @brief Send a th4_error_state message
 * @param chan MAVLink channel to send the message
 *
 * @param error  0xc0: Stuck 0xc1: Data error
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_th4_error_state_send(mavlink_channel_t chan, uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN];
    _mav_put_uint8_t(buf, 0, error);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_ERROR_STATE, buf, MAVLINK_MSG_ID_TH4_ERROR_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_CRC);
#else
    mavlink_th4_error_state_t packet;
    packet.error = error;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_ERROR_STATE, (const char *)&packet, MAVLINK_MSG_ID_TH4_ERROR_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_CRC);
#endif
}

/**
 * @brief Send a th4_error_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_th4_error_state_send_struct(mavlink_channel_t chan, const mavlink_th4_error_state_t* th4_error_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_th4_error_state_send(chan, th4_error_state->error);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_ERROR_STATE, (const char *)th4_error_state, MAVLINK_MSG_ID_TH4_ERROR_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_th4_error_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, error);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_ERROR_STATE, buf, MAVLINK_MSG_ID_TH4_ERROR_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_CRC);
#else
    mavlink_th4_error_state_t *packet = (mavlink_th4_error_state_t *)msgbuf;
    packet->error = error;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_ERROR_STATE, (const char *)packet, MAVLINK_MSG_ID_TH4_ERROR_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN, MAVLINK_MSG_ID_TH4_ERROR_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE TH4_ERROR_STATE UNPACKING


/**
 * @brief Get field error from th4_error_state message
 *
 * @return  0xc0: Stuck 0xc1: Data error
 */
static inline uint8_t mavlink_msg_th4_error_state_get_error(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a th4_error_state message into a struct
 *
 * @param msg The message to decode
 * @param th4_error_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_th4_error_state_decode(const mavlink_message_t* msg, mavlink_th4_error_state_t* th4_error_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    th4_error_state->error = mavlink_msg_th4_error_state_get_error(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN? msg->len : MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN;
        memset(th4_error_state, 0, MAVLINK_MSG_ID_TH4_ERROR_STATE_LEN);
    memcpy(th4_error_state, _MAV_PAYLOAD(msg), len);
#endif
}
