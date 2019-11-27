
/****************************************************************************
 *
 *  ARICENT -
 *
 *  Copyright (c) Aricent.
 *
 ****************************************************************************
 *
 *  $Id: lteTime.h
 *
 ****************************************************************************
 *
 *  File Description : Header file for time functions wrapper APIs 
 *
 ****************************************************************************/

#ifndef __LTETIME_H__
#define __LTETIME_H__

/****************************************************************************
 * Project Includes
 ****************************************************************************/

#include    "ylib.h"
#include    "lteTypes.h"

/****************************************************************************
 * Exported Types
 ****************************************************************************/
typedef YTIME_T LTE_TIME_T;

/****************************************************************************
* Function Name  : lteGetSystemTime
* Inputs         : None
* Outputs        : LTE_TIME_T - time structure
* Returns        : LTE_TIME_T - current system time
* Description    : This function returns current system time
****************************************************************************/
/* + SPR 17439 */
LTE_TIME_T lteGetSystemTime(void);
/* - SPR 17439 */
/****************************************************************************
* Function Name  : lteTimeDiff
* Inputs         : const LTE_TIME_T* ptm_one - pointer to time structure
*                  const LTE_TIME_T* ptm_two - pointer to time structure
* Outputs        : 
* Returns        : SInt32 - difference between two timestamps (milliseconds)
* Description    : This function calculates difference between two timestamps
****************************************************************************/
SInt32 lteTimeDiff(const LTE_TIME_T* ptm_one, const LTE_TIME_T* ptm_two);

/****************************************************************************
* Function Name  : lteTimeAdd
* Inputs         : const LTE_TIME_T* ptm_one - pointer to time structure
*                  SInt32 msec - time in milliseconds
* Outputs        : 
* Returns        : LTE_TIME_T - new time value
* Description    : This function add millisecond time value to LTE_TIME_T
*                   structure and returns new time structure
****************************************************************************/
LTE_TIME_T lteTimeAdd(const LTE_TIME_T* ptm, SInt32 msec);

#endif