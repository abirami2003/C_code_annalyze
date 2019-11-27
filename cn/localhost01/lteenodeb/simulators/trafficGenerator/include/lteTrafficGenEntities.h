/****************************************************************************
 *
 *  ARICENT -
 *
 *  Copyright (c) Aricent.
 *
 ****************************************************************************
 *
 *  $Id: lteTrafficGenEntities.h,v 1.2 2010/02/18 07:36:21 gur19479 Exp $
 *
 ****************************************************************************
 *
 *  File Description :  
 *
 ****************************************************************************
 *
 * Revision Details
 * ----------------
 *
 * $Log: lteTrafficGenEntities.h,v $
 * Revision 1.2  2010/02/18 07:36:21  gur19479
 * updated for thread binding
 *
 * Revision 1.1.2.3.2.1  2009/12/05 13:03:25  gur19479
 * updated for thread binding
 *
 * Revision 1.1.2.3  2009/07/14 14:08:23  gur19836
 * CR Comments Disposed
 *
 * Revision 1.1.2.2  2009/07/13 07:54:52  gur19479
 * updated for traffic gen
 *
 * Revision 1.1.2.1  2009/07/12 09:37:31  gur19479
 * updated for traffic generator
 *
 *
 *
 ****************************************************************************/

#ifndef INCLUDED_LTE_TRAFFIC_GEN_ENTITIES_H
#define INCLUDED_LTE_TRAFFIC_GEN_ENTITIES_H

/****************************************************************************
 * Project Includes
 ****************************************************************************/

#include "lteTrafficGenDatabase.h"
#include "lteTrafficGenExtInterface.h"
#include <pthread.h>
#include <sched.h>

/****************************************************************************
 * Exported Includes
 ****************************************************************************/

/****************************************************************************
 * Exported Definitions
 ****************************************************************************/

/****************************************************************************
 * Exported Types
 ****************************************************************************/

/****************************************************************************
 * Exported Constants
 ****************************************************************************/

/****************************************************************************
 * Exported Variables
 ****************************************************************************/

/****************************************************************************
 * Exported Functions
 ****************************************************************************/
UInt16 createTrafficGenEntity(void);

#endif  /* INCLUDED_LTE_TRAFFIC_GEN_ENTITIES_H */