/** @file
 *    @brief MAVLink comm protocol testsuite generated from czi_all.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef CZI_ALL_TESTSUITE_H
#define CZI_ALL_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_czi_minimal(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_czi_gpi(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_czi_all(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_czi_minimal(system_id, component_id, last_msg);
    mavlink_test_czi_gpi(system_id, component_id, last_msg);
    mavlink_test_czi_all(system_id, component_id, last_msg);
}
#endif

#include "../czi_minimal/testsuite.h"
#include "../czi_gpi/testsuite.h"



static void mavlink_test_czi_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // CZI_ALL_TESTSUITE_H
