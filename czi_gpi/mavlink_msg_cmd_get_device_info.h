#pragma once
// MESSAGE CMD_GET_DEVICE_INFO PACKING

#define MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO 100002


typedef struct __mavlink_cmd_get_device_info_t {
 uint8_t param_reserved; /*<  reserved*/
} mavlink_cmd_get_device_info_t;

#define MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN 1
#define MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_MIN_LEN 1
#define MAVLINK_MSG_ID_100002_LEN 1
#define MAVLINK_MSG_ID_100002_MIN_LEN 1

#define MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_CRC 42
#define MAVLINK_MSG_ID_100002_CRC 42



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_GET_DEVICE_INFO { \
    100002, \
    "CMD_GET_DEVICE_INFO", \
    1, \
    {  { "param_reserved", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_get_device_info_t, param_reserved) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_GET_DEVICE_INFO { \
    "CMD_GET_DEVICE_INFO", \
    1, \
    {  { "param_reserved", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_get_device_info_t, param_reserved) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_get_device_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param param_reserved  reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_get_device_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t param_reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN];
    _mav_put_uint8_t(buf, 0, param_reserved);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN);
#else
    mavlink_cmd_get_device_info_t packet;
    packet.param_reserved = param_reserved;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_CRC);
}

/**
 * @brief Pack a cmd_get_device_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param param_reserved  reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_get_device_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t param_reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN];
    _mav_put_uint8_t(buf, 0, param_reserved);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN);
#else
    mavlink_cmd_get_device_info_t packet;
    packet.param_reserved = param_reserved;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_CRC);
}

/**
 * @brief Encode a cmd_get_device_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_get_device_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_get_device_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_get_device_info_t* cmd_get_device_info)
{
    return mavlink_msg_cmd_get_device_info_pack(system_id, component_id, msg, cmd_get_device_info->param_reserved);
}

/**
 * @brief Encode a cmd_get_device_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_get_device_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_get_device_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_get_device_info_t* cmd_get_device_info)
{
    return mavlink_msg_cmd_get_device_info_pack_chan(system_id, component_id, chan, msg, cmd_get_device_info->param_reserved);
}

/**
 * @brief Send a cmd_get_device_info message
 * @param chan MAVLink channel to send the message
 *
 * @param param_reserved  reserved
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_get_device_info_send(mavlink_channel_t chan, uint8_t param_reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN];
    _mav_put_uint8_t(buf, 0, param_reserved);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO, buf, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_CRC);
#else
    mavlink_cmd_get_device_info_t packet;
    packet.param_reserved = param_reserved;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO, (const char *)&packet, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_CRC);
#endif
}

/**
 * @brief Send a cmd_get_device_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_get_device_info_send_struct(mavlink_channel_t chan, const mavlink_cmd_get_device_info_t* cmd_get_device_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_get_device_info_send(chan, cmd_get_device_info->param_reserved);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO, (const char *)cmd_get_device_info, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_get_device_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t param_reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, param_reserved);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO, buf, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_CRC);
#else
    mavlink_cmd_get_device_info_t *packet = (mavlink_cmd_get_device_info_t *)msgbuf;
    packet->param_reserved = param_reserved;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO, (const char *)packet, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_GET_DEVICE_INFO UNPACKING


/**
 * @brief Get field param_reserved from cmd_get_device_info message
 *
 * @return  reserved
 */
static inline uint8_t mavlink_msg_cmd_get_device_info_get_param_reserved(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a cmd_get_device_info message into a struct
 *
 * @param msg The message to decode
 * @param cmd_get_device_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_get_device_info_decode(const mavlink_message_t* msg, mavlink_cmd_get_device_info_t* cmd_get_device_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_get_device_info->param_reserved = mavlink_msg_cmd_get_device_info_get_param_reserved(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN? msg->len : MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN;
        memset(cmd_get_device_info, 0, MAVLINK_MSG_ID_CMD_GET_DEVICE_INFO_LEN);
    memcpy(cmd_get_device_info, _MAV_PAYLOAD(msg), len);
#endif
}
