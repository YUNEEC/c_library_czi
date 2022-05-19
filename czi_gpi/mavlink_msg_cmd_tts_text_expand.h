#pragma once
// MESSAGE CMD_TTS_TEXT_EXPAND PACKING

#define MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND 100084


typedef struct __mavlink_cmd_tts_text_expand_t {
 uint16_t total_len; /*<  TTS Text Total Length*/
 uint8_t result; /*<  Result*/
 uint8_t seq; /*<  the sequence number of each tts-package*/
 uint8_t this_len; /*<  This TTS Text Data Length(248 MAX)*/
 char text[248]; /*<  TTS Text*/
} mavlink_cmd_tts_text_expand_t;

#define MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN 253
#define MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_MIN_LEN 253
#define MAVLINK_MSG_ID_100084_LEN 253
#define MAVLINK_MSG_ID_100084_MIN_LEN 253

#define MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_CRC 174
#define MAVLINK_MSG_ID_100084_CRC 174

#define MAVLINK_MSG_CMD_TTS_TEXT_EXPAND_FIELD_TEXT_LEN 248

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_TTS_TEXT_EXPAND { \
    100084, \
    "CMD_TTS_TEXT_EXPAND", \
    5, \
    {  { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_cmd_tts_text_expand_t, result) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_cmd_tts_text_expand_t, seq) }, \
         { "total_len", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_cmd_tts_text_expand_t, total_len) }, \
         { "this_len", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_cmd_tts_text_expand_t, this_len) }, \
         { "text", NULL, MAVLINK_TYPE_CHAR, 248, 5, offsetof(mavlink_cmd_tts_text_expand_t, text) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_TTS_TEXT_EXPAND { \
    "CMD_TTS_TEXT_EXPAND", \
    5, \
    {  { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_cmd_tts_text_expand_t, result) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_cmd_tts_text_expand_t, seq) }, \
         { "total_len", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_cmd_tts_text_expand_t, total_len) }, \
         { "this_len", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_cmd_tts_text_expand_t, this_len) }, \
         { "text", NULL, MAVLINK_TYPE_CHAR, 248, 5, offsetof(mavlink_cmd_tts_text_expand_t, text) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_tts_text_expand message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param result  Result
 * @param seq  the sequence number of each tts-package
 * @param total_len  TTS Text Total Length
 * @param this_len  This TTS Text Data Length(248 MAX)
 * @param text  TTS Text
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_tts_text_expand_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t result, uint8_t seq, uint16_t total_len, uint8_t this_len, const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN];
    _mav_put_uint16_t(buf, 0, total_len);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, seq);
    _mav_put_uint8_t(buf, 4, this_len);
    _mav_put_char_array(buf, 5, text, 248);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN);
#else
    mavlink_cmd_tts_text_expand_t packet;
    packet.total_len = total_len;
    packet.result = result;
    packet.seq = seq;
    packet.this_len = this_len;
    mav_array_memcpy(packet.text, text, sizeof(char)*248);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_CRC);
}

/**
 * @brief Pack a cmd_tts_text_expand message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param result  Result
 * @param seq  the sequence number of each tts-package
 * @param total_len  TTS Text Total Length
 * @param this_len  This TTS Text Data Length(248 MAX)
 * @param text  TTS Text
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_tts_text_expand_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t result,uint8_t seq,uint16_t total_len,uint8_t this_len,const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN];
    _mav_put_uint16_t(buf, 0, total_len);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, seq);
    _mav_put_uint8_t(buf, 4, this_len);
    _mav_put_char_array(buf, 5, text, 248);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN);
#else
    mavlink_cmd_tts_text_expand_t packet;
    packet.total_len = total_len;
    packet.result = result;
    packet.seq = seq;
    packet.this_len = this_len;
    mav_array_memcpy(packet.text, text, sizeof(char)*248);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_CRC);
}

/**
 * @brief Encode a cmd_tts_text_expand struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_tts_text_expand C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_tts_text_expand_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_tts_text_expand_t* cmd_tts_text_expand)
{
    return mavlink_msg_cmd_tts_text_expand_pack(system_id, component_id, msg, cmd_tts_text_expand->result, cmd_tts_text_expand->seq, cmd_tts_text_expand->total_len, cmd_tts_text_expand->this_len, cmd_tts_text_expand->text);
}

/**
 * @brief Encode a cmd_tts_text_expand struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_tts_text_expand C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_tts_text_expand_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_tts_text_expand_t* cmd_tts_text_expand)
{
    return mavlink_msg_cmd_tts_text_expand_pack_chan(system_id, component_id, chan, msg, cmd_tts_text_expand->result, cmd_tts_text_expand->seq, cmd_tts_text_expand->total_len, cmd_tts_text_expand->this_len, cmd_tts_text_expand->text);
}

/**
 * @brief Send a cmd_tts_text_expand message
 * @param chan MAVLink channel to send the message
 *
 * @param result  Result
 * @param seq  the sequence number of each tts-package
 * @param total_len  TTS Text Total Length
 * @param this_len  This TTS Text Data Length(248 MAX)
 * @param text  TTS Text
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_tts_text_expand_send(mavlink_channel_t chan, uint8_t result, uint8_t seq, uint16_t total_len, uint8_t this_len, const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN];
    _mav_put_uint16_t(buf, 0, total_len);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, seq);
    _mav_put_uint8_t(buf, 4, this_len);
    _mav_put_char_array(buf, 5, text, 248);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND, buf, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_CRC);
#else
    mavlink_cmd_tts_text_expand_t packet;
    packet.total_len = total_len;
    packet.result = result;
    packet.seq = seq;
    packet.this_len = this_len;
    mav_array_memcpy(packet.text, text, sizeof(char)*248);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND, (const char *)&packet, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_CRC);
#endif
}

/**
 * @brief Send a cmd_tts_text_expand message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_tts_text_expand_send_struct(mavlink_channel_t chan, const mavlink_cmd_tts_text_expand_t* cmd_tts_text_expand)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_tts_text_expand_send(chan, cmd_tts_text_expand->result, cmd_tts_text_expand->seq, cmd_tts_text_expand->total_len, cmd_tts_text_expand->this_len, cmd_tts_text_expand->text);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND, (const char *)cmd_tts_text_expand, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_tts_text_expand_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t result, uint8_t seq, uint16_t total_len, uint8_t this_len, const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, total_len);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, seq);
    _mav_put_uint8_t(buf, 4, this_len);
    _mav_put_char_array(buf, 5, text, 248);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND, buf, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_CRC);
#else
    mavlink_cmd_tts_text_expand_t *packet = (mavlink_cmd_tts_text_expand_t *)msgbuf;
    packet->total_len = total_len;
    packet->result = result;
    packet->seq = seq;
    packet->this_len = this_len;
    mav_array_memcpy(packet->text, text, sizeof(char)*248);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND, (const char *)packet, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_TTS_TEXT_EXPAND UNPACKING


/**
 * @brief Get field result from cmd_tts_text_expand message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_tts_text_expand_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field seq from cmd_tts_text_expand message
 *
 * @return  the sequence number of each tts-package
 */
static inline uint8_t mavlink_msg_cmd_tts_text_expand_get_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field total_len from cmd_tts_text_expand message
 *
 * @return  TTS Text Total Length
 */
static inline uint16_t mavlink_msg_cmd_tts_text_expand_get_total_len(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field this_len from cmd_tts_text_expand message
 *
 * @return  This TTS Text Data Length(248 MAX)
 */
static inline uint8_t mavlink_msg_cmd_tts_text_expand_get_this_len(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field text from cmd_tts_text_expand message
 *
 * @return  TTS Text
 */
static inline uint16_t mavlink_msg_cmd_tts_text_expand_get_text(const mavlink_message_t* msg, char *text)
{
    return _MAV_RETURN_char_array(msg, text, 248,  5);
}

/**
 * @brief Decode a cmd_tts_text_expand message into a struct
 *
 * @param msg The message to decode
 * @param cmd_tts_text_expand C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_tts_text_expand_decode(const mavlink_message_t* msg, mavlink_cmd_tts_text_expand_t* cmd_tts_text_expand)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_tts_text_expand->total_len = mavlink_msg_cmd_tts_text_expand_get_total_len(msg);
    cmd_tts_text_expand->result = mavlink_msg_cmd_tts_text_expand_get_result(msg);
    cmd_tts_text_expand->seq = mavlink_msg_cmd_tts_text_expand_get_seq(msg);
    cmd_tts_text_expand->this_len = mavlink_msg_cmd_tts_text_expand_get_this_len(msg);
    mavlink_msg_cmd_tts_text_expand_get_text(msg, cmd_tts_text_expand->text);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN? msg->len : MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN;
        memset(cmd_tts_text_expand, 0, MAVLINK_MSG_ID_CMD_TTS_TEXT_EXPAND_LEN);
    memcpy(cmd_tts_text_expand, _MAV_PAYLOAD(msg), len);
#endif
}
