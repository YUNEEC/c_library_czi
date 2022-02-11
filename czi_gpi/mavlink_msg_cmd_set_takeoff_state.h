#pragma once
// MESSAGE CMD_SET_TAKEOFF_STATE PACKING

#define MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE 100049


typedef struct __mavlink_cmd_set_takeoff_state_t {
 uint8_t is_takeoff; /*<  Takeoff state, if the aircraft has taken off, the power limit of the device will be lifted. 0: no takeoff 1: takeoff*/
} mavlink_cmd_set_takeoff_state_t;

#define MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN 1
#define MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_MIN_LEN 1
#define MAVLINK_MSG_ID_100049_LEN 1
#define MAVLINK_MSG_ID_100049_MIN_LEN 1

#define MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_CRC 135
#define MAVLINK_MSG_ID_100049_CRC 135



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_SET_TAKEOFF_STATE { \
    100049, \
    "CMD_SET_TAKEOFF_STATE", \
    1, \
    {  { "is_takeoff", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_set_takeoff_state_t, is_takeoff) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_SET_TAKEOFF_STATE { \
    "CMD_SET_TAKEOFF_STATE", \
    1, \
    {  { "is_takeoff", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_set_takeoff_state_t, is_takeoff) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_set_takeoff_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param is_takeoff  Takeoff state, if the aircraft has taken off, the power limit of the device will be lifted. 0: no takeoff 1: takeoff
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_takeoff_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t is_takeoff)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN];
    _mav_put_uint8_t(buf, 0, is_takeoff);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN);
#else
    mavlink_cmd_set_takeoff_state_t packet;
    packet.is_takeoff = is_takeoff;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_CRC);
}

/**
 * @brief Pack a cmd_set_takeoff_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param is_takeoff  Takeoff state, if the aircraft has taken off, the power limit of the device will be lifted. 0: no takeoff 1: takeoff
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_set_takeoff_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t is_takeoff)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN];
    _mav_put_uint8_t(buf, 0, is_takeoff);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN);
#else
    mavlink_cmd_set_takeoff_state_t packet;
    packet.is_takeoff = is_takeoff;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_CRC);
}

/**
 * @brief Encode a cmd_set_takeoff_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_takeoff_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_takeoff_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_set_takeoff_state_t* cmd_set_takeoff_state)
{
    return mavlink_msg_cmd_set_takeoff_state_pack(system_id, component_id, msg, cmd_set_takeoff_state->is_takeoff);
}

/**
 * @brief Encode a cmd_set_takeoff_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_set_takeoff_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_set_takeoff_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_set_takeoff_state_t* cmd_set_takeoff_state)
{
    return mavlink_msg_cmd_set_takeoff_state_pack_chan(system_id, component_id, chan, msg, cmd_set_takeoff_state->is_takeoff);
}

/**
 * @brief Send a cmd_set_takeoff_state message
 * @param chan MAVLink channel to send the message
 *
 * @param is_takeoff  Takeoff state, if the aircraft has taken off, the power limit of the device will be lifted. 0: no takeoff 1: takeoff
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_set_takeoff_state_send(mavlink_channel_t chan, uint8_t is_takeoff)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN];
    _mav_put_uint8_t(buf, 0, is_takeoff);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE, buf, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_CRC);
#else
    mavlink_cmd_set_takeoff_state_t packet;
    packet.is_takeoff = is_takeoff;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE, (const char *)&packet, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_CRC);
#endif
}

/**
 * @brief Send a cmd_set_takeoff_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_set_takeoff_state_send_struct(mavlink_channel_t chan, const mavlink_cmd_set_takeoff_state_t* cmd_set_takeoff_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_set_takeoff_state_send(chan, cmd_set_takeoff_state->is_takeoff);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE, (const char *)cmd_set_takeoff_state, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_set_takeoff_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t is_takeoff)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, is_takeoff);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE, buf, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_CRC);
#else
    mavlink_cmd_set_takeoff_state_t *packet = (mavlink_cmd_set_takeoff_state_t *)msgbuf;
    packet->is_takeoff = is_takeoff;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE, (const char *)packet, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_MIN_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_SET_TAKEOFF_STATE UNPACKING


/**
 * @brief Get field is_takeoff from cmd_set_takeoff_state message
 *
 * @return  Takeoff state, if the aircraft has taken off, the power limit of the device will be lifted. 0: no takeoff 1: takeoff
 */
static inline uint8_t mavlink_msg_cmd_set_takeoff_state_get_is_takeoff(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a cmd_set_takeoff_state message into a struct
 *
 * @param msg The message to decode
 * @param cmd_set_takeoff_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_set_takeoff_state_decode(const mavlink_message_t* msg, mavlink_cmd_set_takeoff_state_t* cmd_set_takeoff_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_set_takeoff_state->is_takeoff = mavlink_msg_cmd_set_takeoff_state_get_is_takeoff(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN? msg->len : MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN;
        memset(cmd_set_takeoff_state, 0, MAVLINK_MSG_ID_CMD_SET_TAKEOFF_STATE_LEN);
    memcpy(cmd_set_takeoff_state, _MAV_PAYLOAD(msg), len);
#endif
}
