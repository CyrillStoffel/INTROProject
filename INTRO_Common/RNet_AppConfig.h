/**
 * \file
 * \brief This is a configuration file for the RNet stack
 * \author (c) 2013 Erich Styger, http://mcuoneclipse.com/
 * \note MIT License (http://opensource.org/licenses/mit-license.html)
 *
 * Here the stack can be configured using macros.
 */

#ifndef __RNET_APP_CONFIG__
#define __RNET_APP_CONFIG__

#include "Platform.h"
#if PL_CONFIG_HAS_RADIO
/*! type ID's for application messages */
typedef enum {
  RAPP_MSG_TYPE_STDIN = 0x00,
  RAPP_MSG_TYPE_STDOUT = 0x01,
  RAPP_MSG_TYPE_STDERR = 0x02,
  RAPP_MSG_TYPE_ACCEL = 0x03,
  RAPP_MSG_TYPE_DATA = 0x04,
  RAPP_MSG_TYPE_JOYSTICK_XY = 0x05,
  RAPP_MSG_TYPE_JOYSTICK_BTN = 0x54,/* Joystick button message (data is one byte: 'A', 'B', ... 'F' and 'K') */
  RAPP_MSG_TYPE_FORWARD = 0x55,
  RAPP_MSG_TYPE_BACKWARD = 0x56,
  RAPP_MSG_TYPE_STOP = 0x57,
  RAPP_MSG_TYPE_LEFT = 0x58,
  RAPP_MSG_TYPE_RIGHT = 0x59,
  RAPP_MSG_TYPE_LEFTLONG = 0x60,
  RAPP_MSG_TYPE_RIGHTLONG = 0x61,
  RAPP_MSG_TYPE_TEST = 0x62,
  RAPP_MSG_TYPE_START = 0x63,
  RAPP_MSG_TYPE_LAPPOINT = 0xAC,
  /* \todo extend with your own messages */
} RAPP_MSG_Type;

#endif /* PL_CONFIG_HAS_RADIO */

#endif /* __RNET_APP_CONFIG__ */
