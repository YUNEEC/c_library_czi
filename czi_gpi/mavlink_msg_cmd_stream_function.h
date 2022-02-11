#pragma once
// MESSAGE CMD_STREAM_FUNCTION PACKING

#define MAVLINK_MSG_ID_CMD_STREAM_FUNCTION 100097


typedef struct __mavlink_cmd_stream_function_t {
 uint8_t action; /*<  Stream Action*/
 uint8_t type; /*<  Type*/
 uint8_t result; /*<  Result*/
} mavlink_cmd_stream_function_t;

#define MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN 3
#define MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_MIN_LEN 3
#define MAVLINK_MSG_ID_100097_LEN 3
#define MAVLINK_MSG_ID_100097_MIN_LEN 3

#define MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_CRC 109
#define MAVLINK_MSG_ID_100097_CRC 109



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_STREAM_FUNCTION { \
    100097, \
    "CMD_STREAM_FUNCTION", \
    3, \
    {  { "action", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_stream_function_t, action) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_stream_function_t, type) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_cmd_stream_function_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_STREAM_FUNCTION { \
    "CMD_STREAM_FUNCTION", \
    3, \
    {  { "action", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_stream_function_t, action) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_stream_function_t, type) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_cmd_stream_function_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_stream_function message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param action  Stream Action
 * @param type  Type
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_stream_function_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t action, uint8_t type, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN];
    _mav_put_uint8_t(buf, 0, action);
    _mav_put_uint8_t(buf, 1, type);
    _mav_put_uint8_t(buf, 2, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN);
#else
    mavlink_cmd_stream_function_t packet;
    packet.action = action;
    packet.type = type;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_STREAM_FUNCTION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_CRC);
}

/**
 * @brief Pack a cmd_stream_function message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param action  Stream Action
 * @param type  Type
 * @param result  Result
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_stream_function_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t action,uint8_t type,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN];
    _mav_put_uint8_t(buf, 0, action);
    _mav_put_uint8_t(buf, 1, type);
    _mav_put_uint8_t(buf, 2, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN);
#else
    mavlink_cmd_stream_function_t packet;
    packet.action = action;
    packet.type = type;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_STREAM_FUNCTION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_CRC);
}

/**
 * @brief Encode a cmd_stream_function struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_stream_function C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_stream_function_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_stream_function_t* cmd_stream_function)
{
    return mavlink_msg_cmd_stream_function_pack(system_id, component_id, msg, cmd_stream_function->action, cmd_stream_function->type, cmd_stream_function->result);
}

/**
 * @brief Encode a cmd_stream_function struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_stream_function C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_stream_function_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_stream_function_t* cmd_stream_function)
{
    return mavlink_msg_cmd_stream_function_pack_chan(system_id, component_id, chan, msg, cmd_stream_function->action, cmd_stream_function->type, cmd_stream_function->result);
}

/**
 * @brief Send a cmd_stream_function message
 * @param chan MAVLink channel to send the message
 *
 * @param action  Stream Action
 * @param type  Type
 * @param result  Result
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_stream_function_send(mavlink_channel_t chan, uint8_t action, uint8_t type, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN];
    _mav_put_uint8_t(buf, 0, action);
    _mav_put_uint8_t(buf, 1, type);
    _mav_put_uint8_t(buf, 2, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION, buf, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_CRC);
#else
    mavlink_cmd_stream_function_t packet;
    packet.action = action;
    packet.type = type;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION, (const char *)&packet, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_CRC);
#endif
}

/**
 * @brief Send a cmd_stream_function message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_stream_function_send_struct(mavlink_channel_t chan, const mavlink_cmd_stream_function_t* cmd_stream_function)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_stream_function_send(chan, cmd_stream_function->action, cmd_stream_function->type, cmd_stream_function->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION, (const char *)cmd_stream_function, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_stream_function_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t action, uint8_t type, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, action);
    _mav_put_uint8_t(buf, 1, type);
    _mav_put_uint8_t(buf, 2, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION, buf, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_CRC);
#else
    mavlink_cmd_stream_function_t *packet = (mavlink_cmd_stream_function_t *)msgbuf;
    packet->action = action;
    packet->type = type;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION, (const char *)packet, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_MIN_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_STREAM_FUNCTION UNPACKING


/**
 * @brief Get field action from cmd_stream_function message
 *
 * @return  Stream Action
 */
static inline uint8_t mavlink_msg_cmd_stream_function_get_action(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field type from cmd_stream_function message
 *
 * @return  Type
 */
static inline uint8_t mavlink_msg_cmd_stream_function_get_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field result from cmd_stream_function message
 *
 * @return  Result
 */
static inline uint8_t mavlink_msg_cmd_stream_function_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a cmd_stream_function message into a struct
 *
 * @param msg The message to decode
 * @param cmd_stream_function C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_stream_function_decode(const mavlink_message_t* msg, mavlink_cmd_stream_function_t* cmd_stream_function)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_stream_function->action = mavlink_msg_cmd_stream_function_get_action(msg);
    cmd_stream_function->type = mavlink_msg_cmd_stream_function_get_type(msg);
    cmd_stream_function->result = mavlink_msg_cmd_stream_function_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN? msg->len : MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN;
        memset(cmd_stream_function, 0, MAVLINK_MSG_ID_CMD_STREAM_FUNCTION_LEN);
    memcpy(cmd_stream_function, _MAV_PAYLOAD(msg), len);
#endif
}
