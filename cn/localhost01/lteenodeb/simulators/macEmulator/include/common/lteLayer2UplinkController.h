/****************************************************************************
 *
 *  ARICENT -
 *
 *  Copyright (c) Aricent.
 *
 ****************************************************************************
 *
 *  $Id: lteLayer2UplinkController.h,v 1.1.4.1 2010/09/21 15:53:18 gur20491 Exp $
 *
 ****************************************************************************
 *
 *  File Description : This file contain information of the structures 
 *			and functions used in ltelayer2ControllerThread.c
 *
 ****************************************************************************
 *
 * Revision Details
 * ----------------
 *
 * $Log: lteLayer2UplinkController.h,v $
 * Revision 1.1.4.1  2010/09/21 15:53:18  gur20491
 * FAPI changes
 *
 * Revision 1.1.2.1  2010/09/07 11:21:07  gur20439
 * new files added for FAPI changes
 *
 * Revision 1.1.1.1  2010/02/11 04:51:22  cm_intel
 * eNB framework for intel
 *
 * Revision 1.2  2009/07/14 14:44:58  gur20439
 * rrc interface code.
 *
 * Revision 1.1  2009/03/30 10:20:20  gur19836
 * Initial Version
 *
 * Revision 1.7  2009/01/20 07:53:52  gur19836
 * Changes done for interface with RRC Layer
 *
 * Revision 1.6  2008/12/24 09:04:21  gur12905
 * New function prototype added initDeMuxManager
 *
 * Revision 1.5  2008/12/19 10:31:25  gur19836
 * Review Comments incorporated for Phase 2
 *
 * Revision 1.4  2008/12/18 13:37:17  gur18569
 * "shifted delCnfFromLayerT to lteLayer2RRCInterface.h"
 *
 * Revision 1.3  2008/12/11 04:54:18  gur19836
 * Headers updated
 *
 * Revision 1.2  2008/12/10 10:37:03  gur12905
 * Updated for transmitter thread creation
 *
 * Revision 1.1  2008/12/08 12:43:50  gur12905
 * INitial Version
 *
 *
 *
 ****************************************************************************/

#ifndef _LTE_MACCORE_UPLINK_CONTROLLER_H
#define _LTE_MACCORE_UPLINK_CONTROLLER_H

/****************************************************************************
 * Project Includes
 ****************************************************************************/
#include "lteLayer2UplinkUEContext.h"

/****************************************************************************
 * Exported Includes
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

MacRetType addULUELogicalChannel (ueContextForUplink* newUEContext_p,
        UInt8 logicalChCount,
        ulLogicalChannelInfo* logicalChInfo_p,
        dynamicUEContext *dynUEContext_p);

MacRetType reconfigureMACULUEEntity (UInt16 ueIdx, 
                                     ueContextForUplink *ueContextInfo_p,
                                     UInt32 logicalChCount,
                        ulLogicalChannelInfo *lcInfo_p,
                        UInt8 cellIndex);

/* SPR 11445 Changes Start */
MacRetType deleteMACULUEEntity(UInt16 idx, UInt16 transactionId, UInt8 cellIndex);
/* SPR 11445 Changes End */

MacRetType createMACULUEEntity(UInt16 idx, UInt8 lchCount,
                ueContextForUplink *ueContextInfo_p,
                UInt8 cellIndex);

MacRetType validateCodingRate(UInt16 modScheme, UInt32 codingRate);


MacRetType deleteULUELogicalChannel(ueContextForUplink *ueContext_p,
                UInt8 ueLCId);

MacRetType reconfigULUELogicalChannel(ueContextForUplink *ueContext_p,
                ulLogicalChannelInfo* logicalChInfo_p);

#endif	/*_LTE_MACCORE_UPLINK_CONTROLLER_H*/
