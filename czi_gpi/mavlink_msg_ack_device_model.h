#pragma once
// MESSAGE ACK_DEVICE_MODEL PACKING

#define MAVLINK_MSG_ID_ACK_DEVICE_MODEL 100001


typedef struct __mavlink_ack_device_model_t {
 char model[255]; /*<  Device Type*/
} mavlink_ack_device_model_t;

#define MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN 255
#define MAVLINK_MSG_ID_ACK_DEVICE_MODEL_MIN_LEN 255
#define MAVLINK_MSG_ID_100001_LEN 255
#define MAVLINK_MSG_ID_100001_MIN_LEN 255

#define MAVLINK_MSG_ID_ACK_DEVICE_MODEL_CRC 158
#define MAVLINK_MSG_ID_100001_CRC 158

#define MAVLINK_MSG_ACK_DEVICE_MODEL_FIELD_MODEL_LEN 255

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACK_DEVICE_MODEL { \
    100001, \
    "ACK_DEVICE_MODEL", \
    1, \
    {  { "model", NULL, MAVLINK_TYPE_CHAR, 255, 0, offsetof(mavlink_ack_device_model_t, model) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACK_DEVICE_MODEL { \
    "ACK_DEVICE_MODEL", \
    1, \
    {  { "model", NULL, MAVLINK_TYPE_CHAR, 255, 0, offsetof(mavlink_ack_device_model_t, model) }, \
         } \
}
#endif

/**
 * @brief Pack a ack_device_model message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param model  Device Type
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ack_device_model_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN];

    _mav_put_char_array(buf, 0, model, 255);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN);
#else
    mavlink_ack_device_model_t packet;

    mav_array_memcpy(packet.model, model, sizeof(char)*255);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACK_DEVICE_MODEL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_CRC);
}

/**
 * @brief Pack a ack_device_model message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param model  Device Type
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ack_device_model_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN];

    _mav_put_char_array(buf, 0, model, 255);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN);
#else
    mavlink_ack_device_model_t packet;

    mav_array_memcpy(packet.model, model, sizeof(char)*255);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACK_DEVICE_MODEL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_CRC);
}

/**
 * @brief Encode a ack_device_model struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ack_device_model C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ack_device_model_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ack_device_model_t* ack_device_model)
{
    return mavlink_msg_ack_device_model_pack(system_id, component_id, msg, ack_device_model->model);
}

/**
 * @brief Encode a ack_device_model struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ack_device_model C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ack_device_model_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ack_device_model_t* ack_device_model)
{
    return mavlink_msg_ack_device_model_pack_chan(system_id, component_id, chan, msg, ack_device_model->model);
}

/**
 * @brief Send a ack_device_model message
 * @param chan MAVLink channel to send the message
 *
 * @param model  Device Type
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ack_device_model_send(mavlink_channel_t chan, const char *model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN];

    _mav_put_char_array(buf, 0, model, 255);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_DEVICE_MODEL, buf, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_CRC);
#else
    mavlink_ack_device_model_t packet;

    mav_array_memcpy(packet.model, model, sizeof(char)*255);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_DEVICE_MODEL, (const char *)&packet, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_CRC);
#endif
}

/**
 * @brief Send a ack_device_model message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ack_device_model_send_struct(mavlink_channel_t chan, const mavlink_ack_device_model_t* ack_device_model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ack_device_model_send(chan, ack_device_model->model);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_DEVICE_MODEL, (const char *)ack_device_model, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ack_device_model_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, model, 255);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_DEVICE_MODEL, buf, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_CRC);
#else
    mavlink_ack_device_model_t *packet = (mavlink_ack_device_model_t *)msgbuf;

    mav_array_memcpy(packet->model, model, sizeof(char)*255);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACK_DEVICE_MODEL, (const char *)packet, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_MIN_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_CRC);
#endif
}
#endif

#endif

// MESSAGE ACK_DEVICE_MODEL UNPACKING


/**
 * @brief Get field model from ack_device_model message
 *
 * @return  Device Type
 */
static inline uint16_t mavlink_msg_ack_device_model_get_model(const mavlink_message_t* msg, char *model)
{
    return _MAV_RETURN_char_array(msg, model, 255,  0);
}

/**
 * @brief Decode a ack_device_model message into a struct
 *
 * @param msg The message to decode
 * @param ack_device_model C-struct to decode the message contents into
 */
static inline void mavlink_msg_ack_device_model_decode(const mavlink_message_t* msg, mavlink_ack_device_model_t* ack_device_model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ack_device_model_get_model(msg, ack_device_model->model);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN? msg->len : MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN;
        memset(ack_device_model, 0, MAVLINK_MSG_ID_ACK_DEVICE_MODEL_LEN);
    memcpy(ack_device_model, _MAV_PAYLOAD(msg), len);
#endif
}
