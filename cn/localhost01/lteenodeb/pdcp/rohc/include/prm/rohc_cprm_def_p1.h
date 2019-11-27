/****************************************************************************
 *
 *  ARICENT -
 *
 *  Copyright (C) 2009 Aricent Inc. All Rights Reserved.
 *
 ****************************************************************************
 *
 *  $Id: rohc_cprm_def_p1.h,v 1.1.1.1 2010/02/11 04:51:26 cm_intel Exp $
 *
 ****************************************************************************
 *
 *  File Description : This file contains #defines for the packet type and bit
 *                     strings to resolve the packet for profile IP/UDP/RTP.
 *
 ****************************************************************************
 *
 * Revision Details
 * ----------------
 *
 * $Log: rohc_cprm_def_p1.h,v $
 * Revision 1.1.1.1  2010/02/11 04:51:26  cm_intel
 * eNB framework for intel
 *
 * Revision 1.2.2.1  2009/06/09 11:34:56  gur19140
 * first wave of Integration
 *
 * Revision 1.2  2009/05/28 05:46:18  gur19836
 * File header updated
 *
 *
 *
 ****************************************************************************/

#ifndef _ROHC_CPRM_DEF_P1_H_
#define _ROHC_CPRM_DEF_P1_H_

#include "rohc_c_typ.h"
#include "rohc_com_def.h"
/* define for UO packets types for IP/UDP/RTP profile */
#define ROHC_UOP1_UO_BASE                      0U
#define ROHC_UOP1_UO_0                         ROHC_UOP1_UO_BASE     
#define ROHC_UOP1_UO_1_ID                      ROHC_UOP1_UO_BASE + 1 
#define ROHC_UOP1_UO_1_TS                      ROHC_UOP1_UO_BASE + 2 
#define ROHC_UOP1_UO_1                         ROHC_UOP1_UO_BASE + 3 
#define ROHC_UOP1_UO_1_ID_EXT_3_A1             ROHC_UOP1_UO_BASE + 4 
#define ROHC_UOP1_UO_1_ID_EXT_3_A2             ROHC_UOP1_UO_BASE + 5 
#define ROHC_UOP1_UO_1_ID_EXT_3_A3             ROHC_UOP1_UO_BASE + 6 
#define ROHC_UOP1_UO_1_ID_EXT_3_A4             ROHC_UOP1_UO_BASE + 7 
#define ROHC_UOP1_UOR_2_ID                     ROHC_UOP1_UO_BASE + 8 
#define ROHC_UOP1_UOR_2_TS                     ROHC_UOP1_UO_BASE + 9 
#define ROHC_UOP1_UOR_2                        ROHC_UOP1_UO_BASE + 10
#define ROHC_UOP1_UOR_2_ID_EXT_3_A1          ROHC_UOP1_UO_BASE + 11
#define ROHC_UOP1_UOR_2_TS_EXT_3_A1          ROHC_UOP1_UO_BASE + 12
#define ROHC_UOP1_UOR_2_EXT_3_A1             ROHC_UOP1_UO_BASE + 13
#define ROHC_UOP1_UOR_2_ID_EXT_3_A2          ROHC_UOP1_UO_BASE + 14
#define ROHC_UOP1_UOR_2_TS_EXT_3_A2          ROHC_UOP1_UO_BASE + 15
#define ROHC_UOP1_UOR_2_EXT_3_A2             ROHC_UOP1_UO_BASE + 16
#define ROHC_UOP1_UOR_2_ID_EXT_3_A3          ROHC_UOP1_UO_BASE + 17
#define ROHC_UOP1_UOR_2_TS_EXT_3_A3          ROHC_UOP1_UO_BASE + 18
#define ROHC_UOP1_UOR_2_EXT_3_A3             ROHC_UOP1_UO_BASE + 19
#define ROHC_UOP1_UOR_2_ID_EXT_3_A4          ROHC_UOP1_UO_BASE + 20
#define ROHC_UOP1_UOR_2_TS_EXT_3_A4          ROHC_UOP1_UO_BASE + 21
#define ROHC_UOP1_UOR_2_EXT_3_A4             ROHC_UOP1_UO_BASE + 22
#define ROHC_UOP1_UO_1_ID_EXT_0                ROHC_UOP1_UO_BASE + 23
#define ROHC_UOP1_UO_1_ID_EXT_1                ROHC_UOP1_UO_BASE + 24
#define ROHC_UOP1_UO_1_ID_EXT_2                ROHC_UOP1_UO_BASE + 25
#define ROHC_UOP1_UOR_2_ID_EXT_0               ROHC_UOP1_UO_BASE + 26
#define ROHC_UOP1_UOR_2_TS_EXT_0               ROHC_UOP1_UO_BASE + 27
#define ROHC_UOP1_UOR_2_TS_EXT_1               ROHC_UOP1_UO_BASE + 28
#define ROHC_UOP1_UOR_2_ID_EXT_1               ROHC_UOP1_UO_BASE + 29
#define ROHC_UOP1_UOR_2_ID_EXT_2               ROHC_UOP1_UO_BASE + 30
#define ROHC_UOP1_UOR_2_EXT_0                  ROHC_UOP1_UO_BASE + 31
#define ROHC_UOP1_UOR_2_TS_EXT_2               ROHC_UOP1_UO_BASE + 32
#define ROHC_UOP1_UOR_2_EXT_1                  ROHC_UOP1_UO_BASE + 33
#define ROHC_UOP1_UOR_2_EXT_2                  ROHC_UOP1_UO_BASE + 34
#define ROHC_UOP1_UO_1_ID_EXT_3_B1             ROHC_UOP1_UO_BASE + 35
#define ROHC_UOP1_UO_1_ID_EXT_3_B2             ROHC_UOP1_UO_BASE + 36
#define ROHC_UOP1_UO_1_ID_EXT_3_B3             ROHC_UOP1_UO_BASE + 37
#define ROHC_UOP1_UO_1_ID_EXT_3_B4             ROHC_UOP1_UO_BASE + 38
#define ROHC_UOP1_UOR_2_ID_EXT_3_B1            ROHC_UOP1_UO_BASE + 39
#define ROHC_UOP1_UOR_2_TS_EXT_3_B1            ROHC_UOP1_UO_BASE + 40
#define ROHC_UOP1_UOR_2_EXT_3_B1               ROHC_UOP1_UO_BASE + 41
#define ROHC_UOP1_UOR_2_ID_EXT_3_B2            ROHC_UOP1_UO_BASE + 42
#define ROHC_UOP1_UOR_2_TS_EXT_3_B2            ROHC_UOP1_UO_BASE + 43
#define ROHC_UOP1_UOR_2_EXT_3_B2               ROHC_UOP1_UO_BASE + 44
#define ROHC_UOP1_UOR_2_ID_EXT_3_B3            ROHC_UOP1_UO_BASE + 45
#define ROHC_UOP1_UOR_2_TS_EXT_3_B3            ROHC_UOP1_UO_BASE + 46
#define ROHC_UOP1_UOR_2_EXT_3_B3               ROHC_UOP1_UO_BASE + 47
#define ROHC_UOP1_UOR_2_TS_EXT_3_B4            ROHC_UOP1_UO_BASE + 48
#define ROHC_UOP1_UOR_2_EXT_3_B4               ROHC_UOP1_UO_BASE + 49

#define ROHC_P1_UO_MAX_PACKETS               ROHC_UOP1_UO_BASE + 50

/* Defines for R mode packet types for IP/UDP/RTP profile */
                  
#define ROHC_RP1_R_BASE                     0U                   
                                                                 
#define ROHC_RP1_R_0                         ROHC_RP1_R_BASE      
#define ROHC_RP1_R_1_ID                      ROHC_RP1_R_BASE + 1  
#define ROHC_RP1_UOR_2_ID                    ROHC_RP1_R_BASE + 2  
#define ROHC_RP1_R_1_TS                      ROHC_RP1_R_BASE + 3  
#define ROHC_RP1_UOR_2_TS                    ROHC_RP1_R_BASE + 4  
#define ROHC_RP1_R_1                         ROHC_RP1_R_BASE + 5  
#define ROHC_RP1_UOR_2                       ROHC_RP1_R_BASE + 6  
#define ROHC_RP1_UOR_2_ID_EXT_3_A1         ROHC_RP1_R_BASE + 7  
#define ROHC_RP1_UOR_2_TS_EXT_3_A1         ROHC_RP1_R_BASE + 8  
#define ROHC_RP1_R_1_EXT_3_A1               ROHC_RP1_R_BASE + 9  
#define ROHC_RP1_UOR_2_EXT_3_A1            ROHC_RP1_R_BASE + 10 
#define ROHC_RP1_UOR_2_ID_EXT_3_A2         ROHC_RP1_R_BASE + 11 
#define ROHC_RP1_UOR_2_TS_EXT_3_A2         ROHC_RP1_R_BASE + 12 
#define ROHC_RP1_R_1_EXT_3_A2               ROHC_RP1_R_BASE + 13 
#define ROHC_RP1_UOR_2_EXT_3_A2            ROHC_RP1_R_BASE + 14 
#define ROHC_RP1_UOR_2_ID_EXT_3_A3         ROHC_RP1_R_BASE + 15 
#define ROHC_RP1_UOR_2_TS_EXT_3_A3         ROHC_RP1_R_BASE + 16 
#define ROHC_RP1_R_1_EXT_3_A3               ROHC_RP1_R_BASE + 17 
#define ROHC_RP1_UOR_2_EXT_3_A3            ROHC_RP1_R_BASE + 18 
#define ROHC_RP1_UOR_2_ID_EXT_3_A4         ROHC_RP1_R_BASE + 19 
#define ROHC_RP1_UOR_2_TS_EXT_3_A4         ROHC_RP1_R_BASE + 20 
#define ROHC_RP1_R_1_EXT_3_A4               ROHC_RP1_R_BASE + 21 
#define ROHC_RP1_UOR_2_EXT_3_A4            ROHC_RP1_R_BASE + 22 
#define ROHC_RP1_R_0_CRC                     ROHC_RP1_R_BASE + 23 
#define ROHC_RP1_R_1_ID_EXT_0                ROHC_RP1_R_BASE + 24 
#define ROHC_RP1_UOR_2_ID_EXT_0              ROHC_RP1_R_BASE + 25 
#define ROHC_RP1_R_1_TS_EXT_0                ROHC_RP1_R_BASE + 26 
#define ROHC_RP1_UOR_2_TS_EXT_0              ROHC_RP1_R_BASE + 27 
#define ROHC_RP1_R_1_TS_EXT_1                ROHC_RP1_R_BASE + 28 
#define ROHC_RP1_UOR_2_TS_EXT_1              ROHC_RP1_R_BASE + 29 
#define ROHC_RP1_R_1_ID_EXT_1                ROHC_RP1_R_BASE + 30 
#define ROHC_RP1_UOR_2_ID_EXT_1              ROHC_RP1_R_BASE + 31 
#define ROHC_RP1_R_1_ID_EXT_2                ROHC_RP1_R_BASE + 32 
#define ROHC_RP1_UOR_2_ID_EXT_2              ROHC_RP1_R_BASE + 33 
#define ROHC_RP1_R_1_EXT_0                   ROHC_RP1_R_BASE + 34 
#define ROHC_RP1_UOR_2_EXT_0                 ROHC_RP1_R_BASE + 35 
#define ROHC_RP1_UOR_2_TS_EXT_2              ROHC_RP1_R_BASE + 36 
#define ROHC_RP1_R_1_EXT_1                   ROHC_RP1_R_BASE + 37 
#define ROHC_RP1_R_1_TS_EXT_2                ROHC_RP1_R_BASE + 38 
#define ROHC_RP1_UOR_2_EXT_1                 ROHC_RP1_R_BASE + 39 
#define ROHC_RP1_R_1_EXT_2                   ROHC_RP1_R_BASE + 40 
#define ROHC_RP1_UOR_2_EXT_2                 ROHC_RP1_R_BASE + 41 
#define ROHC_RP1_R_1_ID_EXT_3_A1             ROHC_RP1_R_BASE + 42 
#define ROHC_RP1_UOR_2_ID_EXT_3_B1           ROHC_RP1_R_BASE + 43 
#define ROHC_RP1_R_1_TS_EXT_3_A1             ROHC_RP1_R_BASE + 44 
#define ROHC_RP1_UOR_2_TS_EXT_3_B1           ROHC_RP1_R_BASE + 45 
#define ROHC_RP1_R_1_EXT_3_B1                ROHC_RP1_R_BASE + 46 
#define ROHC_RP1_UOR_2_EXT_3_B1              ROHC_RP1_R_BASE + 47 
#define ROHC_RP1_R_1_ID_EXT_3_A2             ROHC_RP1_R_BASE + 48 
#define ROHC_RP1_UOR_2_ID_EXT_3_B2           ROHC_RP1_R_BASE + 49 
#define ROHC_RP1_R_1_TS_EXT_3_A2             ROHC_RP1_R_BASE + 50 
#define ROHC_RP1_UOR_2_TS_EXT_3_B2           ROHC_RP1_R_BASE + 51 
#define ROHC_RP1_R_1_EXT_3_B2                ROHC_RP1_R_BASE + 52 
#define ROHC_RP1_UOR_2_EXT_3_B2              ROHC_RP1_R_BASE + 53 
#define ROHC_RP1_R_1_ID_EXT_3_A3             ROHC_RP1_R_BASE + 54 
#define ROHC_RP1_UOR_2_ID_EXT_3_B3           ROHC_RP1_R_BASE + 55 
#define ROHC_RP1_R_1_TS_EXT_3_A3             ROHC_RP1_R_BASE + 56 
#define ROHC_RP1_UOR_2_TS_EXT_3_B3           ROHC_RP1_R_BASE + 57 
#define ROHC_RP1_R_1_EXT_3_B3                ROHC_RP1_R_BASE + 58 
#define ROHC_RP1_UOR_2_EXT_3_B3              ROHC_RP1_R_BASE + 59 
#define ROHC_RP1_R_1_ID_EXT_3_A4             ROHC_RP1_R_BASE + 60 
#define ROHC_RP1_R_1_TS_EXT_3_A4             ROHC_RP1_R_BASE + 61 
#define ROHC_RP1_UOR_2_TS_EXT_3_B4           ROHC_RP1_R_BASE + 62 
#define ROHC_RP1_R_1_EXT_3_B4                ROHC_RP1_R_BASE + 63 
#define ROHC_RP1_UOR_2_EXT_3_B4              ROHC_RP1_R_BASE + 64 

#define ROHC_P1_R_MAX_PACKETS               ROHC_RP1_R_BASE + 65



/* for computing delta bit map */

/* common for all prOfile */
#define ROHC_CPRM_CH_MODE        0x00000001 

/* RTP fields Note: SN is not considered as it is present in all pkt types*/    
#define ROHC_CPRM_CH_TS          0x00000002          
#define ROHC_CPRM_CH_R_PT        0x00000004 
#define ROHC_CPRM_CH_R_X         0x00000008 
#define ROHC_CPRM_CH_R_M         0x00000010 /* doesn't confirm to EXT-3 */
#define ROHC_CPRM_CH_CSRC        0x00000020 
#define ROHC_CPRM_CH_R_P         0x00000040 
#define ROHC_CPRM_CH_TSS         0x00000080 
#define ROHC_CPRM_CH_TIS         0x00000100          
                                           
/* Inner IP */                   
#define ROHC_CPRM_CH_I           0x00000200
#define ROHC_CPRM_CH_TOS_TC      0x00000400     
#define ROHC_CPRM_CH_TTL_HL      0x00000800     
#define ROHC_CPRM_CH_PR_NH       0x00001000
#define ROHC_CPRM_CH_DF          0x00002000
#define ROHC_CPRM_CH_IPX         0x00004000
#define ROHC_CPRM_CH_RND         0x00008000
#define ROHC_CPRM_CH_NBO         0x00010000          
                                           
/* Outer IP */                   
#define ROHC_CPRM_CH_I2          0x00020000
#define ROHC_CPRM_CH_TOS_TC2     0x00040000
#define ROHC_CPRM_CH_TTL_HL2     0x00080000
#define ROHC_CPRM_CH_PR_NH2      0x00100000
#define ROHC_CPRM_CH_DF2         0x00200000
#define ROHC_CPRM_CH_IPX2        0x00400000
#define ROHC_CPRM_CH_RND2        0x00800000
#define ROHC_CPRM_CH_NBO2        0x01000000          
                                           
/* UDP */                        
#define ROHC_CPRM_CH_CHK_SUM     0x02000000 /*does'nt confirm to EXT-3*/

#define ROHC_UNKNOWN_PKT 0xFF
#define ROHC_PRTT_MAX   0x40     /*64*/     

#define ROHC_PRM_CRC_BITS0 0x00
#define ROHC_PRM_CRC_BITS3 0x03
#define ROHC_PRM_CRC_BITS7 0x07

#define ROHC_P1_SN_BITS 16
#define ROHC_P1_TS_BITS 32
#define ROHC_P123_IPID_BITS 16

#define ROHC_P23_SN_BITS 32
#define ROHC_P23_TS_BITS 32



#define ROHC_BIT_MAP_LEN9 9
#define ROHC_BIT_MAP_LEN7 7
#define ROHC_BIT_MAP_LEN2 2

#endif /* _ROHC_CPRM_EXT_IF_H_ */
