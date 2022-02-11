#pragma once
// MESSAGE CMD_GET_DEVICE_MODEL PACKING

#define MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL 100000


typedef struct __mavlink_cmd_get_device_model_t {
 uint8_t param_reserved; /*<  reserved*/
} mavlink_cmd_get_device_model_t;

#define MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN 1
#define MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_MIN_LEN 1
#define MAVLINK_MSG_ID_100000_LEN 1
#define MAVLINK_MSG_ID_100000_MIN_LEN 1

#define MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_CRC 224
#define MAVLINK_MSG_ID_100000_CRC 224



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_GET_DEVICE_MODEL { \
    100000, \
    "CMD_GET_DEVICE_MODEL", \
    1, \
    {  { "param_reserved", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_get_device_model_t, param_reserved) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_GET_DEVICE_MODEL { \
    "CMD_GET_DEVICE_MODEL", \
    1, \
    {  { "param_reserved", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_get_device_model_t, param_reserved) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_get_device_model message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param param_reserved  reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_get_device_model_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t param_reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN];
    _mav_put_uint8_t(buf, 0, param_reserved);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN);
#else
    mavlink_cmd_get_device_model_t packet;
    packet.param_reserved = param_reserved;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_CRC);
}

/**
 * @brief Pack a cmd_get_device_model message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param param_reserved  reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_get_device_model_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t param_reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN];
    _mav_put_uint8_t(buf, 0, param_reserved);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN);
#else
    mavlink_cmd_get_device_model_t packet;
    packet.param_reserved = param_reserved;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_CRC);
}

/**
 * @brief Encode a cmd_get_device_model struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_get_device_model C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_get_device_model_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_get_device_model_t* cmd_get_device_model)
{
    return mavlink_msg_cmd_get_device_model_pack(system_id, component_id, msg, cmd_get_device_model->param_reserved);
}

/**
 * @brief Encode a cmd_get_device_model struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_get_device_model C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_get_device_model_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_get_device_model_t* cmd_get_device_model)
{
    return mavlink_msg_cmd_get_device_model_pack_chan(system_id, component_id, chan, msg, cmd_get_device_model->param_reserved);
}

/**
 * @brief Send a cmd_get_device_model message
 * @param chan MAVLink channel to send the message
 *
 * @param param_reserved  reserved
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_get_device_model_send(mavlink_channel_t chan, uint8_t param_reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN];
    _mav_put_uint8_t(buf, 0, param_reserved);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL, buf, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_CRC);
#else
    mavlink_cmd_get_device_model_t packet;
    packet.param_reserved = param_reserved;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL, (const char *)&packet, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_CRC);
#endif
}

/**
 * @brief Send a cmd_get_device_model message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_get_device_model_send_struct(mavlink_channel_t chan, const mavlink_cmd_get_device_model_t* cmd_get_device_model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_get_device_model_send(chan, cmd_get_device_model->param_reserved);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL, (const char *)cmd_get_device_model, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_get_device_model_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t param_reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, param_reserved);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL, buf, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_CRC);
#else
    mavlink_cmd_get_device_model_t *packet = (mavlink_cmd_get_device_model_t *)msgbuf;
    packet->param_reserved = param_reserved;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL, (const char *)packet, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_GET_DEVICE_MODEL UNPACKING


/**
 * @brief Get field param_reserved from cmd_get_device_model message
 *
 * @return  reserved
 */
static inline uint8_t mavlink_msg_cmd_get_device_model_get_param_reserved(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a cmd_get_device_model message into a struct
 *
 * @param msg The message to decode
 * @param cmd_get_device_model C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_get_device_model_decode(const mavlink_message_t* msg, mavlink_cmd_get_device_model_t* cmd_get_device_model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_get_device_model->param_reserved = mavlink_msg_cmd_get_device_model_get_param_reserved(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN? msg->len : MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN;
        memset(cmd_get_device_model, 0, MAVLINK_MSG_ID_CMD_GET_DEVICE_MODEL_LEN);
    memcpy(cmd_get_device_model, _MAV_PAYLOAD(msg), len);
#endif
}
