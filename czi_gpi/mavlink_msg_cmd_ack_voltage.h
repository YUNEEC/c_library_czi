#pragma once
// MESSAGE CMD_ACK_VOLTAGE PACKING

#define MAVLINK_MSG_ID_CMD_ACK_VOLTAGE 100005


typedef struct __mavlink_cmd_ack_voltage_t {
 uint8_t vol; /*<  Return Current Voltage*/
} mavlink_cmd_ack_voltage_t;

#define MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN 1
#define MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_MIN_LEN 1
#define MAVLINK_MSG_ID_100005_LEN 1
#define MAVLINK_MSG_ID_100005_MIN_LEN 1

#define MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_CRC 176
#define MAVLINK_MSG_ID_100005_CRC 176



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_ACK_VOLTAGE { \
    100005, \
    "CMD_ACK_VOLTAGE", \
    1, \
    {  { "vol", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_ack_voltage_t, vol) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_ACK_VOLTAGE { \
    "CMD_ACK_VOLTAGE", \
    1, \
    {  { "vol", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_ack_voltage_t, vol) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_ack_voltage message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param vol  Return Current Voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_ack_voltage_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t vol)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN];
    _mav_put_uint8_t(buf, 0, vol);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN);
#else
    mavlink_cmd_ack_voltage_t packet;
    packet.vol = vol;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_ACK_VOLTAGE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_MIN_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_CRC);
}

/**
 * @brief Pack a cmd_ack_voltage message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vol  Return Current Voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_ack_voltage_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t vol)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN];
    _mav_put_uint8_t(buf, 0, vol);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN);
#else
    mavlink_cmd_ack_voltage_t packet;
    packet.vol = vol;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_ACK_VOLTAGE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_MIN_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_CRC);
}

/**
 * @brief Encode a cmd_ack_voltage struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_ack_voltage C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_ack_voltage_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_ack_voltage_t* cmd_ack_voltage)
{
    return mavlink_msg_cmd_ack_voltage_pack(system_id, component_id, msg, cmd_ack_voltage->vol);
}

/**
 * @brief Encode a cmd_ack_voltage struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_ack_voltage C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_ack_voltage_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_ack_voltage_t* cmd_ack_voltage)
{
    return mavlink_msg_cmd_ack_voltage_pack_chan(system_id, component_id, chan, msg, cmd_ack_voltage->vol);
}

/**
 * @brief Send a cmd_ack_voltage message
 * @param chan MAVLink channel to send the message
 *
 * @param vol  Return Current Voltage
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_ack_voltage_send(mavlink_channel_t chan, uint8_t vol)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN];
    _mav_put_uint8_t(buf, 0, vol);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE, buf, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_MIN_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_CRC);
#else
    mavlink_cmd_ack_voltage_t packet;
    packet.vol = vol;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE, (const char *)&packet, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_MIN_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_CRC);
#endif
}

/**
 * @brief Send a cmd_ack_voltage message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_ack_voltage_send_struct(mavlink_channel_t chan, const mavlink_cmd_ack_voltage_t* cmd_ack_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_ack_voltage_send(chan, cmd_ack_voltage->vol);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE, (const char *)cmd_ack_voltage, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_MIN_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_ack_voltage_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t vol)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, vol);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE, buf, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_MIN_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_CRC);
#else
    mavlink_cmd_ack_voltage_t *packet = (mavlink_cmd_ack_voltage_t *)msgbuf;
    packet->vol = vol;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE, (const char *)packet, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_MIN_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_ACK_VOLTAGE UNPACKING


/**
 * @brief Get field vol from cmd_ack_voltage message
 *
 * @return  Return Current Voltage
 */
static inline uint8_t mavlink_msg_cmd_ack_voltage_get_vol(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a cmd_ack_voltage message into a struct
 *
 * @param msg The message to decode
 * @param cmd_ack_voltage C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_ack_voltage_decode(const mavlink_message_t* msg, mavlink_cmd_ack_voltage_t* cmd_ack_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_ack_voltage->vol = mavlink_msg_cmd_ack_voltage_get_vol(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN? msg->len : MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN;
        memset(cmd_ack_voltage, 0, MAVLINK_MSG_ID_CMD_ACK_VOLTAGE_LEN);
    memcpy(cmd_ack_voltage, _MAV_PAYLOAD(msg), len);
#endif
}
