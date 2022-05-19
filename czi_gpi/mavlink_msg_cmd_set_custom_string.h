#pragma once
// MESSAGE CMD_SET_CUSTOM_STRING PACKING

#define MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING 100006


typedef struct __mavlink_cmd_set_custom_string_t {
 char custom_string[128]; /*<  user define string*/
} mavlink_cmd_set_custom_string_t;

#define MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN 128
#define MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_MIN_LEN 128
#define MAVLINK_MSG_ID_100006_LEN 128
#define MAVLINK_MSG_ID_100006_MIN_LEN 128

#define MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_CRC 133
#define MAVLINK_MSG_ID_100006_CRC 133

#define MAVLINK_MSG_CMD_SET_CUSTOM_STRING_FIELD_CUSTOM_STRING_LEN 128

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_SET_CUSTOM_STRING { \
    100006, \
    "CMD_SET_CUSTOM_STRING", \
    1, \
    {  { "custom_string", NULL, MAVLINK_TYPE_CHAR, 128, 0, offsetof(mavlink_cmd_set_custom_string_t, custom_string) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_SET_CUSTOM_STRING { \
    "CMD_SET_CUSTOM_STRING", \
    1, \
    {  { "custom_string", NULL, MAVLINK_TYPE_CHAR, 128, 0, offsetof(mavlink_cmd_set_custom_string_t, custom_string) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_set_custom_string message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param custom_string  user define string
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_custom_string_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *custom_string)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN];

    _mav_put_char_array(buf, 0, custom_string, 128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN);
#else
    mavlink_cmd_set_custom_string_t packet;

    mav_array_memcpy(packet.custom_string, custom_string, sizeof(char)*128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_CRC);
}

/**
 * @brief Pack a cmd_set_custom_string message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param custom_string  user define string
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_custom_string_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *custom_string)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN];

    _mav_put_char_array(buf, 0, custom_string, 128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN);
#else
    mavlink_cmd_set_custom_string_t packet;

    mav_array_memcpy(packet.custom_string, custom_string, sizeof(char)*128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_CRC);
}

/**
 * @brief Encode a cmd_set_custom_string struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_custom_string C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_custom_string_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_set_custom_string_t* cmd_set_custom_string)
{
    return mavlink_msg_cmd_set_custom_string_pack(system_id, component_id, msg, cmd_set_custom_string->custom_string);
}

/**
 * @brief Encode a cmd_set_custom_string struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_custom_string C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_custom_string_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_set_custom_string_t* cmd_set_custom_string)
{
    return mavlink_msg_cmd_set_custom_string_pack_chan(system_id, component_id, chan, msg, cmd_set_custom_string->custom_string);
}

/**
 * @brief Send a cmd_set_custom_string message
 * @param chan MAVLink channel to send the message
 *
 * @param custom_string  user define string
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_set_custom_string_send(mavlink_channel_t chan, const char *custom_string)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN];

    _mav_put_char_array(buf, 0, custom_string, 128);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING, buf, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_CRC);
#else
    mavlink_cmd_set_custom_string_t packet;

    mav_array_memcpy(packet.custom_string, custom_string, sizeof(char)*128);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING, (const char *)&packet, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_CRC);
#endif
}

/**
 * @brief Send a cmd_set_custom_string message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_set_custom_string_send_struct(mavlink_channel_t chan, const mavlink_cmd_set_custom_string_t* cmd_set_custom_string)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_set_custom_string_send(chan, cmd_set_custom_string->custom_string);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING, (const char *)cmd_set_custom_string, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_set_custom_string_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *custom_string)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, custom_string, 128);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING, buf, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_CRC);
#else
    mavlink_cmd_set_custom_string_t *packet = (mavlink_cmd_set_custom_string_t *)msgbuf;

    mav_array_memcpy(packet->custom_string, custom_string, sizeof(char)*128);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING, (const char *)packet, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_SET_CUSTOM_STRING UNPACKING


/**
 * @brief Get field custom_string from cmd_set_custom_string message
 *
 * @return  user define string
 */
static inline uint16_t mavlink_msg_cmd_set_custom_string_get_custom_string(const mavlink_message_t* msg, char *custom_string)
{
    return _MAV_RETURN_char_array(msg, custom_string, 128,  0);
}

/**
 * @brief Decode a cmd_set_custom_string message into a struct
 *
 * @param msg The message to decode
 * @param cmd_set_custom_string C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_set_custom_string_decode(const mavlink_message_t* msg, mavlink_cmd_set_custom_string_t* cmd_set_custom_string)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_set_custom_string_get_custom_string(msg, cmd_set_custom_string->custom_string);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN? msg->len : MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN;
        memset(cmd_set_custom_string, 0, MAVLINK_MSG_ID_CMD_SET_CUSTOM_STRING_LEN);
    memcpy(cmd_set_custom_string, _MAV_PAYLOAD(msg), len);
#endif
}
