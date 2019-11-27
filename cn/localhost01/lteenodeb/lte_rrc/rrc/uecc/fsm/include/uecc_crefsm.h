/***************************************************************************
 *
 *  ARICENT -
 *
 *  Copyright (c) 2010 Aricent.
 *
 ****************************************************************************
 * File Details
 * ------------
 *  $Id: uecc_crefsm.h,v 1.0 2010/10/27 10:51:59 gur21231 Exp $
 ****************************************************************************
 *
 *  File Description : This file contains function prototypes for UE Connection 
 *                     Re-establishment procedure FSM 
 *
 ****************************************************************************
 *
 * Revision Details
 * ----------------
 *
 * $Log: uecc_crefsm.h,v $ 
 * Revision 1.0  2010/10/27   10:51:59  gur21231
 * Ue Connection Re-establishment FSM
 *
 * UE Connection Re-establishment procedure moved to uecc_crefsm.*
 *
 ****************************************************************************/

#ifndef INCLUDED_UECC_CREFSM_H
#define INCLUDED_UECC_CREFSM_H

/****************************************************************************
 * Header File Includes
 ****************************************************************************/
#include "uecc_fsm_common.h"

/****************************************************************************
 * Private Variables
 ****************************************************************************/

/****************************************************************************
 * Exported Macro definitions
 ****************************************************************************/

/****************************************************************************
 * Enumeration Definitions
 ****************************************************************************/

/****************************************************************************
 * Public Variables
 ****************************************************************************/

extern uecc_fsm_procedure_t uecc_fsm_ue_connection_re_establishment_procedure;

#endif /* INCLUDED_UECC_CREFSM_H */
