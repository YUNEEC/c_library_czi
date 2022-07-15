/** @file
 *  @brief MAVLink comm protocol generated from czi_gpi.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_CZI_GPI_H
#define MAVLINK_CZI_GPI_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_CZI_GPI.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{100000, 224, 1, 1, 0, 0, 0}, {100001, 158, 255, 255, 0, 0, 0}, {100002, 42, 1, 1, 0, 0, 0}, {100003, 240, 255, 255, 0, 0, 0}, {100004, 212, 1, 1, 0, 0, 0}, {100005, 176, 1, 1, 0, 0, 0}, {100006, 133, 128, 128, 0, 0, 0}, {100014, 210, 4, 4, 0, 0, 0}, {100015, 210, 205, 205, 0, 0, 0}, {100016, 94, 1, 1, 0, 0, 0}, {100017, 237, 1, 1, 0, 0, 0}, {100018, 16, 1, 1, 0, 0, 0}, {100019, 192, 1, 1, 0, 0, 0}, {100020, 105, 2, 2, 0, 0, 0}, {100032, 172, 4, 4, 0, 0, 0}, {100033, 72, 6, 6, 0, 0, 0}, {100034, 157, 1, 1, 0, 0, 0}, {100035, 145, 1, 1, 0, 0, 0}, {100049, 135, 1, 1, 0, 0, 0}, {100050, 145, 10, 10, 0, 0, 0}, {100084, 174, 253, 253, 0, 0, 0}, {100085, 253, 251, 251, 0, 0, 0}, {100086, 251, 2, 2, 0, 0, 0}, {100087, 85, 2, 2, 0, 0, 0}, {100090, 246, 101, 101, 0, 0, 0}, {100091, 203, 2, 2, 0, 0, 0}, {100092, 197, 2, 2, 0, 0, 0}, {100093, 145, 2, 2, 0, 0, 0}, {100094, 224, 101, 101, 0, 0, 0}, {100095, 132, 2, 2, 0, 0, 0}, {100096, 191, 2, 2, 0, 0, 0}, {100097, 109, 3, 3, 0, 0, 0}, {100098, 14, 251, 251, 0, 0, 0}, {100099, 211, 2, 2, 0, 0, 0}, {100100, 250, 103, 103, 0, 0, 0}, {100101, 160, 202, 202, 0, 0, 0}, {100102, 254, 102, 102, 0, 0, 0}, {100103, 49, 102, 102, 0, 0, 0}, {100104, 109, 102, 102, 0, 0, 0}, {100105, 218, 2, 2, 0, 0, 0}, {100106, 111, 102, 102, 0, 0, 0}, {100107, 34, 2, 2, 0, 0, 0}, {100112, 33, 2, 2, 0, 0, 0}, {100113, 144, 2, 2, 0, 0, 0}, {100256, 178, 2, 2, 0, 0, 0}, {100257, 166, 1, 1, 0, 0, 0}, {100258, 167, 1, 1, 0, 0, 0}, {100259, 120, 1, 1, 0, 0, 0}, {100260, 110, 1, 1, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_CZI_GPI

// ENUM DEFINITIONS


/** @brief  */
#ifndef HAVE_ENUM_MAV_CMD
#define HAVE_ENUM_MAV_CMD
typedef enum MAV_CMD
{
   MAV_CMD_DO_CZI_GPI_GIMBAL_SYNC=65500, /* Synchronize the attitude of the main gimbal. |0: OFF, 1: ON| Default: 154| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_ENUM_END=65501, /*  | */
} MAV_CMD;
#endif

/** @brief Play State */
#ifndef HAVE_ENUM_GPI_MEDIA_PLAY_STATE
#define HAVE_ENUM_GPI_MEDIA_PLAY_STATE
typedef enum GPI_MEDIA_PLAY_STATE
{
   GPI_MEDIA_PLAY_STATE_STOP=10, /* Stop | */
   GPI_MEDIA_PLAY_STATE_PLAY=11, /* Play | */
   GPI_MEDIA_PLAY_STATE_PAUSE=12, /* Pause | */
   GPI_MEDIA_PLAY_STATE_ASK_STATE=13, /* Ask State | */
   GPI_MEDIA_PLAY_STATE_ENUM_END=14, /*  | */
} GPI_MEDIA_PLAY_STATE;
#endif

/** @brief Play Mode */
#ifndef HAVE_ENUM_GPI_MEDIA_MODE
#define HAVE_ENUM_GPI_MEDIA_MODE
typedef enum GPI_MEDIA_MODE
{
   GPI_MEDIA_MODE_ONCE=10, /* Once | */
   GPI_MEDIA_MODE_OCYCLE=11, /* Once cycle | */
   GPI_MEDIA_MODE_LIST=12, /* List | */
   GPI_MEDIA_MODE_LCYCLE=13, /* List Ocycle | */
   GPI_MEDIA_MODE_RANDOM=14, /* Random | */
   GPI_MEDIA_MODE_ENUM_END=15, /*  | */
} GPI_MEDIA_MODE;
#endif

/** @brief Channel */
#ifndef HAVE_ENUM_GPI_MEDIA_CHANNEL
#define HAVE_ENUM_GPI_MEDIA_CHANNEL
typedef enum GPI_MEDIA_CHANNEL
{
   GPI_MEDIA_CHANNEL_MUSIC=0, /* Background Music | */
   GPI_MEDIA_CHANNEL_RECORD=1, /* Record | */
   GPI_MEDIA_CHANNEL_VOICE=2, /* Real-time Record | */
   GPI_MEDIA_CHANNEL_TTS=3, /* TTS | */
   GPI_MEDIA_CHANNEL_BUFF=4, /* Cache File | */
   GPI_MEDIA_CHANNEL_ENUM_END=5, /*  | */
} GPI_MEDIA_CHANNEL;
#endif

/** @brief Stream Action/Control */
#ifndef HAVE_ENUM_GPI_STREAM_CONTROL
#define HAVE_ENUM_GPI_STREAM_CONTROL
typedef enum GPI_STREAM_CONTROL
{
   GPI_STREAM_CONTROL_UPLOAD_START=10, /* Upload Start | */
   GPI_STREAM_CONTROL_UPLOAD_STOP=11, /* Upload Stop | */
   GPI_STREAM_CONTROL_REALTIME_START=12, /* Real-time Start | */
   GPI_STREAM_CONTROL_REALTIME_STOP=13, /* Real-time Stop | */
   GPI_STREAM_CONTROL_ENUM_END=14, /*  | */
} GPI_STREAM_CONTROL;
#endif

/** @brief Stream Encode Type */
#ifndef HAVE_ENUM_GPI_STREAM_ENCODE_TYPE
#define HAVE_ENUM_GPI_STREAM_ENCODE_TYPE
typedef enum GPI_STREAM_ENCODE_TYPE
{
   GPI_STREAM_ENCODE_TYPE_PCM=0, /* PCM | */
   GPI_STREAM_ENCODE_TYPE_MP3=1, /* MP3 | */
   GPI_STREAM_ENCODE_TYPE_ALAW=2, /* PCM_ALAW | */
   GPI_STREAM_ENCODE_TYPE_ULAW=3, /* PCM_ULAW | */
   GPI_STREAM_ENCODE_TYPE_ENUM_END=4, /*  | */
} GPI_STREAM_ENCODE_TYPE;
#endif

/** @brief Command Result */
#ifndef HAVE_ENUM_GPI_CMD_RESULT
#define HAVE_ENUM_GPI_CMD_RESULT
typedef enum GPI_CMD_RESULT
{
   GPI_CMD_RESULT_OK=0, /* Ok | */
   GPI_CMD_RESULT_FAIL=1, /* Fail | */
   GPI_CMD_RESULT_BUSY=3, /* Busy | */
   GPI_CMD_RESULT_ENUM_END=4, /*  | */
} GPI_CMD_RESULT;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_cmd_get_device_model.h"
#include "./mavlink_msg_ack_device_model.h"
#include "./mavlink_msg_cmd_get_device_info.h"
#include "./mavlink_msg_ack_device_info.h"
#include "./mavlink_msg_cmd_get_set_voltage.h"
#include "./mavlink_msg_cmd_ack_voltage.h"
#include "./mavlink_msg_cmd_set_custom_string.h"
#include "./mavlink_msg_cmd_query_sys_state.h"
#include "./mavlink_msg_ack_sys_state.h"
#include "./mavlink_msg_cmd_set_light_switch.h"
#include "./mavlink_msg_cmd_set_light_brightness.h"
#include "./mavlink_msg_cmd_set_light_flash.h"
#include "./mavlink_msg_cmd_set_light_zoom.h"
#include "./mavlink_msg_cmd_get_temperature.h"
#include "./mavlink_msg_cmd_set_gimbal_att.h"
#include "./mavlink_msg_cmd_set_gimbal_att_tunning.h"
#include "./mavlink_msg_cmd_save_gimbal_tunning.h"
#include "./mavlink_msg_cmd_start_gimbal_calibrate.h"
#include "./mavlink_msg_cmd_set_takeoff_state.h"
#include "./mavlink_msg_cmd_update_vehicle_state.h"
#include "./mavlink_msg_cmd_tts_text_expand.h"
#include "./mavlink_msg_cmd_tts_text.h"
#include "./mavlink_msg_cmd_tts_state.h"
#include "./mavlink_msg_cmd_tts_cycle.h"
#include "./mavlink_msg_cmd_music_name.h"
#include "./mavlink_msg_cmd_music_state.h"
#include "./mavlink_msg_cmd_music_cycle.h"
#include "./mavlink_msg_cmd_background_music_volume.h"
#include "./mavlink_msg_cmd_record_name.h"
#include "./mavlink_msg_cmd_record_state.h"
#include "./mavlink_msg_cmd_record_cycle.h"
#include "./mavlink_msg_cmd_stream_function.h"
#include "./mavlink_msg_cmd_stream_up_data.h"
#include "./mavlink_msg_cmd_buffer_media_state.h"
#include "./mavlink_msg_cmd_read_file_list.h"
#include "./mavlink_msg_cmd_modify_file_name.h"
#include "./mavlink_msg_cmd_delete_file.h"
#include "./mavlink_msg_cmd_save_file.h"
#include "./mavlink_msg_cmd_file_sort_top.h"
#include "./mavlink_msg_cmd_delete_all_file.h"
#include "./mavlink_msg_cmd_copy_file_from_record_to_bgm.h"
#include "./mavlink_msg_cmd_camera_channel_set.h"
#include "./mavlink_msg_cmd_servo_angle.h"
#include "./mavlink_msg_cmd_set_system_volume.h"
#include "./mavlink_msg_th4_current_state.h"
#include "./mavlink_msg_th4_error_state.h"
#include "./mavlink_msg_th4_execution_throw.h"
#include "./mavlink_msg_th4_lock.h"
#include "./mavlink_msg_th4_all_down.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_CMD_GET_DEVICE_MODEL, MAVLINK_MESSAGE_INFO_ACK_DEVICE_MODEL, MAVLINK_MESSAGE_INFO_CMD_GET_DEVICE_INFO, MAVLINK_MESSAGE_INFO_ACK_DEVICE_INFO, MAVLINK_MESSAGE_INFO_CMD_GET_SET_VOLTAGE, MAVLINK_MESSAGE_INFO_CMD_ACK_VOLTAGE, MAVLINK_MESSAGE_INFO_CMD_SET_CUSTOM_STRING, MAVLINK_MESSAGE_INFO_CMD_QUERY_SYS_STATE, MAVLINK_MESSAGE_INFO_ACK_SYS_STATE, MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_SWITCH, MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_BRIGHTNESS, MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_FLASH, MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_ZOOM, MAVLINK_MESSAGE_INFO_CMD_GET_TEMPERATURE, MAVLINK_MESSAGE_INFO_CMD_SET_GIMBAL_ATT, MAVLINK_MESSAGE_INFO_CMD_SET_GIMBAL_ATT_TUNNING, MAVLINK_MESSAGE_INFO_CMD_SAVE_GIMBAL_TUNNING, MAVLINK_MESSAGE_INFO_CMD_START_GIMBAL_CALIBRATE, MAVLINK_MESSAGE_INFO_CMD_SET_TAKEOFF_STATE, MAVLINK_MESSAGE_INFO_CMD_UPDATE_VEHICLE_STATE, MAVLINK_MESSAGE_INFO_CMD_TTS_TEXT_EXPAND, MAVLINK_MESSAGE_INFO_CMD_TTS_TEXT, MAVLINK_MESSAGE_INFO_CMD_TTS_STATE, MAVLINK_MESSAGE_INFO_CMD_TTS_CYCLE, MAVLINK_MESSAGE_INFO_CMD_MUSIC_NAME, MAVLINK_MESSAGE_INFO_CMD_MUSIC_STATE, MAVLINK_MESSAGE_INFO_CMD_MUSIC_CYCLE, MAVLINK_MESSAGE_INFO_CMD_BACKGROUND_MUSIC_VOLUME, MAVLINK_MESSAGE_INFO_CMD_RECORD_NAME, MAVLINK_MESSAGE_INFO_CMD_RECORD_STATE, MAVLINK_MESSAGE_INFO_CMD_RECORD_CYCLE, MAVLINK_MESSAGE_INFO_CMD_STREAM_FUNCTION, MAVLINK_MESSAGE_INFO_CMD_STREAM_UP_DATA, MAVLINK_MESSAGE_INFO_CMD_BUFFER_MEDIA_STATE, MAVLINK_MESSAGE_INFO_CMD_READ_FILE_LIST, MAVLINK_MESSAGE_INFO_CMD_MODIFY_FILE_NAME, MAVLINK_MESSAGE_INFO_CMD_DELETE_FILE, MAVLINK_MESSAGE_INFO_CMD_SAVE_FILE, MAVLINK_MESSAGE_INFO_CMD_FILE_SORT_TOP, MAVLINK_MESSAGE_INFO_CMD_DELETE_ALL_FILE, MAVLINK_MESSAGE_INFO_CMD_COPY_FILE_FROM_RECORD_TO_BGM, MAVLINK_MESSAGE_INFO_CMD_CAMERA_CHANNEL_SET, MAVLINK_MESSAGE_INFO_CMD_SERVO_ANGLE, MAVLINK_MESSAGE_INFO_CMD_SET_SYSTEM_VOLUME, MAVLINK_MESSAGE_INFO_TH4_CURRENT_STATE, MAVLINK_MESSAGE_INFO_TH4_ERROR_STATE, MAVLINK_MESSAGE_INFO_TH4_EXECUTION_THROW, MAVLINK_MESSAGE_INFO_TH4_LOCK, MAVLINK_MESSAGE_INFO_TH4_ALL_DOWN}
# define MAVLINK_MESSAGE_NAMES {{ "ACK_DEVICE_INFO", 100003 }, { "ACK_DEVICE_MODEL", 100001 }, { "ACK_SYS_STATE", 100015 }, { "CMD_ACK_VOLTAGE", 100005 }, { "CMD_BACKGROUND_MUSIC_VOLUME", 100093 }, { "CMD_BUFFER_MEDIA_STATE", 100099 }, { "CMD_CAMERA_CHANNEL_SET", 100107 }, { "CMD_COPY_FILE_FROM_RECORD_TO_BGM", 100106 }, { "CMD_DELETE_ALL_FILE", 100105 }, { "CMD_DELETE_FILE", 100102 }, { "CMD_FILE_SORT_TOP", 100104 }, { "CMD_GET_DEVICE_INFO", 100002 }, { "CMD_GET_DEVICE_MODEL", 100000 }, { "CMD_GET_SET_VOLTAGE", 100004 }, { "CMD_GET_TEMPERATURE", 100020 }, { "CMD_MODIFY_FILE_NAME", 100101 }, { "CMD_MUSIC_CYCLE", 100092 }, { "CMD_MUSIC_NAME", 100090 }, { "CMD_MUSIC_STATE", 100091 }, { "CMD_QUERY_SYS_STATE", 100014 }, { "CMD_READ_FILE_LIST", 100100 }, { "CMD_RECORD_CYCLE", 100096 }, { "CMD_RECORD_NAME", 100094 }, { "CMD_RECORD_STATE", 100095 }, { "CMD_SAVE_FILE", 100103 }, { "CMD_SAVE_GIMBAL_TUNNING", 100034 }, { "CMD_SERVO_ANGLE", 100112 }, { "CMD_SET_CUSTOM_STRING", 100006 }, { "CMD_SET_GIMBAL_ATT", 100032 }, { "CMD_SET_GIMBAL_ATT_TUNNING", 100033 }, { "CMD_SET_LIGHT_BRIGHTNESS", 100017 }, { "CMD_SET_LIGHT_FLASH", 100018 }, { "CMD_SET_LIGHT_SWITCH", 100016 }, { "CMD_SET_LIGHT_ZOOM", 100019 }, { "CMD_SET_SYSTEM_VOLUME", 100113 }, { "CMD_SET_TAKEOFF_STATE", 100049 }, { "CMD_START_GIMBAL_CALIBRATE", 100035 }, { "CMD_STREAM_FUNCTION", 100097 }, { "CMD_STREAM_UP_DATA", 100098 }, { "CMD_TTS_CYCLE", 100087 }, { "CMD_TTS_STATE", 100086 }, { "CMD_TTS_TEXT", 100085 }, { "CMD_TTS_TEXT_EXPAND", 100084 }, { "CMD_UPDATE_VEHICLE_STATE", 100050 }, { "TH4_ALL_DOWN", 100260 }, { "TH4_CURRENT_STATE", 100256 }, { "TH4_ERROR_STATE", 100257 }, { "TH4_EXECUTION_THROW", 100258 }, { "TH4_LOCK", 100259 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_CZI_GPI_H
