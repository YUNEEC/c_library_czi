#pragma once
// MESSAGE CMD_GET_TEMPERATURE PACKING

#define MAVLINK_MSG_ID_CMD_GET_TEMPERATURE 100020


typedef struct __mavlink_cmd_get_temperature_t {
 uint8_t led_temperature; /*<  Led temperature*/
 uint8_t driver_temperature; /*<  Driver temperature*/
} mavlink_cmd_get_temperature_t;

#define MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN 2
#define MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_MIN_LEN 2
#define MAVLINK_MSG_ID_100020_LEN 2
#define MAVLINK_MSG_ID_100020_MIN_LEN 2

#define MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_CRC 105
#define MAVLINK_MSG_ID_100020_CRC 105



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_GET_TEMPERATURE { \
    100020, \
    "CMD_GET_TEMPERATURE", \
    2, \
    {  { "led_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_get_temperature_t, led_temperature) }, \
         { "driver_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_get_temperature_t, driver_temperature) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_GET_TEMPERATURE { \
    "CMD_GET_TEMPERATURE", \
    2, \
    {  { "led_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_get_temperature_t, led_temperature) }, \
         { "driver_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cmd_get_temperature_t, driver_temperature) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_get_temperature message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param led_temperature  Led temperature
 * @param driver_temperature  Driver temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_get_temperature_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t led_temperature, uint8_t driver_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN];
    _mav_put_uint8_t(buf, 0, led_temperature);
    _mav_put_uint8_t(buf, 1, driver_temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN);
#else
    mavlink_cmd_get_temperature_t packet;
    packet.led_temperature = led_temperature;
    packet.driver_temperature = driver_temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_GET_TEMPERATURE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_CRC);
}

/**
 * @brief Pack a cmd_get_temperature message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param led_temperature  Led temperature
 * @param driver_temperature  Driver temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_get_temperature_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t led_temperature,uint8_t driver_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN];
    _mav_put_uint8_t(buf, 0, led_temperature);
    _mav_put_uint8_t(buf, 1, driver_temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN);
#else
    mavlink_cmd_get_temperature_t packet;
    packet.led_temperature = led_temperature;
    packet.driver_temperature = driver_temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_GET_TEMPERATURE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_CRC);
}

/**
 * @brief Encode a cmd_get_temperature struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_get_temperature C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_get_temperature_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_get_temperature_t* cmd_get_temperature)
{
    return mavlink_msg_cmd_get_temperature_pack(system_id, component_id, msg, cmd_get_temperature->led_temperature, cmd_get_temperature->driver_temperature);
}

/**
 * @brief Encode a cmd_get_temperature struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_get_temperature C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_get_temperature_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_get_temperature_t* cmd_get_temperature)
{
    return mavlink_msg_cmd_get_temperature_pack_chan(system_id, component_id, chan, msg, cmd_get_temperature->led_temperature, cmd_get_temperature->driver_temperature);
}

/**
 * @brief Send a cmd_get_temperature message
 * @param chan MAVLink channel to send the message
 *
 * @param led_temperature  Led temperature
 * @param driver_temperature  Driver temperature
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_get_temperature_send(mavlink_channel_t chan, uint8_t led_temperature, uint8_t driver_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN];
    _mav_put_uint8_t(buf, 0, led_temperature);
    _mav_put_uint8_t(buf, 1, driver_temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE, buf, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_CRC);
#else
    mavlink_cmd_get_temperature_t packet;
    packet.led_temperature = led_temperature;
    packet.driver_temperature = driver_temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE, (const char *)&packet, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_CRC);
#endif
}

/**
 * @brief Send a cmd_get_temperature message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_get_temperature_send_struct(mavlink_channel_t chan, const mavlink_cmd_get_temperature_t* cmd_get_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_get_temperature_send(chan, cmd_get_temperature->led_temperature, cmd_get_temperature->driver_temperature);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE, (const char *)cmd_get_temperature, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_get_temperature_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t led_temperature, uint8_t driver_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, led_temperature);
    _mav_put_uint8_t(buf, 1, driver_temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE, buf, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_CRC);
#else
    mavlink_cmd_get_temperature_t *packet = (mavlink_cmd_get_temperature_t *)msgbuf;
    packet->led_temperature = led_temperature;
    packet->driver_temperature = driver_temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE, (const char *)packet, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_MIN_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_GET_TEMPERATURE UNPACKING


/**
 * @brief Get field led_temperature from cmd_get_temperature message
 *
 * @return  Led temperature
 */
static inline uint8_t mavlink_msg_cmd_get_temperature_get_led_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field driver_temperature from cmd_get_temperature message
 *
 * @return  Driver temperature
 */
static inline uint8_t mavlink_msg_cmd_get_temperature_get_driver_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a cmd_get_temperature message into a struct
 *
 * @param msg The message to decode
 * @param cmd_get_temperature C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_get_temperature_decode(const mavlink_message_t* msg, mavlink_cmd_get_temperature_t* cmd_get_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_get_temperature->led_temperature = mavlink_msg_cmd_get_temperature_get_led_temperature(msg);
    cmd_get_temperature->driver_temperature = mavlink_msg_cmd_get_temperature_get_driver_temperature(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN? msg->len : MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN;
        memset(cmd_get_temperature, 0, MAVLINK_MSG_ID_CMD_GET_TEMPERATURE_LEN);
    memcpy(cmd_get_temperature, _MAV_PAYLOAD(msg), len);
#endif
}
