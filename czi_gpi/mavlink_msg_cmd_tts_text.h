#pragma once
// MESSAGE CMD_TTS_TEXT PACKING

#define MAVLINK_MSG_ID_CMD_TTS_TEXT 100085


typedef struct __mavlink_cmd_tts_text_t {
 uint8_t result; /*<  Result*/
 char text[250]; /*<  TTS Text*/
} mavlink_cmd_tts_text_t;

#define MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN 251
#define MAVLINK_MSG_ID_CMD_TTS_TEXT_MIN_LEN 251
#define MAVLINK_MSG_ID_100085_LEN 251
#define MAVLINK_MSG_ID_100085_MIN_LEN 251

#define MAVLINK_MSG_ID_CMD_TTS_TEXT_CRC 253
#define MAVLINK_MSG_ID_100085_CRC 253

#define MAVLINK_MSG_CMD_TTS_TEXT_FIELD_TEXT_LEN 250

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_TTS_TEXT { \
    100085, \
    "CMD_TTS_TEXT", \
    2, \
    {  { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_tts_text_t, result) }, \
         { "text", NULL, MAVLINK_TYPE_CHAR, 250, 1, offsetof(mavlink_cmd_tts_text_t, text) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_TTS_TEXT { \
    "CMD_TTS_TEXT", \
    2, \
    {  { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_tts_text_t, result) }, \
         { "text", NULL, MAVLINK_TYPE_CHAR, 250, 1, offsetof(mavlink_cmd_tts_text_t, text) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_tts_text message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param result  Result
 * @param text  TTS Text
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_tts_text_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t result, const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN];
    _mav_put_uint8_t(buf, 0, result);
    _mav_put_char_array(buf, 1, text, 250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN);
#else
    mavlink_cmd_tts_text_t packet;
    packet.result = result;
    mav_array_memcpy(packet.text, text, sizeof(char)*250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_TTS_TEXT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_TTS_TEXT_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_CRC);
}

/**
 * @brief Pack a cmd_tts_text message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param result  Result
 * @param text  TTS Text
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_tts_text_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t result,const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN];
    _mav_put_uint8_t(buf, 0, result);
    _mav_put_char_array(buf, 1, text, 250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN);
#else
    mavlink_cmd_tts_text_t packet;
    packet.result = result;
    mav_array_memcpy(packet.text, text, sizeof(char)*250);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_TTS_TEXT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_TTS_TEXT_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_CRC);
}

/**
 * @brief Encode a cmd_tts_text struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_tts_text C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_tts_text_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_tts_text_t* cmd_tts_text)
{
    return mavlink_msg_cmd_tts_text_pack(system_id, component_id, msg, cmd_tts_text->result, cmd_tts_text->text);
}

/**
 * @brief Encode a cmd_tts_text struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_tts_text C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_tts_text_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_tts_text_t* cmd_tts_text)
{
    return mavlink_msg_cmd_tts_text_pack_chan(system_id, component_id, chan, msg, cmd_tts_text->result, cmd_tts_text->text);
}

/**
 * @brief Send a cmd_tts_text message
 * @param chan MAVLink channel to send the message
 *
 * @param result  Result
 * @param text  TTS Text
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_tts_text_send(mavlink_channel_t chan, uint8_t result, const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN];
    _mav_put_uint8_t(buf, 0, result);
    _mav_put_char_array(buf, 1, text, 250);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_TEXT, buf, MAVLINK_MSG_ID_CMD_TTS_TEXT_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_CRC);
#else
    mavlink_cmd_tts_text_t packet;
    packet.result = result;
    mav_array_memcpy(packet.text, text, sizeof(char)*250);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_TEXT, (const char *)&packet, MAVLINK_MSG_ID_CMD_TTS_TEXT_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_CRC);
#endif
}

/**
 * @brief Send a cmd_tts_text message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_tts_text_send_struct(mavlink_channel_t chan, const mavlink_cmd_tts_text_t* cmd_tts_text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_tts_text_send(chan, cmd_tts_text->result, cmd_tts_text->text);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_TEXT, (const char *)cmd_tts_text, MAVLINK_MSG_ID_CMD_TTS_TEXT_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_tts_text_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t result, const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, result);
    _mav_put_char_array(buf, 1, text, 250);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_TEXT, buf, MAVLINK_MSG_ID_CMD_TTS_TEXT_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_CRC);
#else
    mavlink_cmd_tts_text_t *packet = (mavlink_cmd_tts_text_t *)msgbuf;
    packet->result = result;
    mav_array_memcpy(packet->text, text, sizeof(char)*250);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_TEXT, (const char *)packet, MAVLINK_MSG_ID_CMD_TTS_TEXT_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_TTS_TEXT UNPACKING


/**
 * @brief Get field result from cmd_tts_text message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_tts_text_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field text from cmd_tts_text message
 *
 * @return  TTS Text
 */
static inline uint16_t mavlink_msg_cmd_tts_text_get_text(const mavlink_message_t* msg, char *text)
{
    return _MAV_RETURN_char_array(msg, text, 250,  1);
}

/**
 * @brief Decode a cmd_tts_text message into a struct
 *
 * @param msg The message to decode
 * @param cmd_tts_text C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_tts_text_decode(const mavlink_message_t* msg, mavlink_cmd_tts_text_t* cmd_tts_text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_tts_text->result = mavlink_msg_cmd_tts_text_get_result(msg);
    mavlink_msg_cmd_tts_text_get_text(msg, cmd_tts_text->text);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN? msg->len : MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN;
        memset(cmd_tts_text, 0, MAVLINK_MSG_ID_CMD_TTS_TEXT_LEN);
    memcpy(cmd_tts_text, _MAV_PAYLOAD(msg), len);
#endif
}
