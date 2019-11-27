/******************************************************************************
*   FILE NAME    : oam_enb_mib_scalars.h
*
*   DESCRIPTION  : SNMP Agent Init MIB(this file originally auto-generated by mib2c)
*
*       DATE            AUTHOR          REFERENCE       REASON
*   25 July 2013   Purshottam Gupta     ---------       Initial
*   28 May 2014    Avnish				SPR FIX 10257   Code changes
*   Copyright (c) 2013, Aricent Inc. All Rights Reserved
*
******************************************************************************/
/*
 * Note: this file originally auto-generated by mib2c using
 *        $
 */
#ifndef OAM_ENB_MIB_SCALARS_H
#define OAM_ENB_MIB_SCALARS_H


#define     ENBCTRLCELLACTION_INDEX                                     257
#define     ENBSWUPDATEACTION_INDEX                                     258
#define     ENBSWIMAGEFILE_INDEX                                        259


#define     ENBCTRLCELLACTION_NOACTION                                    0
#define     ENBCTRLCELLACTION_DELETE                                      1
#define     ENBCTRLCELLACTION_CELLSETUP                                   2
#define     ENBCTRLCELLACTION_CELLSTOP                                    3
#define     ENBCTRLCELLACTION_CELLSTART                                   4
#define     ENBCTRLCELLACTION_CELLBLOCK                                   5
#define     ENBCTRLCELLACTION_CELLUNBLOCK                                 6


#define     ENBSWUPDATEACTION_NOACTION                                    0
#define     ENBSWUPDATEACTION_DOWNLOAD                                    1
#define     ENBSWUPDATEACTION_SWITCH                                      2

#define     ENB_CONFIGURED_CID                                            373
/*
 * function declarations 
 */
void            init_oam_enb_mib_scalars(void);
Netsnmp_Node_Handler handle_manufacturer;
Netsnmp_Node_Handler handle_manufacturerOUI;
Netsnmp_Node_Handler handle_modelName;
Netsnmp_Node_Handler handle_description;
Netsnmp_Node_Handler handle_productClass;
Netsnmp_Node_Handler handle_serialNumber;
Netsnmp_Node_Handler handle_hardwareVersion;
Netsnmp_Node_Handler handle_softwareVersion;
Netsnmp_Node_Handler handle_modemFirmwareVersion;
Netsnmp_Node_Handler handle_additionalSoftwareVersion;
Netsnmp_Node_Handler handle_upTime;
Netsnmp_Node_Handler handle_firstUseDate;
Netsnmp_Node_Handler handle_configNumberOfEntries;
Netsnmp_Node_Handler handle_url;
Netsnmp_Node_Handler handle_userName;
Netsnmp_Node_Handler handle_password;
Netsnmp_Node_Handler handle_periodicUploadInterval;
Netsnmp_Node_Handler handle_periodicUploadTime;
Netsnmp_Node_Handler handle_fileWriteTimer;
Netsnmp_Node_Handler handle_samplingIntervalTimer;
Netsnmp_Node_Handler handle_enbServiceNumberOfEntries;
Netsnmp_Node_Handler handle_deviceType;
Netsnmp_Node_Handler handle_dnPrefix;
Netsnmp_Node_Handler handle_gpsEquipped;
Netsnmp_Node_Handler handle_maxTxPower;
Netsnmp_Node_Handler handle_supportedSystems;
Netsnmp_Node_Handler handle_beacon;
Netsnmp_Node_Handler handle_duplexMode;
Netsnmp_Node_Handler handle_bandsSupported;
Netsnmp_Node_Handler handle_nnsfSupported;
Netsnmp_Node_Handler handle_umtsRxSupported;
Netsnmp_Node_Handler handle_umtsRxBandsSupported;
Netsnmp_Node_Handler handle_gsmRxSupported;
Netsnmp_Node_Handler handle_gsmRxBandsSupported;
Netsnmp_Node_Handler handle_cdma2000RxSupported;
Netsnmp_Node_Handler handle_cdma2000RxBandsSupported;
Netsnmp_Node_Handler handle_opState;
Netsnmp_Node_Handler handle_adminState;
Netsnmp_Node_Handler handle_rfTxStatus;
/*SPR 10257 FIX start*/
Netsnmp_Node_Handler handle_secGWServer1;
Netsnmp_Node_Handler handle_secGWServer2;
Netsnmp_Node_Handler handle_secGWServer3;
/*SPR 10257 FIX end*/

Netsnmp_Node_Handler handle_s1SigLinkServerList;
Netsnmp_Node_Handler handle_s1SigLinkPort;
Netsnmp_Node_Handler handle_enbCtrlCellAction;
Netsnmp_Node_Handler handle_accessMode;
Netsnmp_Node_Handler handle_maxUEsServed;
Netsnmp_Node_Handler handle_maxCSGMembers;
Netsnmp_Node_Handler handle_maxNonCSGMembers;
Netsnmp_Node_Handler handle_csgid;
Netsnmp_Node_Handler handle_hnbName;
Netsnmp_Node_Handler handle_allowedCipheringAlgorithmList;
Netsnmp_Node_Handler handle_allowedIntegrityProtectionAlgorithmList;
Netsnmp_Node_Handler handle_tac;
Netsnmp_Node_Handler handle_eaid;
Netsnmp_Node_Handler handle_maxPLMNListEntries;
Netsnmp_Node_Handler handle_plmnListNumberOfEntries;
Netsnmp_Node_Handler handle_qoSNumberOfEntries;
Netsnmp_Node_Handler handle_cellIdentity;
Netsnmp_Node_Handler handle_tRelocPrep;
Netsnmp_Node_Handler handle_tRelocOverall;
Netsnmp_Node_Handler handle_earfcnDL;
Netsnmp_Node_Handler handle_earfcnUL;
Netsnmp_Node_Handler handle_freqBandIndicator;
Netsnmp_Node_Handler handle_dlBandwidth;
Netsnmp_Node_Handler handle_ulBandwidth;
Netsnmp_Node_Handler handle_referenceSignalPower;
Netsnmp_Node_Handler handle_rfPhyCellID;
Netsnmp_Node_Handler handle_pschPowerOffset;
Netsnmp_Node_Handler handle_sschPowerOffset;
Netsnmp_Node_Handler handle_pbchPowerOffset;
Netsnmp_Node_Handler handle_antennaPortsCount;
Netsnmp_Node_Handler handle_pb;
Netsnmp_Node_Handler handle_pa;
Netsnmp_Node_Handler handle_srsEnabled;
Netsnmp_Node_Handler handle_srsBandwidthConfig;
Netsnmp_Node_Handler handle_srsMaxUpPTS;
Netsnmp_Node_Handler handle_ackNackSRSSimultaneousTransmission;
Netsnmp_Node_Handler handle_rootSequenceIndex;
Netsnmp_Node_Handler handle_configurationIndex;
Netsnmp_Node_Handler handle_highSpeedFlag;
Netsnmp_Node_Handler handle_zeroCorrelationZoneConfig;
Netsnmp_Node_Handler handle_freqOffset;
Netsnmp_Node_Handler handle_deltaPUCCHShift;
Netsnmp_Node_Handler handle_nrbcqi;
Netsnmp_Node_Handler handle_ncsan;
Netsnmp_Node_Handler handle_n1PUCCHAN;
/* SPR 22311 Changes - Obselete Parameter Deleted */
Netsnmp_Node_Handler handle_nsb;
Netsnmp_Node_Handler handle_hoppingMode;
Netsnmp_Node_Handler handle_hoppingOffset;
Netsnmp_Node_Handler handle_enable64QAM;
Netsnmp_Node_Handler handle_groupHoppingEnabled;
Netsnmp_Node_Handler handle_groupAssignmentPUSCH;
Netsnmp_Node_Handler handle_sequenceHoppingEnabled;
Netsnmp_Node_Handler handle_cyclicShift;
Netsnmp_Node_Handler handle_p0NominalPUSCH;
Netsnmp_Node_Handler handle_alpha;
Netsnmp_Node_Handler handle_p0NominalPUCCH;
Netsnmp_Node_Handler handle_deltaFPUCCHFormat1;
Netsnmp_Node_Handler handle_deltaFPUCCHFormat1b;
Netsnmp_Node_Handler handle_deltaFPUCCHFormat2;
Netsnmp_Node_Handler handle_deltaFPUCCHFormat2a;
Netsnmp_Node_Handler handle_deltaFPUCCHFormat2b;
Netsnmp_Node_Handler handle_deltaPreambleMsg3;
Netsnmp_Node_Handler handle_neighCellConfig;
Netsnmp_Node_Handler handle_maxSFConfigListEntries;
Netsnmp_Node_Handler handle_sfConfigListNumberOfEntries;
Netsnmp_Node_Handler handle_numPRSResourceBlocks;
Netsnmp_Node_Handler handle_prsConfigurationIndex;
Netsnmp_Node_Handler handle_numConsecutivePRSSubframes;
Netsnmp_Node_Handler handle_subFrameAssignment;
Netsnmp_Node_Handler handle_specialSubframePatterns;
Netsnmp_Node_Handler handle_numberOfRaPreambles;
Netsnmp_Node_Handler handle_sizeOfRaGroupA;
Netsnmp_Node_Handler handle_messageSizeGroupA;
Netsnmp_Node_Handler handle_messagePowerOffsetGroupB;
Netsnmp_Node_Handler handle_powerRampingStep;
Netsnmp_Node_Handler handle_preambleInitialReceivedTargetPower;
Netsnmp_Node_Handler handle_preambleTransMax;
Netsnmp_Node_Handler handle_responseWindowSize;
Netsnmp_Node_Handler handle_contentionResolutionTimer;
Netsnmp_Node_Handler handle_maxHARQMsg3Tx;
Netsnmp_Node_Handler handle_drxEnabled;
Netsnmp_Node_Handler handle_onDurationTimer;
Netsnmp_Node_Handler handle_drxInactivityTimer;
Netsnmp_Node_Handler handle_drxRetransmissionTimer;
Netsnmp_Node_Handler handle_longDRXCycle;
Netsnmp_Node_Handler handle_drxStartOffset;
Netsnmp_Node_Handler handle_shortDRXCycle;
Netsnmp_Node_Handler handle_drxShortCycleTimer;
Netsnmp_Node_Handler handle_srb1DefaultConfiguration;
Netsnmp_Node_Handler handle_srb1TPollRetransmit;
Netsnmp_Node_Handler handle_srb1PollPDU;
Netsnmp_Node_Handler handle_srb1PollByte;
Netsnmp_Node_Handler handle_srb1MaxRetxThreshold;
Netsnmp_Node_Handler handle_srb1TReordering;
Netsnmp_Node_Handler handle_srb1TStatusProhibit;
Netsnmp_Node_Handler handle_srb2DefaultConfiguration;
Netsnmp_Node_Handler handle_srb2TPollRetransmit;
Netsnmp_Node_Handler handle_srb2PollPDU;
Netsnmp_Node_Handler handle_srb2PollByte;
Netsnmp_Node_Handler handle_srb2MaxRetxThreshold;
Netsnmp_Node_Handler handle_srb2TReordering;
Netsnmp_Node_Handler handle_srb2TStatusProhibit;
Netsnmp_Node_Handler handle_t300;
Netsnmp_Node_Handler handle_t301;
Netsnmp_Node_Handler handle_t302;
Netsnmp_Node_Handler handle_t304EUTRA;
Netsnmp_Node_Handler handle_t304IRAT;
Netsnmp_Node_Handler handle_t310;
Netsnmp_Node_Handler handle_t311;
Netsnmp_Node_Handler handle_t320;
Netsnmp_Node_Handler handle_n310;
Netsnmp_Node_Handler handle_n311;
Netsnmp_Node_Handler handle_cellBarred;
Netsnmp_Node_Handler handle_cellRestrictionCellReservedForOperatorUse;
Netsnmp_Node_Handler handle_barringForEmergency;
Netsnmp_Node_Handler handle_qHyst;
Netsnmp_Node_Handler handle_qHystSFMedium;
Netsnmp_Node_Handler handle_qHystSFHigh;
Netsnmp_Node_Handler handle_tEvaluation;
Netsnmp_Node_Handler handle_tHystNormal;
Netsnmp_Node_Handler handle_nCellChangeMedium;
Netsnmp_Node_Handler handle_nCellChangeHigh;
Netsnmp_Node_Handler handle_qRxLevMinSIB1;
Netsnmp_Node_Handler handle_qRxLevMinSIB3;
Netsnmp_Node_Handler handle_qRxLevMinOffset;
Netsnmp_Node_Handler handle_sIntraSearch;
Netsnmp_Node_Handler handle_idleModeIntraFreqTReselectionEUTRA;
Netsnmp_Node_Handler handle_sNonIntraSearch;
Netsnmp_Node_Handler handle_idleModeIntraFreqCellReselectionPriority;
Netsnmp_Node_Handler handle_threshServingLow;
Netsnmp_Node_Handler handle_intraFreqTReselectionEUTRASFMedium;
Netsnmp_Node_Handler handle_intraFreqTReselectionEUTRASFHigh;
Netsnmp_Node_Handler handle_maxCarrierEntries;
Netsnmp_Node_Handler handle_carrierNumberOfEntries;
Netsnmp_Node_Handler handle_tReselectionUTRA;
Netsnmp_Node_Handler handle_tReselectionUTRASFMedium;
Netsnmp_Node_Handler handle_maxCarrierEntries;
Netsnmp_Node_Handler handle_availabilityStatus;
Netsnmp_Node_Handler handle_enbSWUpdateAction;
Netsnmp_Node_Handler handle_enbSWImageFile;
Netsnmp_Node_Handler handle_enbConfiguredCID;
Netsnmp_Node_Handler handle_enbCurrentCID;
Netsnmp_Node_Handler handle_tReselectionUTRASFHigh;
Netsnmp_Node_Handler handle_utranFDDFreqNumberOfEntries;
Netsnmp_Node_Handler handle_filterCoefficientRSRP;
Netsnmp_Node_Handler handle_filterCoefficientRSRQ;
Netsnmp_Node_Handler handle_a1ThresholdRSRP;
Netsnmp_Node_Handler handle_a1ThresholdRSRQ;
Netsnmp_Node_Handler handle_a2ThresholdRSRP;
Netsnmp_Node_Handler handle_a2ThresholdRSRQ;
Netsnmp_Node_Handler handle_a3Offset;
Netsnmp_Node_Handler handle_reportOnLeave;
Netsnmp_Node_Handler handle_a4ThresholdRSRP;
Netsnmp_Node_Handler handle_a4ThresholdRSRQ;
Netsnmp_Node_Handler handle_a5Threshold1RSRP;
Netsnmp_Node_Handler handle_a5Threshold1RSRQ;
Netsnmp_Node_Handler handle_a5Threshold2RSRP;
Netsnmp_Node_Handler handle_a5Threshold2RSRQ;
Netsnmp_Node_Handler handle_eutraHysteresis;
Netsnmp_Node_Handler handle_eutraTimeToTrigger;
Netsnmp_Node_Handler handle_triggerQuantity;
Netsnmp_Node_Handler handle_reportQuantity;
Netsnmp_Node_Handler handle_eutraReportInterval;
Netsnmp_Node_Handler handle_eutraReportAmount;
Netsnmp_Node_Handler handle_qOffsettUTRA;
Netsnmp_Node_Handler handle_filterCoefficientUTRA;
Netsnmp_Node_Handler handle_measQuantityUTRAFDD;
Netsnmp_Node_Handler handle_b1ThresholdUTRARSCP;
Netsnmp_Node_Handler handle_b1ThresholdUTRAEcN0;
Netsnmp_Node_Handler handle_qoffsetGERAN;
Netsnmp_Node_Handler handle_filterCoefficientGERAN;
Netsnmp_Node_Handler handle_b1ThresholdGERAN;
Netsnmp_Node_Handler handle_qoffsetCDMA2000;
Netsnmp_Node_Handler handle_measQuantityCDMA2000;
Netsnmp_Node_Handler handle_b1ThresholdCDMA2000;
Netsnmp_Node_Handler handle_b2Threshold2UTRARSCP;
Netsnmp_Node_Handler handle_b2Threshold2UTRAEcN0;
Netsnmp_Node_Handler handle_b2Threshold2GERAN;
Netsnmp_Node_Handler handle_b2Threshold2CDMA2000;
Netsnmp_Node_Handler handle_iratHysteresis;
Netsnmp_Node_Handler handle_iratTimeToTrigger;
Netsnmp_Node_Handler handle_maxReportCells;
Netsnmp_Node_Handler handle_iratReportInterval;
Netsnmp_Node_Handler handle_iratReportAmount;
Netsnmp_Node_Handler handle_neighborListMaxLTECellEntries;
Netsnmp_Node_Handler handle_neighborListLTECellNumberOfEntries;
Netsnmp_Node_Handler handle_neighborListMaxUMTSEntries;
Netsnmp_Node_Handler handle_neighborListUMTSNumberOfEntries;
Netsnmp_Node_Handler handle_neighborListInUseMaxLTECellEntries;
Netsnmp_Node_Handler handle_neighborListInUseLTECellNumberOfEntries;
Netsnmp_Node_Handler handle_neighborListInUseMaxUMTSEntries;
Netsnmp_Node_Handler handle_neighborListInUseUMTSNumberOfEntries;
/*SPR 14225 start*/
Netsnmp_Node_Handler handle_eICICProvisionType;
Netsnmp_Node_Handler handle_numAbsReport;
Netsnmp_Node_Handler handle_absUsageLowThreshold;
Netsnmp_Node_Handler handle_absUsageHighThreshold;
Netsnmp_Node_Handler handle_lowLoadAbsPattern;
Netsnmp_Node_Handler handle_victimAbsPattern;
Netsnmp_Node_Handler handle_victimMeasSubset;
Netsnmp_Node_Handler handle_eligibleUe;
Netsnmp_Node_Handler handle_macEicicMeasReportPeriodicity;
Netsnmp_Node_Handler handle_aggressorSelTimer;
Netsnmp_Node_Handler handle_loadInformationGuardTimer;
Netsnmp_Node_Handler handle_loadInformationCollationTimer;
Netsnmp_Node_Handler handle_dlSinrThreshLowMark;
Netsnmp_Node_Handler handle_dlSinrThreshHighMark;
/*SPR 14225 end*/
Netsnmp_Node_Handler handle_sctpEnable;
Netsnmp_Node_Handler handle_hbInterval;
Netsnmp_Node_Handler handle_maxAssociationRetransmits;
Netsnmp_Node_Handler handle_maxPathRetransmits;
Netsnmp_Node_Handler handle_rTOInitial;
Netsnmp_Node_Handler handle_rTOMax;
Netsnmp_Node_Handler handle_rTOMin;
Netsnmp_Node_Handler handle_valCookieLife;
Netsnmp_Node_Handler handle_supportedAlarmNumberOfEntries;
Netsnmp_Node_Handler handle_maxCurrentAlarmEntries;
Netsnmp_Node_Handler handle_currentAlarmNumberOfEntries;
Netsnmp_Node_Handler handle_historyEventNumberOfEntries;
Netsnmp_Node_Handler handle_expeditedEventNumberOfEntries;
Netsnmp_Node_Handler handle_queuedEventNumberOfEntries;

#endif                          /* OAM_ENB_MIB_SCALARS_H */