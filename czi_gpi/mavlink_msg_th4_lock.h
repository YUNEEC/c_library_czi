#pragma once
// MESSAGE TH4_LOCK PACKING

#define MAVLINK_MSG_ID_TH4_LOCK 100259


typedef struct __mavlink_th4_lock_t {
 uint8_t lock; /*<  0xa2: locked 0xa3: unlocked*/
} mavlink_th4_lock_t;

#define MAVLINK_MSG_ID_TH4_LOCK_LEN 1
#define MAVLINK_MSG_ID_TH4_LOCK_MIN_LEN 1
#define MAVLINK_MSG_ID_100259_LEN 1
#define MAVLINK_MSG_ID_100259_MIN_LEN 1

#define MAVLINK_MSG_ID_TH4_LOCK_CRC 120
#define MAVLINK_MSG_ID_100259_CRC 120



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TH4_LOCK { \
    100259, \
    "TH4_LOCK", \
    1, \
    {  { "lock", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_th4_lock_t, lock) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TH4_LOCK { \
    "TH4_LOCK", \
    1, \
    {  { "lock", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_th4_lock_t, lock) }, \
         } \
}
#endif

/**
 * @brief Pack a th4_lock message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param lock  0xa2: locked 0xa3: unlocked
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_th4_lock_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t lock)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_LOCK_LEN];
    _mav_put_uint8_t(buf, 0, lock);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TH4_LOCK_LEN);
#else
    mavlink_th4_lock_t packet;
    packet.lock = lock;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TH4_LOCK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TH4_LOCK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TH4_LOCK_MIN_LEN, MAVLINK_MSG_ID_TH4_LOCK_LEN, MAVLINK_MSG_ID_TH4_LOCK_CRC);
}

/**
 * @brief Pack a th4_lock message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lock  0xa2: locked 0xa3: unlocked
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_th4_lock_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t lock)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_LOCK_LEN];
    _mav_put_uint8_t(buf, 0, lock);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TH4_LOCK_LEN);
#else
    mavlink_th4_lock_t packet;
    packet.lock = lock;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TH4_LOCK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TH4_LOCK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TH4_LOCK_MIN_LEN, MAVLINK_MSG_ID_TH4_LOCK_LEN, MAVLINK_MSG_ID_TH4_LOCK_CRC);
}

/**
 * @brief Encode a th4_lock struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param th4_lock C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_th4_lock_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_th4_lock_t* th4_lock)
{
    return mavlink_msg_th4_lock_pack(system_id, component_id, msg, th4_lock->lock);
}

/**
 * @brief Encode a th4_lock struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param th4_lock C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_th4_lock_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_th4_lock_t* th4_lock)
{
    return mavlink_msg_th4_lock_pack_chan(system_id, component_id, chan, msg, th4_lock->lock);
}

/**
 * @brief Send a th4_lock message
 * @param chan MAVLink channel to send the message
 *
 * @param lock  0xa2: locked 0xa3: unlocked
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_th4_lock_send(mavlink_channel_t chan, uint8_t lock)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_LOCK_LEN];
    _mav_put_uint8_t(buf, 0, lock);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_LOCK, buf, MAVLINK_MSG_ID_TH4_LOCK_MIN_LEN, MAVLINK_MSG_ID_TH4_LOCK_LEN, MAVLINK_MSG_ID_TH4_LOCK_CRC);
#else
    mavlink_th4_lock_t packet;
    packet.lock = lock;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_LOCK, (const char *)&packet, MAVLINK_MSG_ID_TH4_LOCK_MIN_LEN, MAVLINK_MSG_ID_TH4_LOCK_LEN, MAVLINK_MSG_ID_TH4_LOCK_CRC);
#endif
}

/**
 * @brief Send a th4_lock message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_th4_lock_send_struct(mavlink_channel_t chan, const mavlink_th4_lock_t* th4_lock)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_th4_lock_send(chan, th4_lock->lock);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_LOCK, (const char *)th4_lock, MAVLINK_MSG_ID_TH4_LOCK_MIN_LEN, MAVLINK_MSG_ID_TH4_LOCK_LEN, MAVLINK_MSG_ID_TH4_LOCK_CRC);
#endif
}

#if MAVLINK_MSG_ID_TH4_LOCK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_th4_lock_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t lock)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, lock);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_LOCK, buf, MAVLINK_MSG_ID_TH4_LOCK_MIN_LEN, MAVLINK_MSG_ID_TH4_LOCK_LEN, MAVLINK_MSG_ID_TH4_LOCK_CRC);
#else
    mavlink_th4_lock_t *packet = (mavlink_th4_lock_t *)msgbuf;
    packet->lock = lock;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_LOCK, (const char *)packet, MAVLINK_MSG_ID_TH4_LOCK_MIN_LEN, MAVLINK_MSG_ID_TH4_LOCK_LEN, MAVLINK_MSG_ID_TH4_LOCK_CRC);
#endif
}
#endif

#endif

// MESSAGE TH4_LOCK UNPACKING


/**
 * @brief Get field lock from th4_lock message
 *
 * @return  0xa2: locked 0xa3: unlocked
 */
static inline uint8_t mavlink_msg_th4_lock_get_lock(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a th4_lock message into a struct
 *
 * @param msg The message to decode
 * @param th4_lock C-struct to decode the message contents into
 */
static inline void mavlink_msg_th4_lock_decode(const mavlink_message_t* msg, mavlink_th4_lock_t* th4_lock)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    th4_lock->lock = mavlink_msg_th4_lock_get_lock(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TH4_LOCK_LEN? msg->len : MAVLINK_MSG_ID_TH4_LOCK_LEN;
        memset(th4_lock, 0, MAVLINK_MSG_ID_TH4_LOCK_LEN);
    memcpy(th4_lock, _MAV_PAYLOAD(msg), len);
#endif
}
