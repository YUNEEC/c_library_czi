#pragma once
// MESSAGE TH4_EXECUTION_THROW PACKING

#define MAVLINK_MSG_ID_TH4_EXECUTION_THROW 100258


typedef struct __mavlink_th4_execution_throw_t {
 uint8_t target_location; /*<  throwing hook position: 0xb0~0xb4*/
} mavlink_th4_execution_throw_t;

#define MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN 1
#define MAVLINK_MSG_ID_TH4_EXECUTION_THROW_MIN_LEN 1
#define MAVLINK_MSG_ID_100258_LEN 1
#define MAVLINK_MSG_ID_100258_MIN_LEN 1

#define MAVLINK_MSG_ID_TH4_EXECUTION_THROW_CRC 167
#define MAVLINK_MSG_ID_100258_CRC 167



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TH4_EXECUTION_THROW { \
    100258, \
    "TH4_EXECUTION_THROW", \
    1, \
    {  { "target_location", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_th4_execution_throw_t, target_location) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TH4_EXECUTION_THROW { \
    "TH4_EXECUTION_THROW", \
    1, \
    {  { "target_location", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_th4_execution_throw_t, target_location) }, \
         } \
}
#endif

/**
 * @brief Pack a th4_execution_throw message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_location  throwing hook position: 0xb0~0xb4
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_th4_execution_throw_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_location)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN];
    _mav_put_uint8_t(buf, 0, target_location);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN);
#else
    mavlink_th4_execution_throw_t packet;
    packet.target_location = target_location;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TH4_EXECUTION_THROW;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_MIN_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_CRC);
}

/**
 * @brief Pack a th4_execution_throw message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_location  throwing hook position: 0xb0~0xb4
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_th4_execution_throw_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_location)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN];
    _mav_put_uint8_t(buf, 0, target_location);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN);
#else
    mavlink_th4_execution_throw_t packet;
    packet.target_location = target_location;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TH4_EXECUTION_THROW;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_MIN_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_CRC);
}

/**
 * @brief Encode a th4_execution_throw struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param th4_execution_throw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_th4_execution_throw_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_th4_execution_throw_t* th4_execution_throw)
{
    return mavlink_msg_th4_execution_throw_pack(system_id, component_id, msg, th4_execution_throw->target_location);
}

/**
 * @brief Encode a th4_execution_throw struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param th4_execution_throw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_th4_execution_throw_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_th4_execution_throw_t* th4_execution_throw)
{
    return mavlink_msg_th4_execution_throw_pack_chan(system_id, component_id, chan, msg, th4_execution_throw->target_location);
}

/**
 * @brief Send a th4_execution_throw message
 * @param chan MAVLink channel to send the message
 *
 * @param target_location  throwing hook position: 0xb0~0xb4
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_th4_execution_throw_send(mavlink_channel_t chan, uint8_t target_location)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN];
    _mav_put_uint8_t(buf, 0, target_location);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_EXECUTION_THROW, buf, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_MIN_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_CRC);
#else
    mavlink_th4_execution_throw_t packet;
    packet.target_location = target_location;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_EXECUTION_THROW, (const char *)&packet, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_MIN_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_CRC);
#endif
}

/**
 * @brief Send a th4_execution_throw message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_th4_execution_throw_send_struct(mavlink_channel_t chan, const mavlink_th4_execution_throw_t* th4_execution_throw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_th4_execution_throw_send(chan, th4_execution_throw->target_location);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_EXECUTION_THROW, (const char *)th4_execution_throw, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_MIN_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_CRC);
#endif
}

#if MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_th4_execution_throw_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_location)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_location);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_EXECUTION_THROW, buf, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_MIN_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_CRC);
#else
    mavlink_th4_execution_throw_t *packet = (mavlink_th4_execution_throw_t *)msgbuf;
    packet->target_location = target_location;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_EXECUTION_THROW, (const char *)packet, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_MIN_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_CRC);
#endif
}
#endif

#endif

// MESSAGE TH4_EXECUTION_THROW UNPACKING


/**
 * @brief Get field target_location from th4_execution_throw message
 *
 * @return  throwing hook position: 0xb0~0xb4
 */
static inline uint8_t mavlink_msg_th4_execution_throw_get_target_location(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a th4_execution_throw message into a struct
 *
 * @param msg The message to decode
 * @param th4_execution_throw C-struct to decode the message contents into
 */
static inline void mavlink_msg_th4_execution_throw_decode(const mavlink_message_t* msg, mavlink_th4_execution_throw_t* th4_execution_throw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    th4_execution_throw->target_location = mavlink_msg_th4_execution_throw_get_target_location(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN? msg->len : MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN;
        memset(th4_execution_throw, 0, MAVLINK_MSG_ID_TH4_EXECUTION_THROW_LEN);
    memcpy(th4_execution_throw, _MAV_PAYLOAD(msg), len);
#endif
}
