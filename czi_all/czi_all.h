/** @file
 *  @brief MAVLink comm protocol generated from czi_all.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_CZI_ALL_H
#define MAVLINK_CZI_ALL_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_CZI_ALL.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 50, 9, 9, 0, 0, 0}, {76, 152, 33, 33, 3, 30, 31}, {77, 143, 3, 10, 3, 8, 9}, {265, 26, 16, 20, 0, 0, 0}, {100000, 224, 1, 1, 0, 0, 0}, {100001, 158, 255, 255, 0, 0, 0}, {100002, 42, 1, 1, 0, 0, 0}, {100003, 240, 255, 255, 0, 0, 0}, {100004, 212, 1, 1, 0, 0, 0}, {100005, 176, 1, 1, 0, 0, 0}, {100006, 133, 128, 128, 0, 0, 0}, {100014, 210, 4, 4, 0, 0, 0}, {100015, 210, 205, 205, 0, 0, 0}, {100016, 94, 1, 1, 0, 0, 0}, {100017, 237, 1, 1, 0, 0, 0}, {100018, 16, 1, 1, 0, 0, 0}, {100019, 192, 1, 1, 0, 0, 0}, {100020, 105, 2, 2, 0, 0, 0}, {100032, 172, 4, 4, 0, 0, 0}, {100033, 72, 6, 6, 0, 0, 0}, {100034, 157, 1, 1, 0, 0, 0}, {100035, 145, 1, 1, 0, 0, 0}, {100049, 135, 1, 1, 0, 0, 0}, {100050, 145, 10, 10, 0, 0, 0}, {100084, 174, 253, 253, 0, 0, 0}, {100085, 253, 251, 251, 0, 0, 0}, {100086, 251, 2, 2, 0, 0, 0}, {100087, 85, 2, 2, 0, 0, 0}, {100090, 246, 101, 101, 0, 0, 0}, {100091, 203, 2, 2, 0, 0, 0}, {100092, 197, 2, 2, 0, 0, 0}, {100093, 145, 2, 2, 0, 0, 0}, {100094, 224, 101, 101, 0, 0, 0}, {100095, 132, 2, 2, 0, 0, 0}, {100096, 191, 2, 2, 0, 0, 0}, {100097, 109, 3, 3, 0, 0, 0}, {100098, 14, 251, 251, 0, 0, 0}, {100099, 211, 2, 2, 0, 0, 0}, {100100, 250, 103, 103, 0, 0, 0}, {100101, 160, 202, 202, 0, 0, 0}, {100102, 254, 102, 102, 0, 0, 0}, {100103, 49, 102, 102, 0, 0, 0}, {100104, 109, 102, 102, 0, 0, 0}, {100105, 218, 2, 2, 0, 0, 0}, {100106, 111, 102, 102, 0, 0, 0}, {100107, 34, 2, 2, 0, 0, 0}, {100112, 33, 2, 2, 0, 0, 0}, {100113, 144, 2, 2, 0, 0, 0}, {100256, 178, 2, 2, 0, 0, 0}, {100257, 166, 1, 1, 0, 0, 0}, {100258, 167, 1, 1, 0, 0, 0}, {100259, 120, 1, 1, 0, 0, 0}, {100260, 110, 1, 1, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_CZI_ALL

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS


// base include
#include "../czi_minimal/czi_minimal.h"
#include "../czi_gpi/czi_gpi.h"

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_COMMAND_LONG, MAVLINK_MESSAGE_INFO_COMMAND_ACK, MAVLINK_MESSAGE_INFO_MOUNT_ORIENTATION, MAVLINK_MESSAGE_INFO_CMD_GET_DEVICE_MODEL, MAVLINK_MESSAGE_INFO_ACK_DEVICE_MODEL, MAVLINK_MESSAGE_INFO_CMD_GET_DEVICE_INFO, MAVLINK_MESSAGE_INFO_ACK_DEVICE_INFO, MAVLINK_MESSAGE_INFO_CMD_GET_SET_VOLTAGE, MAVLINK_MESSAGE_INFO_CMD_ACK_VOLTAGE, MAVLINK_MESSAGE_INFO_CMD_SET_CUSTOM_STRING, MAVLINK_MESSAGE_INFO_CMD_QUERY_SYS_STATE, MAVLINK_MESSAGE_INFO_ACK_SYS_STATE, MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_SWITCH, MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_BRIGHTNESS, MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_FLASH, MAVLINK_MESSAGE_INFO_CMD_SET_LIGHT_ZOOM, MAVLINK_MESSAGE_INFO_CMD_GET_TEMPERATURE, MAVLINK_MESSAGE_INFO_CMD_SET_GIMBAL_ATT, MAVLINK_MESSAGE_INFO_CMD_SET_GIMBAL_ATT_TUNNING, MAVLINK_MESSAGE_INFO_CMD_SAVE_GIMBAL_TUNNING, MAVLINK_MESSAGE_INFO_CMD_START_GIMBAL_CALIBRATE, MAVLINK_MESSAGE_INFO_CMD_SET_TAKEOFF_STATE, MAVLINK_MESSAGE_INFO_CMD_UPDATE_VEHICLE_STATE, MAVLINK_MESSAGE_INFO_CMD_TTS_TEXT_EXPAND, MAVLINK_MESSAGE_INFO_CMD_TTS_TEXT, MAVLINK_MESSAGE_INFO_CMD_TTS_STATE, MAVLINK_MESSAGE_INFO_CMD_TTS_CYCLE, MAVLINK_MESSAGE_INFO_CMD_MUSIC_NAME, MAVLINK_MESSAGE_INFO_CMD_MUSIC_STATE, MAVLINK_MESSAGE_INFO_CMD_MUSIC_CYCLE, MAVLINK_MESSAGE_INFO_CMD_BACKGROUND_MUSIC_VOLUME, MAVLINK_MESSAGE_INFO_CMD_RECORD_NAME, MAVLINK_MESSAGE_INFO_CMD_RECORD_STATE, MAVLINK_MESSAGE_INFO_CMD_RECORD_CYCLE, MAVLINK_MESSAGE_INFO_CMD_STREAM_FUNCTION, MAVLINK_MESSAGE_INFO_CMD_STREAM_UP_DATA, MAVLINK_MESSAGE_INFO_CMD_BUFFER_MEDIA_STATE, MAVLINK_MESSAGE_INFO_CMD_READ_FILE_LIST, MAVLINK_MESSAGE_INFO_CMD_MODIFY_FILE_NAME, MAVLINK_MESSAGE_INFO_CMD_DELETE_FILE, MAVLINK_MESSAGE_INFO_CMD_SAVE_FILE, MAVLINK_MESSAGE_INFO_CMD_FILE_SORT_TOP, MAVLINK_MESSAGE_INFO_CMD_DELETE_ALL_FILE, MAVLINK_MESSAGE_INFO_CMD_COPY_FILE_FROM_RECORD_TO_BGM, MAVLINK_MESSAGE_INFO_CMD_CAMERA_CHANNEL_SET, MAVLINK_MESSAGE_INFO_CMD_SERVO_ANGLE, MAVLINK_MESSAGE_INFO_CMD_SET_SYSTEM_VOLUME, MAVLINK_MESSAGE_INFO_TH4_CURRENT_STATE, MAVLINK_MESSAGE_INFO_TH4_ERROR_STATE, MAVLINK_MESSAGE_INFO_TH4_EXECUTION_THROW, MAVLINK_MESSAGE_INFO_TH4_LOCK, MAVLINK_MESSAGE_INFO_TH4_ALL_DOWN}
# define MAVLINK_MESSAGE_NAMES {{ "ACK_DEVICE_INFO", 100003 }, { "ACK_DEVICE_MODEL", 100001 }, { "ACK_SYS_STATE", 100015 }, { "CMD_ACK_VOLTAGE", 100005 }, { "CMD_BACKGROUND_MUSIC_VOLUME", 100093 }, { "CMD_BUFFER_MEDIA_STATE", 100099 }, { "CMD_CAMERA_CHANNEL_SET", 100107 }, { "CMD_COPY_FILE_FROM_RECORD_TO_BGM", 100106 }, { "CMD_DELETE_ALL_FILE", 100105 }, { "CMD_DELETE_FILE", 100102 }, { "CMD_FILE_SORT_TOP", 100104 }, { "CMD_GET_DEVICE_INFO", 100002 }, { "CMD_GET_DEVICE_MODEL", 100000 }, { "CMD_GET_SET_VOLTAGE", 100004 }, { "CMD_GET_TEMPERATURE", 100020 }, { "CMD_MODIFY_FILE_NAME", 100101 }, { "CMD_MUSIC_CYCLE", 100092 }, { "CMD_MUSIC_NAME", 100090 }, { "CMD_MUSIC_STATE", 100091 }, { "CMD_QUERY_SYS_STATE", 100014 }, { "CMD_READ_FILE_LIST", 100100 }, { "CMD_RECORD_CYCLE", 100096 }, { "CMD_RECORD_NAME", 100094 }, { "CMD_RECORD_STATE", 100095 }, { "CMD_SAVE_FILE", 100103 }, { "CMD_SAVE_GIMBAL_TUNNING", 100034 }, { "CMD_SERVO_ANGLE", 100112 }, { "CMD_SET_CUSTOM_STRING", 100006 }, { "CMD_SET_GIMBAL_ATT", 100032 }, { "CMD_SET_GIMBAL_ATT_TUNNING", 100033 }, { "CMD_SET_LIGHT_BRIGHTNESS", 100017 }, { "CMD_SET_LIGHT_FLASH", 100018 }, { "CMD_SET_LIGHT_SWITCH", 100016 }, { "CMD_SET_LIGHT_ZOOM", 100019 }, { "CMD_SET_SYSTEM_VOLUME", 100113 }, { "CMD_SET_TAKEOFF_STATE", 100049 }, { "CMD_START_GIMBAL_CALIBRATE", 100035 }, { "CMD_STREAM_FUNCTION", 100097 }, { "CMD_STREAM_UP_DATA", 100098 }, { "CMD_TTS_CYCLE", 100087 }, { "CMD_TTS_STATE", 100086 }, { "CMD_TTS_TEXT", 100085 }, { "CMD_TTS_TEXT_EXPAND", 100084 }, { "CMD_UPDATE_VEHICLE_STATE", 100050 }, { "COMMAND_ACK", 77 }, { "COMMAND_LONG", 76 }, { "HEARTBEAT", 0 }, { "MOUNT_ORIENTATION", 265 }, { "TH4_ALL_DOWN", 100260 }, { "TH4_CURRENT_STATE", 100256 }, { "TH4_ERROR_STATE", 100257 }, { "TH4_EXECUTION_THROW", 100258 }, { "TH4_LOCK", 100259 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_CZI_ALL_H
