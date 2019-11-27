
/****************************************************************************
 *
 *  ARICENT -
 *
 *  Copyright (C) 2009 Aricent Inc. All Rights Reserved.
 *
 ****************************************************************************
 *
 *  $Id:
 *
 ****************************************************************************
 *
 *  File Description : This file contains declarations for list
 *                     wrapper functions.
 *
 ****************************************************************************
 *
 * Revision Details
 * ----------------
 *
 *
 *
 *
 ****************************************************************************/

#ifndef _LIST_WRAP_H_
#define _LIST_WRAP_H_

/****************************************************************************
 * Project Includes
 ****************************************************************************/
#include "cspl.h"
#include "rrc_defines.h"

/****************************************************************************
 * Exported Includes
 ****************************************************************************/



/****************************************************************************
 * Exported Definitions
 ****************************************************************************/



/****************************************************************************
 * Exported Types
 ****************************************************************************/
/* Tree data type */
typedef YLIST list_t;

/* Tree node data type */
typedef YLNODE list_node_t ;


/****************************************************************************
 * Exported Constants
 ****************************************************************************/

/****************************************************************************
 * Exported Variables
 ****************************************************************************/

/****************************************************************************
 * Exported Functions
 ****************************************************************************/

void list_init(list_t *pList);
void list_delete_node(list_t *pList, list_node_t *pNode);
list_node_t *list_first_node(const list_t *pList);
list_node_t * list_next_node(const list_node_t *pNode);
void list_push_head(list_t *pList, list_node_t *pNode);
U32 list_count(list_t *pList);
list_node_t *list_pop_head(list_t *pList);
list_node_t *list_pop_tail(list_t *pList);

void list_push_tail(list_t *pList, list_node_t *pNode);

#endif  /* _LIST_WRAP_H_ */
