/****************************************************************************
 *
 *  ARICENT -
 *
 *  Copyright (c) Aricent.
 *
 ****************************************************************************
 *
 *  $Id: lteLayer2UplinkScheduler.h,v 1.1.1.1 2010/02/11 04:51:22 cm_intel Exp $
 *
 ****************************************************************************
 *
 *  File Description :It contains macro declarations , function declarations , 
 *			sturucture declarations
 *             		required by lteLayer2UplinkScheduler.c 
 *
 ****************************************************************************
 *
 * Revision Details
 * ----------------
 *
 * $Log: lteLayer2UplinkScheduler.h,v $
 * Revision 1.1.1.1  2010/02/11 04:51:22  cm_intel
 * eNB framework for intel
 *
 * Revision 1.2  2009/07/14 14:45:05  gur20439
 * rrc interface code.
 *
 * Revision 1.1  2009/03/30 10:20:31  gur19836
 * Initial Version
 *
 * Revision 1.19  2009/02/24 04:36:19  gur11912
 * Optimization Changes
 *
 * Revision 1.18  2009/01/29 13:27:17  gur20052
 * Added Changed related to the Stats MAnager of Uplink
 *
 * Revision 1.17  2009/01/27 17:11:59  gur19413
 * UT_TESTING replace with PHYSIM_TESTING
 *
 * Revision 1.16  2009/01/27 07:13:32  gur20052
 * Incorporated Vandana's Comments
 *
 * Revision 1.15  2009/01/17 20:28:17  gur11447
 * Changes for 1 msec
 *
 * Revision 1.14  2009/01/15 05:15:31  gur20052
 * Review comments of vandana are incorporated
 *
 * Revision 1.13  2009/01/08 13:15:16  gur20052
 * UT Defects are incorporated
 *
 * Revision 1.12  2009/01/07 08:58:08  gur20052
 * UT Defects are incorporated
 *
 * Revision 1.11  2008/12/31 06:43:36  gur20052
 * changes for AllocTBSize are added
 *
 * Revision 1.10  2008/12/29 05:36:56  gur20052
 * changes incorporated for RA Queue handling
 *
 * Revision 1.9  2008/12/26 07:04:31  gur20052
 * change in RarToDlScheduler pointer
 *
 * Revision 1.8  2008/12/26 04:27:16  gur20052
 * changes in raQToDlScheduler prototype
 *
 * Revision 1.7  2008/12/23 09:20:13  gur20052
 * Phase2 Comments are incorporated
 *
 * Revision 1.6  2008/12/23 07:48:27  gur20052
 * Changes of SR implementation incorporated
 *
 * Revision 1.5  2008/12/19 07:54:26  gur12905
 * uplinkContainer changed to UplinkContainer
 *
 * Revision 1.4  2008/12/19 07:48:18  gur12905
 * rarToDlScheduler changed to RarToDlScheduler
 *
 * Revision 1.3  2008/12/19 07:13:00  gur20052
 * Review Comments for Phase 2 Incorporated
 *
 * Revision 1.2  2008/12/09 11:39:54  gur19836
 * Updated during linking
 *
 * Revision 1.1  2008/12/08 12:54:29  gur12905
 * Initial Version phase -2
 *
 *
 *
 ****************************************************************************/

#ifndef _LTE_MACCORE_UPLINK_SCHEDULER_H_
#define _LTE_MACCORE_UPLINK_SCHEDULER_H_

/****************************************************************************
 * Project Includes
 ****************************************************************************/
#include "lteLayer2UplinkUEContext.h"
#include "lteLayer2UplinkContainer.h"
#include "lteLayer2UplinkSchedulerAlgorithm.h"
#include "lteLayer2UplinkResourceManager.h"


/****************************************************************************
 * Exported Includes
 ****************************************************************************/



/****************************************************************************
 * Exported Definitions
 ****************************************************************************/
#if 0
#define MAX_RB_IN_UL 50 /*subject to change... TBD*/
#define RA_EXPIRY_TIMER 999999

/****************************************************************************
 * Exported Types
 ****************************************************************************/


/*structue for sending RAR to DL scheduler*/
typedef struct RarToDlSchedulerT{
		UInt8*	macPduDataPtr;	/*pointer to RAR message to be sent to UE*/
		UInt32	ttiCounter;	/*tick in which dl scheduler will send this PDU to UE*/
		UInt32	datalen;	/*length of the data */
		UInt8	mcs;	/*modulation and coding scheme value to be used in downlink*/
		UInt8	rarnti;	/*RNTI value to be used in downlink*/
		UInt8	acknowledgementReqd;	/*whether ACK of message sent is reqd or not*/
                UInt8   nbRBs;
}RarToDlScheduler;

/*struct for RAR_QUEUE to DL Sched */
typedef struct rarQueueNodeToDlSchedulerT{
                LTE_SNODE               rarNodeAnchor;
                RarToDlScheduler *      rarToDl_p;
} rarQueueNodeToDlScheduler ;

LTE_SQUEUE rarToDLQueue_g;

/*struct for sending -ve response in case RAR is not delivered to PHY*/
typedef struct rarNegativeToUlSchedulerT{
                LTE_SNODE rarNegativeNodeAnchor;
		UInt32  ttiCounter;     /*tick from which UL resources will be allocated */
		UInt16  raRnti;        /*RNTI value to be used in for resource de-allocation*/
}rarNegativeToUlScheduler;

LTE_SQUEUE rarNegativeToULSchedulerQ_g;

/*structure for storing resource information allocated to RAR or struct of the node in rarList*/
typedef struct rarResourceT{
		LTE_LIST_NODE       rarResourceNodeAnchor;	
		UInt16  raRnti;
                UInt16  tempRnti;
		UInt8	riStart;	/*start index */
		UInt8	length;		/*num of contigious RB allocates*/
}rarResourceNode;


/* List of type LTE_LIST which contains the resource information of the RAR
  of which RAR is been sent to DL scheduler,these will be 8 LISTs per TTI */
LTE_LIST  rarResourceInfoList_g[MAX_RA_RESOURCE_LIST_SIZE];

/*struct of the resource Map fpr resource allocation*/
typedef struct resourceMapT{
		UInt8	rbFreeFlagInd;	/*RBs (in Sub_rbmap)with the same value
								  as this (Rb_free_lag_ind )are free in the
								  resource map*/
		UInt8	rbFreeCounter;	/*indicate the number of free RBs left*/
		UInt8	subRbmap[MAX_RB_IN_UL];	/*array of available RBs in a tick in UL*/
}resourceMap;

typedef enum messageTypeToUET
{
    ULNACK = 0,
    ULACK,
    ULSRREQ
}messageTypeToUE ;


/*The dciFormat for sending the corresponding data to the Physical Layer.*/ 
typedef enum dciFormatT 
{
    DCIFORMAT0 = 0, 
    DCIFORMAT1, 
    DCIFORMAT1A,
    DCIFORMAT1C,
    DCIFORMAT1D,
    DCIFORMAT2,
    DCIFORMAT2A, 
    DCIFORMAT3,
    DCIFORMAT3A, 
    INVALIDDCIFORMAT
}dciFormat;
#endif

/****************************************************************************
 * Exported Constants
 ****************************************************************************/

/****************************************************************************
 * Exported Variables
 ****************************************************************************/
extern ueContextForUplink *uplinkContextInfoMap_g[TBL_SIZE]; 
extern dynamicUEContext *dynUEContextInfoMap_g[TBL_SIZE];
#if 0
extern UplinkContainer *containerPool_g[MAX_CONTAINER_NUM];
extern LTE_LIST nonZeroBsrList_g;
extern UInt8 uplinkSchedulerRunForFirstTime_g;

/****************************************************************************
 * Exported Functions
 ****************************************************************************/

/*void fillRARGrant(LTE_SNODE *raNode_p, UInt8 *payload_p, allocatedResInfo* 
                                                    tempAllocatedResInfo_p);*/
void ulSchedulerMainThread ()  ;

void cqiQToDispatcher(UInt8, UInt16 cqiQueueCount);

void nackQToDispatcher (UInt8,UInt32, UInt16 nackQueueCount);

void srQToDispatcher (UInt32, UInt16 srQueueCount);

void raQToDLScheduler(UInt8, UInt32);

void bsrQToDispatcher(UInt8,UInt32);

UInt16 getRiv(UInt8 length, UInt8 index);

void rarToDLScheduler(UInt16);
void pushToULDispatcher(UInt16,UInt8,UInt8,UInt8,UInt16,UInt8,UInt8 ,
           UInt8,UInt8,UInt32 ,UInt8 ,UInt8,UInt32,UInt32);

//void rarToDlSchedulerQueue (rarToDlSchedulerT * rarToDlScheduler );

UInt8 determineRBs(SInt8 mcsIndex, UInt32 *dataSize);

void freeTempRNTIToRRC(UInt16);

//void processNonZeroBSRQueue(UInt32);

UInt8 rBFromLengthMCS (UInt8 ,UInt8);

void negRARQProcessing(UInt32, UInt16 negRACount);

MacRetType uplinkScheduleUEs(UInt32 currentGlobalTTITickCntTemp);

void prepareAndSendRARToDlScheduler(UInt16 subheaderCountTemp,UInt16 payloadCountTemp,
  UInt8 ttiSchdTemp ,UInt8 rntiIndexTemp,UInt8 indTemp, UInt32 currentGlobalTTITickCntTemp );

#endif
#endif /*endif of _LTE_MACCORE_UPLINK_SCHEDULER_H_*/