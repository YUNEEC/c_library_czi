#pragma once
// MESSAGE CMD_BACKGROUND_MUSIC_VOLUME PACKING

#define MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME 100093


typedef struct __mavlink_cmd_background_music_volume_t {
 uint8_t volume; /*<  Volume*/
 uint8_t result; /*<  Result*/
} mavlink_cmd_background_music_volume_t;

#define MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN 2
#define MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_MIN_LEN 2
#define MAVLINK_MSG_ID_100093_LEN 2
#define MAVLINK_MSG_ID_100093_MIN_LEN 2

#define MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_CRC 145
#define MAVLINK_MSG_ID_100093_CRC 145



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_BACKGROUND_MUSIC_VOLUME { \
    100093, \
    "CMD_BACKGROUND_MUSIC_VOLUME", \
    2, \
    {  { "volume", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_background_music_volume_t, volume) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_background_music_volume_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_BACKGROUND_MUSIC_VOLUME { \
    "CMD_BACKGROUND_MUSIC_VOLUME", \
    2, \
    {  { "volume", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_background_music_volume_t, volume) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_background_music_volume_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_background_music_volume message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param volume  Volume
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_background_music_volume_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t volume, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN];
    _mav_put_uint8_t(buf, 0, volume);
    _mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN);
#else
    mavlink_cmd_background_music_volume_t packet;
    packet.volume = volume;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_MIN_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_CRC);
}

/**
 * @brief Pack a cmd_background_music_volume message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param volume  Volume
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_background_music_volume_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t volume,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN];
    _mav_put_uint8_t(buf, 0, volume);
    _mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN);
#else
    mavlink_cmd_background_music_volume_t packet;
    packet.volume = volume;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_MIN_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_CRC);
}

/**
 * @brief Encode a cmd_background_music_volume struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_background_music_volume C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_background_music_volume_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_background_music_volume_t* cmd_background_music_volume)
{
    return mavlink_msg_cmd_background_music_volume_pack(system_id, component_id, msg, cmd_background_music_volume->volume, cmd_background_music_volume->result);
}

/**
 * @brief Encode a cmd_background_music_volume struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_background_music_volume C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_background_music_volume_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_background_music_volume_t* cmd_background_music_volume)
{
    return mavlink_msg_cmd_background_music_volume_pack_chan(system_id, component_id, chan, msg, cmd_background_music_volume->volume, cmd_background_music_volume->result);
}

/**
 * @brief Send a cmd_background_music_volume message
 * @param chan MAVLink channel to send the message
 *
 * @param volume  Volume
 * @param result  Result
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_background_music_volume_send(mavlink_channel_t chan, uint8_t volume, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN];
    _mav_put_uint8_t(buf, 0, volume);
    _mav_put_uint8_t(buf, 1, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME, buf, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_MIN_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_CRC);
#else
    mavlink_cmd_background_music_volume_t packet;
    packet.volume = volume;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME, (const char *)&packet, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_MIN_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_CRC);
#endif
}

/**
 * @brief Send a cmd_background_music_volume message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_background_music_volume_send_struct(mavlink_channel_t chan, const mavlink_cmd_background_music_volume_t* cmd_background_music_volume)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_background_music_volume_send(chan, cmd_background_music_volume->volume, cmd_background_music_volume->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME, (const char *)cmd_background_music_volume, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_MIN_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_background_music_volume_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t volume, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, volume);
    _mav_put_uint8_t(buf, 1, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME, buf, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_MIN_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_CRC);
#else
    mavlink_cmd_background_music_volume_t *packet = (mavlink_cmd_background_music_volume_t *)msgbuf;
    packet->volume = volume;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME, (const char *)packet, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_MIN_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_BACKGROUND_MUSIC_VOLUME UNPACKING


/**
 * @brief Get field volume from cmd_background_music_volume message
 *
 * @return  Volume
 */
static inline uint8_t mavlink_msg_cmd_background_music_volume_get_volume(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field result from cmd_background_music_volume message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_background_music_volume_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a cmd_background_music_volume message into a struct
 *
 * @param msg The message to decode
 * @param cmd_background_music_volume C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_background_music_volume_decode(const mavlink_message_t* msg, mavlink_cmd_background_music_volume_t* cmd_background_music_volume)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_background_music_volume->volume = mavlink_msg_cmd_background_music_volume_get_volume(msg);
    cmd_background_music_volume->result = mavlink_msg_cmd_background_music_volume_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN? msg->len : MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN;
        memset(cmd_background_music_volume, 0, MAVLINK_MSG_ID_CMD_BACKGROUND_MUSIC_VOLUME_LEN);
    memcpy(cmd_background_music_volume, _MAV_PAYLOAD(msg), len);
#endif
}
