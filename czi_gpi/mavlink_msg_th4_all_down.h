#pragma once
// MESSAGE TH4_ALL_DOWN PACKING

#define MAVLINK_MSG_ID_TH4_ALL_DOWN 100260


typedef struct __mavlink_th4_all_down_t {
 uint8_t all_down; /*<  0xb0: One-click toss*/
} mavlink_th4_all_down_t;

#define MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN 1
#define MAVLINK_MSG_ID_TH4_ALL_DOWN_MIN_LEN 1
#define MAVLINK_MSG_ID_100260_LEN 1
#define MAVLINK_MSG_ID_100260_MIN_LEN 1

#define MAVLINK_MSG_ID_TH4_ALL_DOWN_CRC 110
#define MAVLINK_MSG_ID_100260_CRC 110



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TH4_ALL_DOWN { \
    100260, \
    "TH4_ALL_DOWN", \
    1, \
    {  { "all_down", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_th4_all_down_t, all_down) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TH4_ALL_DOWN { \
    "TH4_ALL_DOWN", \
    1, \
    {  { "all_down", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_th4_all_down_t, all_down) }, \
         } \
}
#endif

/**
 * @brief Pack a th4_all_down message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param all_down  0xb0: One-click toss
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_th4_all_down_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t all_down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN];
    _mav_put_uint8_t(buf, 0, all_down);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN);
#else
    mavlink_th4_all_down_t packet;
    packet.all_down = all_down;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TH4_ALL_DOWN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TH4_ALL_DOWN_MIN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_CRC);
}

/**
 * @brief Pack a th4_all_down message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param all_down  0xb0: One-click toss
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_th4_all_down_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t all_down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN];
    _mav_put_uint8_t(buf, 0, all_down);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN);
#else
    mavlink_th4_all_down_t packet;
    packet.all_down = all_down;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TH4_ALL_DOWN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TH4_ALL_DOWN_MIN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_CRC);
}

/**
 * @brief Encode a th4_all_down struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param th4_all_down C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_th4_all_down_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_th4_all_down_t* th4_all_down)
{
    return mavlink_msg_th4_all_down_pack(system_id, component_id, msg, th4_all_down->all_down);
}

/**
 * @brief Encode a th4_all_down struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param th4_all_down C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_th4_all_down_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_th4_all_down_t* th4_all_down)
{
    return mavlink_msg_th4_all_down_pack_chan(system_id, component_id, chan, msg, th4_all_down->all_down);
}

/**
 * @brief Send a th4_all_down message
 * @param chan MAVLink channel to send the message
 *
 * @param all_down  0xb0: One-click toss
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_th4_all_down_send(mavlink_channel_t chan, uint8_t all_down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN];
    _mav_put_uint8_t(buf, 0, all_down);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_ALL_DOWN, buf, MAVLINK_MSG_ID_TH4_ALL_DOWN_MIN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_CRC);
#else
    mavlink_th4_all_down_t packet;
    packet.all_down = all_down;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_ALL_DOWN, (const char *)&packet, MAVLINK_MSG_ID_TH4_ALL_DOWN_MIN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_CRC);
#endif
}

/**
 * @brief Send a th4_all_down message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_th4_all_down_send_struct(mavlink_channel_t chan, const mavlink_th4_all_down_t* th4_all_down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_th4_all_down_send(chan, th4_all_down->all_down);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_ALL_DOWN, (const char *)th4_all_down, MAVLINK_MSG_ID_TH4_ALL_DOWN_MIN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_CRC);
#endif
}

#if MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_th4_all_down_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t all_down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, all_down);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_ALL_DOWN, buf, MAVLINK_MSG_ID_TH4_ALL_DOWN_MIN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_CRC);
#else
    mavlink_th4_all_down_t *packet = (mavlink_th4_all_down_t *)msgbuf;
    packet->all_down = all_down;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TH4_ALL_DOWN, (const char *)packet, MAVLINK_MSG_ID_TH4_ALL_DOWN_MIN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN, MAVLINK_MSG_ID_TH4_ALL_DOWN_CRC);
#endif
}
#endif

#endif

// MESSAGE TH4_ALL_DOWN UNPACKING


/**
 * @brief Get field all_down from th4_all_down message
 *
 * @return  0xb0: One-click toss
 */
static inline uint8_t mavlink_msg_th4_all_down_get_all_down(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a th4_all_down message into a struct
 *
 * @param msg The message to decode
 * @param th4_all_down C-struct to decode the message contents into
 */
static inline void mavlink_msg_th4_all_down_decode(const mavlink_message_t* msg, mavlink_th4_all_down_t* th4_all_down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    th4_all_down->all_down = mavlink_msg_th4_all_down_get_all_down(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN? msg->len : MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN;
        memset(th4_all_down, 0, MAVLINK_MSG_ID_TH4_ALL_DOWN_LEN);
    memcpy(th4_all_down, _MAV_PAYLOAD(msg), len);
#endif
}
