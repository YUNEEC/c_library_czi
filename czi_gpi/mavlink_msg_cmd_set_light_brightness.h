#pragma once
// MESSAGE CMD_SET_LIGHT_BRIGHTNESS PACKING

#define MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS 100017


typedef struct __mavlink_cmd_set_light_brightness_t {
 uint8_t brightness; /*<  brightness range: 0-100*/
} mavlink_cmd_set_light_brightness_t;

#define MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN 1
#define MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_MIN_LEN 1
#define MAVLINK_MSG_ID_100017_LEN 1
#define MAVLINK_MSG_ID_100017_MIN_LEN 1

#define MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_CRC 237
#define MAVLINK_MSG_ID_100017_CRC 237



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_BRIGHTNESS { \
    100017, \
    "CMD_SET_LIGHT_BRIGHTNESS", \
    1, \
    {  { "brightness", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_set_light_brightness_t, brightness) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_BRIGHTNESS { \
    "CMD_SET_LIGHT_BRIGHTNESS", \
    1, \
    {  { "brightness", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_set_light_brightness_t, brightness) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_set_light_brightness message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param brightness  brightness range: 0-100
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_light_brightness_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t brightness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN];
    _mav_put_uint8_t(buf, 0, brightness);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN);
#else
    mavlink_cmd_set_light_brightness_t packet;
    packet.brightness = brightness;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_CRC);
}

/**
 * @brief Pack a cmd_set_light_brightness message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param brightness  brightness range: 0-100
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_light_brightness_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t brightness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN];
    _mav_put_uint8_t(buf, 0, brightness);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN);
#else
    mavlink_cmd_set_light_brightness_t packet;
    packet.brightness = brightness;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_CRC);
}

/**
 * @brief Encode a cmd_set_light_brightness struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_light_brightness C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_light_brightness_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_set_light_brightness_t* cmd_set_light_brightness)
{
    return mavlink_msg_cmd_set_light_brightness_pack(system_id, component_id, msg, cmd_set_light_brightness->brightness);
}

/**
 * @brief Encode a cmd_set_light_brightness struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_light_brightness C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_light_brightness_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_set_light_brightness_t* cmd_set_light_brightness)
{
    return mavlink_msg_cmd_set_light_brightness_pack_chan(system_id, component_id, chan, msg, cmd_set_light_brightness->brightness);
}

/**
 * @brief Send a cmd_set_light_brightness message
 * @param chan MAVLink channel to send the message
 *
 * @param brightness  brightness range: 0-100
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_set_light_brightness_send(mavlink_channel_t chan, uint8_t brightness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN];
    _mav_put_uint8_t(buf, 0, brightness);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS, buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_CRC);
#else
    mavlink_cmd_set_light_brightness_t packet;
    packet.brightness = brightness;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS, (const char *)&packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_CRC);
#endif
}

/**
 * @brief Send a cmd_set_light_brightness message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_set_light_brightness_send_struct(mavlink_channel_t chan, const mavlink_cmd_set_light_brightness_t* cmd_set_light_brightness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_set_light_brightness_send(chan, cmd_set_light_brightness->brightness);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS, (const char *)cmd_set_light_brightness, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_set_light_brightness_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t brightness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, brightness);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS, buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_CRC);
#else
    mavlink_cmd_set_light_brightness_t *packet = (mavlink_cmd_set_light_brightness_t *)msgbuf;
    packet->brightness = brightness;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS, (const char *)packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_SET_LIGHT_BRIGHTNESS UNPACKING


/**
 * @brief Get field brightness from cmd_set_light_brightness message
 *
 * @return  brightness range: 0-100
 */
static inline uint8_t mavlink_msg_cmd_set_light_brightness_get_brightness(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a cmd_set_light_brightness message into a struct
 *
 * @param msg The message to decode
 * @param cmd_set_light_brightness C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_set_light_brightness_decode(const mavlink_message_t* msg, mavlink_cmd_set_light_brightness_t* cmd_set_light_brightness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_set_light_brightness->brightness = mavlink_msg_cmd_set_light_brightness_get_brightness(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN? msg->len : MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN;
        memset(cmd_set_light_brightness, 0, MAVLINK_MSG_ID_CMD_SET_LIGHT_BRIGHTNESS_LEN);
    memcpy(cmd_set_light_brightness, _MAV_PAYLOAD(msg), len);
#endif
}
