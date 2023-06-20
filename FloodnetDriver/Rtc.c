/*
 * Rtc.c
 *
 *  Created on: May 8, 2023
 *      Author: adinor
 */

#include "Rtc.h"

char Rtctime[10];
char Rtcdate[10];
char RtcDateTime[40];


/**
  * @brief  Display the current time.
  * @param  showtime : pointer to buffer
  * @retval None
  */
void RTC_TimeShow(char *showtime)
{

  RTC_TimeTypeDef stimestructureget;
  /* Get the RTC current Time */
  HAL_RTC_GetTime(Get_RtcHandle(), &stimestructureget, RTC_FORMAT_BIN);

  /* Display time Format : hh:mm:ss */
  sprintf((char *)showtime, "%02d:%02d:%02d", stimestructureget.Hours, stimestructureget.Minutes, stimestructureget.Seconds);
}

/**
  * @brief  Display the current time.
  * @param  showtime : pointer to buffer
  * @retval None
  */
void RTC_DateShow(char *showdate)
{
  RTC_DateTypeDef sdatestructureget;

  /* Get the RTC current Date */
  HAL_RTC_GetDate(Get_RtcHandle(), &sdatestructureget, RTC_FORMAT_BIN);
  /* Display date Format: mm-dd-yy */
  sprintf((char *)showdate, "%02d:%02d:%02d", sdatestructureget.Date, sdatestructureget.Month, 2000 + sdatestructureget.Year);
}



