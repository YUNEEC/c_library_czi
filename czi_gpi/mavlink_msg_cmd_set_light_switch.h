#pragma once
// MESSAGE CMD_SET_LIGHT_SWITCH PACKING

#define MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH 100016


typedef struct __mavlink_cmd_set_light_switch_t {
 uint8_t enable; /*<  0: close 1: open*/
} mavlink_cmd_set_light_switch_t;

#define MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN 1
#define MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_MIN_LEN 1
#define MAVLINK_MSG_ID_100016_LEN 1
#define MAVLINK_MSG_ID_100016_MIN_LEN 1

#define MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_CRC 94
#define MAVLINK_MSG_ID_100016_CRC 94



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_SWITCH { \
    100016, \
    "CMD_SET_LIGHT_SWITCH", \
    1, \
    {  { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_set_light_switch_t, enable) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_SWITCH { \
    "CMD_SET_LIGHT_SWITCH", \
    1, \
    {  { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_set_light_switch_t, enable) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_set_light_switch message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param enable  0: close 1: open
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_light_switch_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN];
    _mav_put_uint8_t(buf, 0, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN);
#else
    mavlink_cmd_set_light_switch_t packet;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_CRC);
}

/**
 * @brief Pack a cmd_set_light_switch message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param enable  0: close 1: open
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_light_switch_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN];
    _mav_put_uint8_t(buf, 0, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN);
#else
    mavlink_cmd_set_light_switch_t packet;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_CRC);
}

/**
 * @brief Encode a cmd_set_light_switch struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_light_switch C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_light_switch_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_set_light_switch_t* cmd_set_light_switch)
{
    return mavlink_msg_cmd_set_light_switch_pack(system_id, component_id, msg, cmd_set_light_switch->enable);
}

/**
 * @brief Encode a cmd_set_light_switch struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_light_switch C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_light_switch_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_set_light_switch_t* cmd_set_light_switch)
{
    return mavlink_msg_cmd_set_light_switch_pack_chan(system_id, component_id, chan, msg, cmd_set_light_switch->enable);
}

/**
 * @brief Send a cmd_set_light_switch message
 * @param chan MAVLink channel to send the message
 *
 * @param enable  0: close 1: open
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_set_light_switch_send(mavlink_channel_t chan, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN];
    _mav_put_uint8_t(buf, 0, enable);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH, buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_CRC);
#else
    mavlink_cmd_set_light_switch_t packet;
    packet.enable = enable;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH, (const char *)&packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_CRC);
#endif
}

/**
 * @brief Send a cmd_set_light_switch message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_set_light_switch_send_struct(mavlink_channel_t chan, const mavlink_cmd_set_light_switch_t* cmd_set_light_switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_set_light_switch_send(chan, cmd_set_light_switch->enable);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH, (const char *)cmd_set_light_switch, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_set_light_switch_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, enable);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH, buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_CRC);
#else
    mavlink_cmd_set_light_switch_t *packet = (mavlink_cmd_set_light_switch_t *)msgbuf;
    packet->enable = enable;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH, (const char *)packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_SET_LIGHT_SWITCH UNPACKING


/**
 * @brief Get field enable from cmd_set_light_switch message
 *
 * @return  0: close 1: open
 */
static inline uint8_t mavlink_msg_cmd_set_light_switch_get_enable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a cmd_set_light_switch message into a struct
 *
 * @param msg The message to decode
 * @param cmd_set_light_switch C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_set_light_switch_decode(const mavlink_message_t* msg, mavlink_cmd_set_light_switch_t* cmd_set_light_switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_set_light_switch->enable = mavlink_msg_cmd_set_light_switch_get_enable(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN? msg->len : MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN;
        memset(cmd_set_light_switch, 0, MAVLINK_MSG_ID_CMD_SET_LIGHT_SWITCH_LEN);
    memcpy(cmd_set_light_switch, _MAV_PAYLOAD(msg), len);
#endif
}
