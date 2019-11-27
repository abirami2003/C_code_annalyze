/***************************************************************************
 *
 *  ARICENT -
 *
 *  Copyright (c) 2014 Aricent.
 *
 ****************************************************************************
 * File Details
 * ------------
 *  $Id: $
 ****************************************************************************
 *
 *  File Description : The file rrc_oam_il_composer.h contains the prototypes 
 *                     of RRC-OAM interface message composing functions.
 *
 ****************************************************************************
 *
 * Revision Details
 * ----------------
 * $Log: $
 *
 ****************************************************************************/
#ifndef _RRC_OAM_IL_COMPOSER_H_
#define _RRC_OAM_IL_COMPOSER_H_

#include "rrc_defines.h"
#include "rrc_oam_intf.h"

rrc_length_t
rrc_il_get_rrc_oam_communication_info_req_len
(
    rrc_oam_communication_info_req_t *p_rrc_oam_communication_info_req
);

rrc_return_et
rrc_il_compose_rrc_oam_communication_info_req
(
    U8  **pp_buffer,
    rrc_oam_communication_info_req_t *p_rrc_oam_communication_info_req
);

rrc_length_t
rrc_il_get_rrc_oam_communication_info_resp_len
(
    rrc_oam_communication_info_resp_t *p_rrc_oam_communication_info_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_communication_info_resp
(
    U8  **pp_buffer,
    rrc_oam_communication_info_resp_t *p_rrc_oam_communication_info_resp
);

rrc_length_t
rrc_il_get_rrc_oam_provision_req_len
(
    rrc_oam_provision_req_t *p_rrc_oam_provision_req
);

rrc_return_et
rrc_il_compose_rrc_oam_provision_req
(
    U8  **pp_buffer,
    rrc_oam_provision_req_t *p_rrc_oam_provision_req
);

rrc_length_t
rrc_il_get_rrc_oam_provision_resp_len
(
    rrc_oam_provision_resp_t *p_rrc_oam_provision_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_provision_resp
(
    U8  **pp_buffer,
    rrc_oam_provision_resp_t *p_rrc_oam_provision_resp
);

rrc_length_t
rrc_il_get_rrc_oam_get_log_level_resp_len
(
    rrc_oam_get_log_level_resp_t *p_rrc_oam_get_log_level_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_get_log_level_resp
(
    U8  **pp_buffer,
    rrc_oam_get_log_level_resp_t *p_rrc_oam_get_log_level_resp
);

rrc_length_t
rrc_il_get_rrc_oam_set_log_level_req_len
(
    rrc_oam_set_log_level_req_t *p_rrc_oam_set_log_level_req
);

rrc_return_et
rrc_il_compose_rrc_oam_set_log_level_req
(
    U8  **pp_buffer,
    rrc_oam_set_log_level_req_t *p_rrc_oam_set_log_level_req
);

rrc_length_t
rrc_il_get_rrc_oam_set_log_level_resp_len
(
    rrc_oam_set_log_level_resp_t *p_rrc_oam_set_log_level_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_set_log_level_resp
(
    U8  **pp_buffer,
    rrc_oam_set_log_level_resp_t *p_rrc_oam_set_log_level_resp
);

rrc_length_t
rrc_il_get_rrc_oam_log_enable_req_len
(
    rrc_oam_log_enable_req_t *p_rrc_oam_log_enable_req
);

rrc_return_et
rrc_il_compose_rrc_oam_log_enable_req
(
    U8  **pp_buffer,
    rrc_oam_log_enable_req_t *p_rrc_oam_log_enable_req
);

rrc_length_t
rrc_il_get_rrc_oam_log_enable_resp_len
(
    rrc_oam_log_enable_resp_t *p_rrc_oam_log_enable_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_log_enable_resp
(
    U8  **pp_buffer,
    rrc_oam_log_enable_resp_t *p_rrc_oam_log_enable_resp
);

rrc_length_t
rrc_il_get_rrc_oam_get_cell_stats_resp_len
(
    rrc_oam_get_cell_stats_resp_t *p_rrc_oam_get_cell_stats_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_get_cell_stats_resp
(
    U8  **pp_buffer,
    rrc_oam_get_cell_stats_resp_t *p_rrc_oam_get_cell_stats_resp
);

rrc_length_t
rrc_il_get_rrc_oam_get_cell_stats_req_len
(
    rrc_oam_get_cell_stats_req_t *p_rrc_oam_get_cell_stats_req
);

rrc_return_et
rrc_il_compose_rrc_oam_get_cell_stats_req
(
    U8  **pp_buffer,
    rrc_oam_get_cell_stats_req_t *p_rrc_oam_get_cell_stats_req
);

rrc_length_t
rrc_il_get_rrc_oam_config_stats_req_len
(
    rrc_oam_config_stats_req_t *p_rrc_oam_config_stats_req
);

rrc_return_et
rrc_il_compose_rrc_oam_config_stats_req
(
    U8  **pp_buffer,
    rrc_oam_config_stats_req_t *p_rrc_oam_config_stats_req
);

rrc_length_t
rrc_il_get_rrc_oam_config_stats_resp_len
(
    rrc_oam_config_stats_resp_t *p_rrc_oam_config_stats_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_config_stats_resp
(
    U8  **pp_buffer,
    rrc_oam_config_stats_resp_t *p_rrc_oam_config_stats_resp
);

rrc_length_t
rrc_il_get_rrc_oam_rrc_connection_stats_ind_len
(
    rrc_oam_rrc_connection_stats_ind_t *p_rrc_oam_rrc_connection_stats_ind
);

rrc_return_et
rrc_il_compose_rrc_oam_rrc_connection_stats_ind
(
    U8  **pp_buffer,
    rrc_oam_rrc_connection_stats_ind_t *p_rrc_oam_rrc_connection_stats_ind
);

rrc_length_t
rrc_il_get_rrc_oam_handover_stats_ind_len
(
    rrc_oam_handover_stats_ind_t *p_rrc_oam_handover_stats_ind
);

rrc_return_et
rrc_il_compose_rrc_oam_handover_stats_ind
(
    U8  **pp_buffer,
    rrc_oam_handover_stats_ind_t *p_rrc_oam_handover_stats_ind
);

rrc_length_t
rrc_il_get_rrc_oam_erab_stats_ind_len
(
    rrc_oam_erab_stats_ind_t *p_rrc_oam_erab_stats_ind
);

rrc_return_et
rrc_il_compose_rrc_oam_erab_stats_ind
(
    U8  **pp_buffer,
    rrc_oam_erab_stats_ind_t *p_rrc_oam_erab_stats_ind
);

rrc_length_t
rrc_il_get_rrc_oam_ue_assoc_s1_conn_stats_ind_len
(
    rrc_oam_ue_assoc_s1_conn_stats_ind_t *p_rrc_oam_ue_assoc_s1_conn_stats_ind
);

rrc_return_et
rrc_il_compose_rrc_oam_ue_assoc_s1_conn_stats_ind
(
    U8  **pp_buffer,
    rrc_oam_ue_assoc_s1_conn_stats_ind_t *p_rrc_oam_ue_assoc_s1_conn_stats_ind
);

rrc_length_t
rrc_il_get_rrc_oam_paging_stats_ind_len
(
    rrc_oam_paging_stats_ind_t *p_rrc_oam_paging_stats_ind
);

rrc_return_et
rrc_il_compose_rrc_oam_paging_stats_ind
(
    U8  **pp_buffer,
    rrc_oam_paging_stats_ind_t *p_rrc_oam_paging_stats_ind
);

rrc_length_t
rrc_il_get_rrc_oam_irat_mobility_stats_ind_len
(
    rrc_oam_irat_mobility_stats_ind_t *p_rrc_oam_irat_mobility_stats_ind
);

rrc_return_et
rrc_il_compose_rrc_oam_irat_mobility_stats_ind
(
    U8  **pp_buffer,
    rrc_oam_irat_mobility_stats_ind_t *p_rrc_oam_irat_mobility_stats_ind
);

rrc_length_t
rrc_il_get_rrc_oam_get_cell_status_req_len
(
    rrc_oam_get_cell_status_req_t *p_rrc_oam_get_cell_status_req
);

rrc_return_et
rrc_il_compose_rrc_oam_get_cell_status_req
(
    U8  **pp_buffer,
    rrc_oam_get_cell_status_req_t *p_rrc_oam_get_cell_status_req
);

rrc_length_t
rrc_il_get_rrc_oam_get_cell_status_resp_len
(
    rrc_oam_get_cell_status_resp_t *p_rrc_oam_get_cell_status_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_get_cell_status_resp
(
    U8  **pp_buffer,
    rrc_oam_get_cell_status_resp_t *p_rrc_oam_get_cell_status_resp
);

rrc_length_t
rrc_il_get_rrc_oam_get_ue_status_req_len
(
    rrc_oam_get_ue_status_req_t *p_rrc_oam_get_ue_status_req
);

rrc_return_et
rrc_il_compose_rrc_oam_get_ue_status_req
(
    U8  **pp_buffer,
    rrc_oam_get_ue_status_req_t *p_rrc_oam_get_ue_status_req
);

rrc_length_t
rrc_il_get_rrc_oam_get_ue_status_resp_len
(
    rrc_oam_get_ue_status_resp_t *p_rrc_oam_get_ue_status_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_get_ue_status_resp
(
    U8  **pp_buffer,
    rrc_oam_get_ue_status_resp_t *p_rrc_oam_get_ue_status_resp
);

rrc_length_t
rrc_il_get_rrc_oam_get_ps_stats_req_len
(
    rrc_oam_get_ps_stats_req_t *p_rrc_oam_get_ps_stats_req
);

rrc_return_et
rrc_il_compose_rrc_oam_get_ps_stats_req
(
    U8  **pp_buffer,
    rrc_oam_get_ps_stats_req_t *p_rrc_oam_get_ps_stats_req
);

rrc_length_t
rrc_il_get_rrc_oam_get_ps_stats_resp_len
(
    rrc_oam_get_ps_stats_resp_t *p_rrc_oam_get_ps_stats_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_get_ps_stats_resp
(
    U8  **pp_buffer,
    rrc_oam_get_ps_stats_resp_t *p_rrc_oam_get_ps_stats_resp
);

rrc_length_t
rrc_il_get_rrc_oam_reset_cell_stats_req_len
(
    rrc_oam_reset_cell_stats_req_t *p_rrc_oam_reset_cell_stats_req
);

rrc_return_et
rrc_il_compose_rrc_oam_reset_cell_stats_req
(
    U8  **pp_buffer,
    rrc_oam_reset_cell_stats_req_t *p_rrc_oam_reset_cell_stats_req
);

rrc_length_t
rrc_il_get_rrc_oam_reset_cell_stats_resp_len
(
    rrc_oam_reset_cell_stats_resp_t *p_rrc_oam_reset_cell_stats_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_reset_cell_stats_resp
(
    U8  **pp_buffer,
    rrc_oam_reset_cell_stats_resp_t *p_rrc_oam_reset_cell_stats_resp
);

rrc_length_t
rrc_il_get_rrc_oam_cleanup_resp_len
(
    rrc_oam_cleanup_resp_t *p_rrc_oam_cleanup_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_cleanup_resp
(
    U8  **pp_buffer,
    rrc_oam_cleanup_resp_t *p_rrc_oam_cleanup_resp
);

rrc_length_t
rrc_il_get_rrc_oam_init_ind_len
(
    rrc_oam_init_ind_t *p_rrc_oam_init_ind
);

rrc_return_et
rrc_il_compose_rrc_oam_init_ind
(
    U8  **pp_buffer,
    rrc_oam_init_ind_t *p_rrc_oam_init_ind
);

rrc_length_t
rrc_il_get_rrc_oam_cell_traffic_trace_start_len
(
    rrc_oam_cell_traffic_trace_start_t *p_rrc_oam_cell_traffic_trace_start
);

rrc_return_et
rrc_il_compose_rrc_oam_cell_traffic_trace_start
(
    U8  **pp_buffer,
    rrc_oam_cell_traffic_trace_start_t *p_rrc_oam_cell_traffic_trace_start
);

rrc_length_t
rrc_il_get_rrc_oam_cell_traffic_trace_stop_len
(
    rrc_oam_cell_traffic_trace_stop_t *p_rrc_oam_cell_traffic_trace_stop
);

rrc_return_et
rrc_il_compose_rrc_oam_cell_traffic_trace_stop
(
    U8  **pp_buffer,
    rrc_oam_cell_traffic_trace_stop_t *p_rrc_oam_cell_traffic_trace_stop
);

rrc_length_t
rrc_il_get_rrc_oam_cell_traffic_trace_start_error_ind_len
(
    rrc_oam_cell_traffic_trace_start_error_ind_t *p_rrc_oam_cell_traffic_trace_start_error_ind
);

rrc_return_et
rrc_il_compose_rrc_oam_cell_traffic_trace_start_error_ind
(
    U8  **pp_buffer,
    rrc_oam_cell_traffic_trace_start_error_ind_t *p_rrc_oam_cell_traffic_trace_start_error_ind
);

rrc_length_t
rrc_il_get_rrc_oam_trace_file_transfer_start_ind_len
(
    rrc_oam_trace_file_transfer_start_ind_t *p_rrc_oam_trace_file_transfer_start_ind
);

rrc_return_et
rrc_il_compose_rrc_oam_trace_file_transfer_start_ind
(
    U8  **pp_buffer,
    rrc_oam_trace_file_transfer_start_ind_t *p_rrc_oam_trace_file_transfer_start_ind
);

rrc_length_t
rrc_il_get_rrc_oam_trace_file_transfer_complete_ind_len
(
    rrc_oam_trace_file_transfer_complete_ind_t *p_rrc_oam_trace_file_transfer_complete_ind
);

rrc_return_et
rrc_il_compose_rrc_oam_trace_file_transfer_complete_ind
(
    U8  **pp_buffer,
    rrc_oam_trace_file_transfer_complete_ind_t *p_rrc_oam_trace_file_transfer_complete_ind
);

rrc_length_t
rrc_il_get_rrc_oam_trace_start_error_ind_len
(
    rrc_oam_trace_start_error_ind_t *p_rrc_oam_trace_start_error_ind
);

rrc_return_et
rrc_il_compose_rrc_oam_trace_start_error_ind
(
    U8  **pp_buffer,
    rrc_oam_trace_start_error_ind_t *p_rrc_oam_trace_start_error_ind
);

rrc_length_t
rrc_il_get_rrc_oam_add_lgw_req_len
(
    rrc_oam_add_lgw_req_t *p_rrc_oam_add_lgw_req
);

rrc_return_et
rrc_il_compose_rrc_oam_add_lgw_req
(
    U8  **pp_buffer,
    rrc_oam_add_lgw_req_t *p_rrc_oam_add_lgw_req
);

rrc_length_t
rrc_il_get_rrc_oam_add_lgw_resp_len
(
    rrc_oam_add_lgw_resp_t *p_rrc_oam_add_lgw_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_add_lgw_resp
(
    U8  **pp_buffer,
    rrc_oam_add_lgw_resp_t *p_rrc_oam_add_lgw_resp
);

rrc_length_t
rrc_il_get_rrc_oam_delete_lgw_req_len
(
    rrc_oam_delete_lgw_req_t *p_rrc_oam_delete_lgw_req
);

rrc_return_et
rrc_il_compose_rrc_oam_delete_lgw_req
(
    U8  **pp_buffer,
    rrc_oam_delete_lgw_req_t *p_rrc_oam_delete_lgw_req
);

rrc_length_t
rrc_il_get_rrc_oam_delete_lgw_resp_len
(
    rrc_oam_delete_lgw_resp_t *p_rrc_oam_delete_lgw_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_delete_lgw_resp
(
    U8  **pp_buffer,
    rrc_oam_delete_lgw_resp_t *p_rrc_oam_delete_lgw_resp
);

rrc_length_t
rrc_il_get_rrc_oam_get_debug_info_req_len
(
    rrc_oam_get_debug_info_req_t *p_rrc_oam_get_debug_info_req
);

rrc_return_et
rrc_il_compose_rrc_oam_get_debug_info_req
(
    U8  **pp_buffer,
    rrc_oam_get_debug_info_req_t *p_rrc_oam_get_debug_info_req
);

rrc_length_t
rrc_il_get_rrc_oam_get_debug_info_resp_len
(
    rrc_oam_get_debug_info_resp_t *p_rrc_oam_get_debug_info_resp
);

rrc_return_et
rrc_il_compose_rrc_oam_get_debug_info_resp
(
    U8  **pp_buffer,
    rrc_oam_get_debug_info_resp_t *p_rrc_oam_get_debug_info_resp
);

rrc_return_et
rrc_oam_il_send_rrc_oam_communication_info_req
(
    rrc_oam_communication_info_req_t  *p_rrc_oam_communication_info_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_communication_info_resp
(
    rrc_oam_communication_info_resp_t  *p_rrc_oam_communication_info_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_provision_req
(
    rrc_oam_provision_req_t  *p_rrc_oam_provision_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_provision_resp
(
    rrc_oam_provision_resp_t  *p_rrc_oam_provision_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_get_log_level_resp
(
    rrc_oam_get_log_level_resp_t  *p_rrc_oam_get_log_level_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_set_log_level_req
(
    rrc_oam_set_log_level_req_t  *p_rrc_oam_set_log_level_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_set_log_level_resp
(
    rrc_oam_set_log_level_resp_t  *p_rrc_oam_set_log_level_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_log_enable_req
(
    rrc_oam_log_enable_req_t  *p_rrc_oam_log_enable_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_log_enable_resp
(
    rrc_oam_log_enable_resp_t  *p_rrc_oam_log_enable_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_get_cell_stats_resp
(
    rrc_oam_get_cell_stats_resp_t  *p_rrc_oam_get_cell_stats_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_get_cell_stats_req
(
    rrc_oam_get_cell_stats_req_t  *p_rrc_oam_get_cell_stats_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_config_stats_req
(
    rrc_oam_config_stats_req_t  *p_rrc_oam_config_stats_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_config_stats_resp
(
    rrc_oam_config_stats_resp_t  *p_rrc_oam_config_stats_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_rrc_connection_stats_ind
(
    rrc_oam_rrc_connection_stats_ind_t  *p_rrc_oam_rrc_connection_stats_ind,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_handover_stats_ind
(
    rrc_oam_handover_stats_ind_t  *p_rrc_oam_handover_stats_ind,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_erab_stats_ind
(
    rrc_oam_erab_stats_ind_t  *p_rrc_oam_erab_stats_ind,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_ue_assoc_s1_conn_stats_ind
(
    rrc_oam_ue_assoc_s1_conn_stats_ind_t  *p_rrc_oam_ue_assoc_s1_conn_stats_ind,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_paging_stats_ind
(
    rrc_oam_paging_stats_ind_t  *p_rrc_oam_paging_stats_ind,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_irat_mobility_stats_ind
(
    rrc_oam_irat_mobility_stats_ind_t  *p_rrc_oam_irat_mobility_stats_ind,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_get_cell_status_req
(
    rrc_oam_get_cell_status_req_t  *p_rrc_oam_get_cell_status_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_get_cell_status_resp
(
    rrc_oam_get_cell_status_resp_t  *p_rrc_oam_get_cell_status_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_get_ue_status_req
(
    rrc_oam_get_ue_status_req_t  *p_rrc_oam_get_ue_status_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_get_ue_status_resp
(
    rrc_oam_get_ue_status_resp_t  *p_rrc_oam_get_ue_status_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_get_ps_stats_req
(
    rrc_oam_get_ps_stats_req_t  *p_rrc_oam_get_ps_stats_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_get_ps_stats_resp
(
    rrc_oam_get_ps_stats_resp_t  *p_rrc_oam_get_ps_stats_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_reset_cell_stats_req
(
    rrc_oam_reset_cell_stats_req_t  *p_rrc_oam_reset_cell_stats_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_reset_cell_stats_resp
(
    rrc_oam_reset_cell_stats_resp_t  *p_rrc_oam_reset_cell_stats_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_cleanup_resp
(
    rrc_oam_cleanup_resp_t  *p_rrc_oam_cleanup_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_init_ind
(
    rrc_oam_init_ind_t  *p_rrc_oam_init_ind,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_cell_traffic_trace_start
(
    rrc_oam_cell_traffic_trace_start_t  *p_rrc_oam_cell_traffic_trace_start,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_cell_traffic_trace_stop
(
    rrc_oam_cell_traffic_trace_stop_t  *p_rrc_oam_cell_traffic_trace_stop,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_cell_traffic_trace_start_error_ind
(
    rrc_oam_cell_traffic_trace_start_error_ind_t  *p_rrc_oam_cell_traffic_trace_start_error_ind,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_trace_file_transfer_start_ind
(
    rrc_oam_trace_file_transfer_start_ind_t  *p_rrc_oam_trace_file_transfer_start_ind,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_trace_file_transfer_complete_ind
(
    rrc_oam_trace_file_transfer_complete_ind_t  *p_rrc_oam_trace_file_transfer_complete_ind,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_trace_start_error_ind
(
    rrc_oam_trace_start_error_ind_t  *p_rrc_oam_trace_start_error_ind,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_add_lgw_req
(
    rrc_oam_add_lgw_req_t  *p_rrc_oam_add_lgw_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_add_lgw_resp
(
    rrc_oam_add_lgw_resp_t  *p_rrc_oam_add_lgw_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_delete_lgw_req
(
    rrc_oam_delete_lgw_req_t  *p_rrc_oam_delete_lgw_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_delete_lgw_resp
(
    rrc_oam_delete_lgw_resp_t  *p_rrc_oam_delete_lgw_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_get_debug_info_req
(
    rrc_oam_get_debug_info_req_t  *p_rrc_oam_get_debug_info_req,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

rrc_return_et
rrc_oam_il_send_rrc_oam_get_debug_info_resp
(
    rrc_oam_get_debug_info_resp_t  *p_rrc_oam_get_debug_info_resp,
    U16                 src_module_id,
    U16                 dst_module_id,
    U16                 transaction_id,
    U8                  cell_index
);

#endif /* _RRC_OAM_IL_COMPOSER_H_ */
