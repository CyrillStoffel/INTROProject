/**
 * \file
 * \brief Main application interface
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This provides the main application entry point.
 */

#ifndef SOURCES_FS2016_COMMON_APPLICATION_H_
#define SOURCES_FS2016_COMMON_APPLICATION_H_

#include "Platform.h"

#if PL_CONFIG_HAS_EVENTS
#include "Event.h"

void APP_EventHandler(EVNT_Handle event);
#endif

typedef enum{
	STOP = 0,
	MANUAL_DRIVE,
	TURN,
	LINE_FOLLOW
} State_Line;


static bool stopTurn(void);

void startWithButton(void);

static void LineTestatTask(void *param);

void InitTestat(void);

void APP_Start(void);

#endif /* SOURCES_FS2016_COMMON_APPLICATION_H_ */
