#pragma once
// MESSAGE CMD_SET_LIGHT_ZOOM PACKING

#define MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM 100019


typedef struct __mavlink_cmd_set_light_zoom_t {
 uint8_t zoom; /*<  zoom range: 0-100*/
} mavlink_cmd_set_light_zoom_t;

#define MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN 1
#define MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_MIN_LEN 1
#define MAVLINK_MSG_ID_100019_LEN 1
#define MAVLINK_MSG_ID_100019_MIN_LEN 1

#define MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_CRC 192
#define MAVLINK_MSG_ID_100019_CRC 192



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_ZOOM { \
    100019, \
    "CMD_SET_LIGHT_ZOOM", \
    1, \
    {  { "zoom", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_set_light_zoom_t, zoom) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_ZOOM { \
    "CMD_SET_LIGHT_ZOOM", \
    1, \
    {  { "zoom", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_set_light_zoom_t, zoom) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_set_light_zoom message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param zoom  zoom range: 0-100
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_light_zoom_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN];
    _mav_put_uint8_t(buf, 0, zoom);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN);
#else
    mavlink_cmd_set_light_zoom_t packet;
    packet.zoom = zoom;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_CRC);
}

/**
 * @brief Pack a cmd_set_light_zoom message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param zoom  zoom range: 0-100
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_light_zoom_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN];
    _mav_put_uint8_t(buf, 0, zoom);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN);
#else
    mavlink_cmd_set_light_zoom_t packet;
    packet.zoom = zoom;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_CRC);
}

/**
 * @brief Encode a cmd_set_light_zoom struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_light_zoom C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_light_zoom_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_set_light_zoom_t* cmd_set_light_zoom)
{
    return mavlink_msg_cmd_set_light_zoom_pack(system_id, component_id, msg, cmd_set_light_zoom->zoom);
}

/**
 * @brief Encode a cmd_set_light_zoom struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_light_zoom C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_light_zoom_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_set_light_zoom_t* cmd_set_light_zoom)
{
    return mavlink_msg_cmd_set_light_zoom_pack_chan(system_id, component_id, chan, msg, cmd_set_light_zoom->zoom);
}

/**
 * @brief Send a cmd_set_light_zoom message
 * @param chan MAVLink channel to send the message
 *
 * @param zoom  zoom range: 0-100
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_set_light_zoom_send(mavlink_channel_t chan, uint8_t zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN];
    _mav_put_uint8_t(buf, 0, zoom);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM, buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_CRC);
#else
    mavlink_cmd_set_light_zoom_t packet;
    packet.zoom = zoom;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM, (const char *)&packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_CRC);
#endif
}

/**
 * @brief Send a cmd_set_light_zoom message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_set_light_zoom_send_struct(mavlink_channel_t chan, const mavlink_cmd_set_light_zoom_t* cmd_set_light_zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_set_light_zoom_send(chan, cmd_set_light_zoom->zoom);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM, (const char *)cmd_set_light_zoom, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_set_light_zoom_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, zoom);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM, buf, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_CRC);
#else
    mavlink_cmd_set_light_zoom_t *packet = (mavlink_cmd_set_light_zoom_t *)msgbuf;
    packet->zoom = zoom;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM, (const char *)packet, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_SET_LIGHT_ZOOM UNPACKING


/**
 * @brief Get field zoom from cmd_set_light_zoom message
 *
 * @return  zoom range: 0-100
 */
static inline uint8_t mavlink_msg_cmd_set_light_zoom_get_zoom(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a cmd_set_light_zoom message into a struct
 *
 * @param msg The message to decode
 * @param cmd_set_light_zoom C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_set_light_zoom_decode(const mavlink_message_t* msg, mavlink_cmd_set_light_zoom_t* cmd_set_light_zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_set_light_zoom->zoom = mavlink_msg_cmd_set_light_zoom_get_zoom(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN? msg->len : MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN;
        memset(cmd_set_light_zoom, 0, MAVLINK_MSG_ID_CMD_SET_LIGHT_ZOOM_LEN);
    memcpy(cmd_set_light_zoom, _MAV_PAYLOAD(msg), len);
#endif
}
