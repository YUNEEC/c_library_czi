#pragma once
// MESSAGE CMD_TTS_CYCLE PACKING

#define MAVLINK_MSG_ID_CMD_TTS_CYCLE 100087


typedef struct __mavlink_cmd_tts_cycle_t {
 uint8_t mode; /*<  Mode*/
 uint8_t result; /*<  Result*/
} mavlink_cmd_tts_cycle_t;

#define MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN 2
#define MAVLINK_MSG_ID_CMD_TTS_CYCLE_MIN_LEN 2
#define MAVLINK_MSG_ID_100087_LEN 2
#define MAVLINK_MSG_ID_100087_MIN_LEN 2

#define MAVLINK_MSG_ID_CMD_TTS_CYCLE_CRC 85
#define MAVLINK_MSG_ID_100087_CRC 85



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_TTS_CYCLE { \
    100087, \
    "CMD_TTS_CYCLE", \
    2, \
    {  { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_tts_cycle_t, mode) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_tts_cycle_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_TTS_CYCLE { \
    "CMD_TTS_CYCLE", \
    2, \
    {  { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_tts_cycle_t, mode) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_tts_cycle_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_tts_cycle message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mode  Mode
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_tts_cycle_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t mode, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN];
    _mav_put_uint8_t(buf, 0, mode);
    _mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN);
#else
    mavlink_cmd_tts_cycle_t packet;
    packet.mode = mode;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_TTS_CYCLE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_TTS_CYCLE_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_CRC);
}

/**
 * @brief Pack a cmd_tts_cycle message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mode  Mode
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_tts_cycle_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t mode,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN];
    _mav_put_uint8_t(buf, 0, mode);
    _mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN);
#else
    mavlink_cmd_tts_cycle_t packet;
    packet.mode = mode;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_TTS_CYCLE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_TTS_CYCLE_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_CRC);
}

/**
 * @brief Encode a cmd_tts_cycle struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_tts_cycle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_tts_cycle_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_tts_cycle_t* cmd_tts_cycle)
{
    return mavlink_msg_cmd_tts_cycle_pack(system_id, component_id, msg, cmd_tts_cycle->mode, cmd_tts_cycle->result);
}

/**
 * @brief Encode a cmd_tts_cycle struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_tts_cycle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_tts_cycle_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_tts_cycle_t* cmd_tts_cycle)
{
    return mavlink_msg_cmd_tts_cycle_pack_chan(system_id, component_id, chan, msg, cmd_tts_cycle->mode, cmd_tts_cycle->result);
}

/**
 * @brief Send a cmd_tts_cycle message
 * @param chan MAVLink channel to send the message
 *
 * @param mode  Mode
 * @param result  Result
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_tts_cycle_send(mavlink_channel_t chan, uint8_t mode, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN];
    _mav_put_uint8_t(buf, 0, mode);
    _mav_put_uint8_t(buf, 1, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_CYCLE, buf, MAVLINK_MSG_ID_CMD_TTS_CYCLE_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_CRC);
#else
    mavlink_cmd_tts_cycle_t packet;
    packet.mode = mode;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_CYCLE, (const char *)&packet, MAVLINK_MSG_ID_CMD_TTS_CYCLE_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_CRC);
#endif
}

/**
 * @brief Send a cmd_tts_cycle message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_tts_cycle_send_struct(mavlink_channel_t chan, const mavlink_cmd_tts_cycle_t* cmd_tts_cycle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_tts_cycle_send(chan, cmd_tts_cycle->mode, cmd_tts_cycle->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_CYCLE, (const char *)cmd_tts_cycle, MAVLINK_MSG_ID_CMD_TTS_CYCLE_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_tts_cycle_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t mode, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, mode);
    _mav_put_uint8_t(buf, 1, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_CYCLE, buf, MAVLINK_MSG_ID_CMD_TTS_CYCLE_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_CRC);
#else
    mavlink_cmd_tts_cycle_t *packet = (mavlink_cmd_tts_cycle_t *)msgbuf;
    packet->mode = mode;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_TTS_CYCLE, (const char *)packet, MAVLINK_MSG_ID_CMD_TTS_CYCLE_MIN_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN, MAVLINK_MSG_ID_CMD_TTS_CYCLE_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_TTS_CYCLE UNPACKING


/**
 * @brief Get field mode from cmd_tts_cycle message
 *
 * @return  Mode
 */
static inline uint8_t mavlink_msg_cmd_tts_cycle_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field result from cmd_tts_cycle message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_tts_cycle_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a cmd_tts_cycle message into a struct
 *
 * @param msg The message to decode
 * @param cmd_tts_cycle C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_tts_cycle_decode(const mavlink_message_t* msg, mavlink_cmd_tts_cycle_t* cmd_tts_cycle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_tts_cycle->mode = mavlink_msg_cmd_tts_cycle_get_mode(msg);
    cmd_tts_cycle->result = mavlink_msg_cmd_tts_cycle_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN? msg->len : MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN;
        memset(cmd_tts_cycle, 0, MAVLINK_MSG_ID_CMD_TTS_CYCLE_LEN);
    memcpy(cmd_tts_cycle, _MAV_PAYLOAD(msg), len);
#endif
}
