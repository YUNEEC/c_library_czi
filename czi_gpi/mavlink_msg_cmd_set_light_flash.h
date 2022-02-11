#pragma once
// MESSAGE CMD_SET_LIGHT_FLASH PACKING

#define MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH 100018


typedef struct __mavlink_cmd_set_light_flash_t {
 uint8_t enable; /*<  0: close 1: open*/
} mavlink_cmd_set_light_flash_t;

#define MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN 1
#define MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_MIN_LEN 1
#define MAVLINK_MSG_ID_100018_LEN 1
#define MAVLINK_MSG_ID_100018_MIN_LEN 1

#define MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_CRC 16
#define MAVLINK_MSG_ID_100018_CRC 16



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_FLASH { \
    100018, \
    "CMD_SET_LIGHT_FLASH", \
    1, \
    {  { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_set_light_flash_t, enable) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_FLASH { \
    "CMD_SET_LIGHT_FLASH", \
    1, \
    {  { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_set_light_flash_t, enable) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_set_light_flash message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param enable  0: close 1: open
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_light_flash_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN];
    _mav_put_uint8_t(buf, 0, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN);
#else
    mavlink_cmd_set_light_flash_t packet;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_CRC);
}

/**
 * @brief Pack a cmd_set_light_flash message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param enable  0: close 1: open
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_light_flash_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN];
    _mav_put_uint8_t(buf, 0, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN);
#else
    mavlink_cmd_set_light_flash_t packet;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_CRC);
}

/**
 * @brief Encode a cmd_set_light_flash struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_light_flash C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_light_flash_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_set_light_flash_t* cmd_set_light_flash)
{
    return mavlink_msg_cmd_set_light_flash_pack(system_id, component_id, msg, cmd_set_light_flash->enable);
}

/**
 * @brief Encode a cmd_set_light_flash struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_light_flash C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_light_flash_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_set_light_flash_t* cmd_set_light_flash)
{
    return mavlink_msg_cmd_set_light_flash_pack_chan(system_id, component_id, chan, msg, cmd_set_light_flash->enable);
}

/**
 * @brief Send a cmd_set_light_flash message
 * @param chan MAVLink channel to send the message
 *
 * @param enable  0: close 1: open
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_set_light_flash_send(mavlink_channel_t chan, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN];
    _mav_put_uint8_t(buf, 0, enable);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH, buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_CRC);
#else
    mavlink_cmd_set_light_flash_t packet;
    packet.enable = enable;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH, (const char *)&packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_CRC);
#endif
}

/**
 * @brief Send a cmd_set_light_flash message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_set_light_flash_send_struct(mavlink_channel_t chan, const mavlink_cmd_set_light_flash_t* cmd_set_light_flash)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_set_light_flash_send(chan, cmd_set_light_flash->enable);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH, (const char *)cmd_set_light_flash, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_set_light_flash_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, enable);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH, buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_CRC);
#else
    mavlink_cmd_set_light_flash_t *packet = (mavlink_cmd_set_light_flash_t *)msgbuf;
    packet->enable = enable;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH, (const char *)packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_SET_LIGHT_FLASH UNPACKING


/**
 * @brief Get field enable from cmd_set_light_flash message
 *
 * @return  0: close 1: open
 */
static inline uint8_t mavlink_msg_cmd_set_light_flash_get_enable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a cmd_set_light_flash message into a struct
 *
 * @param msg The message to decode
 * @param cmd_set_light_flash C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_set_light_flash_decode(const mavlink_message_t* msg, mavlink_cmd_set_light_flash_t* cmd_set_light_flash)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_set_light_flash->enable = mavlink_msg_cmd_set_light_flash_get_enable(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN? msg->len : MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN;
        memset(cmd_set_light_flash, 0, MAVLINK_MSG_ID_CMD_SET_LIGHT_FLASH_LEN);
    memcpy(cmd_set_light_flash, _MAV_PAYLOAD(msg), len);
#endif
}
