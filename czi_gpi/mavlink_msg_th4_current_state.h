#pragma once
// MESSAGE TH4_CURRENT_STATE PACKING

#define MAVLINK_MSG_ID_TH4_CURRENT_STATE 100256


typedef struct __mavlink_th4_current_state_t {
 uint8_t lock; /*<  0xa2: locked 0xa3: unlocked*/
 uint8_t location; /*<  throwing hook position: 0xb0~0xb4*/
} mavlink_th4_current_state_t;

#define MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN 2
#define MAVLINK_MSG_ID_TH4_CURRENT_STATE_MIN_LEN 2
#define MAVLINK_MSG_ID_100256_LEN 2
#define MAVLINK_MSG_ID_100256_MIN_LEN 2

#define MAVLINK_MSG_ID_TH4_CURRENT_STATE_CRC 178
#define MAVLINK_MSG_ID_100256_CRC 178



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TH4_CURRENT_STATE { \
    100256, \
    "TH4_CURRENT_STATE", \
    2, \
    {  { "lock", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_th4_current_state_t, lock) }, \
         { "location", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_th4_current_state_t, location) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TH4_CURRENT_STATE { \
    "TH4_CURRENT_STATE", \
    2, \
    {  { "lock", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_th4_current_state_t, lock) }, \
         { "location", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_th4_current_state_t, location) }, \
         } \
}
#endif

/**
 * @brief Pack a th4_current_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param lock  0xa2: locked 0xa3: unlocked
 * @param location  throwing hook position: 0xb0~0xb4
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_th4_current_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t lock, uint8_t location)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN];
    _mav_put_uint8_t(buf, 0, lock);
    _mav_put_uint8_t(buf, 1, location);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN);
#else
    mavlink_th4_current_state_t packet;
    packet.lock = lock;
    packet.location = location;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TH4_CURRENT_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TH4_CURRENT_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_CRC);
}

/**
 * @brief Pack a th4_current_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lock  0xa2: locked 0xa3: unlocked
 * @param location  throwing hook position: 0xb0~0xb4
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_th4_current_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t lock,uint8_t location)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN];
    _mav_put_uint8_t(buf, 0, lock);
    _mav_put_uint8_t(buf, 1, location);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN);
#else
    mavlink_th4_current_state_t packet;
    packet.lock = lock;
    packet.location = location;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TH4_CURRENT_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TH4_CURRENT_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_CRC);
}

/**
 * @brief Encode a th4_current_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param th4_current_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_th4_current_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_th4_current_state_t* th4_current_state)
{
    return mavlink_msg_th4_current_state_pack(system_id, component_id, msg, th4_current_state->lock, th4_current_state->location);
}

/**
 * @brief Encode a th4_current_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param th4_current_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_th4_current_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_th4_current_state_t* th4_current_state)
{
    return mavlink_msg_th4_current_state_pack_chan(system_id, component_id, chan, msg, th4_current_state->lock, th4_current_state->location);
}

/**
 * @brief Send a th4_current_state message
 * @param chan MAVLink channel to send the message
 *
 * @param lock  0xa2: locked 0xa3: unlocked
 * @param location  throwing hook position: 0xb0~0xb4
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_th4_current_state_send(mavlink_channel_t chan, uint8_t lock, uint8_t location)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN];
    _mav_put_uint8_t(buf, 0, lock);
    _mav_put_uint8_t(buf, 1, location);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_CURRENT_STATE, buf, MAVLINK_MSG_ID_TH4_CURRENT_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_CRC);
#else
    mavlink_th4_current_state_t packet;
    packet.lock = lock;
    packet.location = location;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_CURRENT_STATE, (const char *)&packet, MAVLINK_MSG_ID_TH4_CURRENT_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_CRC);
#endif
}

/**
 * @brief Send a th4_current_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_th4_current_state_send_struct(mavlink_channel_t chan, const mavlink_th4_current_state_t* th4_current_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_th4_current_state_send(chan, th4_current_state->lock, th4_current_state->location);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_CURRENT_STATE, (const char *)th4_current_state, MAVLINK_MSG_ID_TH4_CURRENT_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_th4_current_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t lock, uint8_t location)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, lock);
    _mav_put_uint8_t(buf, 1, location);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_CURRENT_STATE, buf, MAVLINK_MSG_ID_TH4_CURRENT_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_CRC);
#else
    mavlink_th4_current_state_t *packet = (mavlink_th4_current_state_t *)msgbuf;
    packet->lock = lock;
    packet->location = location;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_CURRENT_STATE, (const char *)packet, MAVLINK_MSG_ID_TH4_CURRENT_STATE_MIN_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN, MAVLINK_MSG_ID_TH4_CURRENT_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE TH4_CURRENT_STATE UNPACKING


/**
 * @brief Get field lock from th4_current_state message
 *
 * @return  0xa2: locked 0xa3: unlocked
 */
static inline uint8_t mavlink_msg_th4_current_state_get_lock(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field location from th4_current_state message
 *
 * @return  throwing hook position: 0xb0~0xb4
 */
static inline uint8_t mavlink_msg_th4_current_state_get_location(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a th4_current_state message into a struct
 *
 * @param msg The message to decode
 * @param th4_current_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_th4_current_state_decode(const mavlink_message_t* msg, mavlink_th4_current_state_t* th4_current_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    th4_current_state->lock = mavlink_msg_th4_current_state_get_lock(msg);
    th4_current_state->location = mavlink_msg_th4_current_state_get_location(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN? msg->len : MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN;
        memset(th4_current_state, 0, MAVLINK_MSG_ID_TH4_CURRENT_STATE_LEN);
    memcpy(th4_current_state, _MAV_PAYLOAD(msg), len);
#endif
}
