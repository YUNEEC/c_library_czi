#pragma once
// MESSAGE ACK_DEVICE_INFO PACKING

#define MAVLINK_MSG_ID_ACK_DEVICE_INFO 100003


typedef struct __mavlink_ack_device_info_t {
 char info[255]; /*<  Device Information*/
} mavlink_ack_device_info_t;

#define MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN 255
#define MAVLINK_MSG_ID_ACK_DEVICE_INFO_MIN_LEN 255
#define MAVLINK_MSG_ID_100003_LEN 255
#define MAVLINK_MSG_ID_100003_MIN_LEN 255

#define MAVLINK_MSG_ID_ACK_DEVICE_INFO_CRC 240
#define MAVLINK_MSG_ID_100003_CRC 240

#define MAVLINK_MSG_ACK_DEVICE_INFO_FIELD_INFO_LEN 255

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACK_DEVICE_INFO { \
    100003, \
    "ACK_DEVICE_INFO", \
    1, \
    {  { "info", NULL, MAVLINK_TYPE_CHAR, 255, 0, offsetof(mavlink_ack_device_info_t, info) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACK_DEVICE_INFO { \
    "ACK_DEVICE_INFO", \
    1, \
    {  { "info", NULL, MAVLINK_TYPE_CHAR, 255, 0, offsetof(mavlink_ack_device_info_t, info) }, \
         } \
}
#endif

/**
 * @brief Pack a ack_device_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param info  Device Information
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ack_device_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN];

    _mav_put_char_array(buf, 0, info, 255);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN);
#else
    mavlink_ack_device_info_t packet;

    mav_array_memcpy(packet.info, info, sizeof(char)*255);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACK_DEVICE_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACK_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_CRC);
}

/**
 * @brief Pack a ack_device_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param info  Device Information
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ack_device_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN];

    _mav_put_char_array(buf, 0, info, 255);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN);
#else
    mavlink_ack_device_info_t packet;

    mav_array_memcpy(packet.info, info, sizeof(char)*255);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACK_DEVICE_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACK_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_CRC);
}

/**
 * @brief Encode a ack_device_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ack_device_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ack_device_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ack_device_info_t* ack_device_info)
{
    return mavlink_msg_ack_device_info_pack(system_id, component_id, msg, ack_device_info->info);
}

/**
 * @brief Encode a ack_device_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ack_device_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ack_device_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ack_device_info_t* ack_device_info)
{
    return mavlink_msg_ack_device_info_pack_chan(system_id, component_id, chan, msg, ack_device_info->info);
}

/**
 * @brief Send a ack_device_info message
 * @param chan MAVLink channel to send the message
 *
 * @param info  Device Information
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ack_device_info_send(mavlink_channel_t chan, const char *info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN];

    _mav_put_char_array(buf, 0, info, 255);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_DEVICE_INFO, buf, MAVLINK_MSG_ID_ACK_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_CRC);
#else
    mavlink_ack_device_info_t packet;

    mav_array_memcpy(packet.info, info, sizeof(char)*255);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_DEVICE_INFO, (const char *)&packet, MAVLINK_MSG_ID_ACK_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_CRC);
#endif
}

/**
 * @brief Send a ack_device_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ack_device_info_send_struct(mavlink_channel_t chan, const mavlink_ack_device_info_t* ack_device_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ack_device_info_send(chan, ack_device_info->info);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_DEVICE_INFO, (const char *)ack_device_info, MAVLINK_MSG_ID_ACK_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ack_device_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, info, 255);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_DEVICE_INFO, buf, MAVLINK_MSG_ID_ACK_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_CRC);
#else
    mavlink_ack_device_info_t *packet = (mavlink_ack_device_info_t *)msgbuf;

    mav_array_memcpy(packet->info, info, sizeof(char)*255);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_DEVICE_INFO, (const char *)packet, MAVLINK_MSG_ID_ACK_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN, MAVLINK_MSG_ID_ACK_DEVICE_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE ACK_DEVICE_INFO UNPACKING


/**
 * @brief Get field info from ack_device_info message
 *
 * @return  Device Information
 */
static inline uint16_t mavlink_msg_ack_device_info_get_info(const mavlink_message_t* msg, char *info)
{
    return _MAV_RETURN_char_array(msg, info, 255,  0);
}

/**
 * @brief Decode a ack_device_info message into a struct
 *
 * @param msg The message to decode
 * @param ack_device_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_ack_device_info_decode(const mavlink_message_t* msg, mavlink_ack_device_info_t* ack_device_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ack_device_info_get_info(msg, ack_device_info->info);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN? msg->len : MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN;
        memset(ack_device_info, 0, MAVLINK_MSG_ID_ACK_DEVICE_INFO_LEN);
    memcpy(ack_device_info, _MAV_PAYLOAD(msg), len);
#endif
}
