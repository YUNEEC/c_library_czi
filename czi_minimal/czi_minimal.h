/** @file
 *  @brief MAVLink comm protocol generated from czi_minimal.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_CZI_MINIMAL_H
#define MAVLINK_CZI_MINIMAL_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_CZI_MINIMAL.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 1

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 50, 9, 9, 0, 0, 0}, {30, 39, 28, 28, 0, 0, 0}, {76, 152, 33, 33, 3, 30, 31}, {77, 143, 3, 10, 3, 8, 9}, {265, 26, 16, 20, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_CZI_MINIMAL

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_heartbeat.h"
#include "./mavlink_msg_attitude.h"
#include "./mavlink_msg_command_long.h"
#include "./mavlink_msg_command_ack.h"
#include "./mavlink_msg_mount_orientation.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 1

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_ATTITUDE, MAVLINK_MESSAGE_INFO_COMMAND_LONG, MAVLINK_MESSAGE_INFO_COMMAND_ACK, MAVLINK_MESSAGE_INFO_MOUNT_ORIENTATION}
# define MAVLINK_MESSAGE_NAMES {{ "ATTITUDE", 30 }, { "COMMAND_ACK", 77 }, { "COMMAND_LONG", 76 }, { "HEARTBEAT", 0 }, { "MOUNT_ORIENTATION", 265 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_CZI_MINIMAL_H
