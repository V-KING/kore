
/*
 * Edit by liubaolong
 */
#include "ltkc.h"

/**
 * ParameterName: Status
 */
extern int 
Memcpy_Status(
LLRP_tSElement *pStatus_tobeset, 
LLRP_tSElement *pStatus);


/**
 * ParameterName: UTCTimestamp
 */
extern int 
Memcpy_UTCTimestamp(
LLRP_tSElement *pUTCTimestamp_tobeset, 
LLRP_tSElement *pUTCTimestamp);


/**
 * ParameterName: GPIEvent
 */
extern int 
Memcpy_GPIEvent(
LLRP_tSElement *pGPIEvent_tobeset, 
LLRP_tSElement *pGPIEvent);


/**
 * ParameterName: SelectSpecEvent
 */
extern int 
Memcpy_SelectSpecEvent(
LLRP_tSElement *pSelectSpecEvent_tobeset, 
LLRP_tSElement *pSelectSpecEvent);


/**
 * ParameterName: AntennaSpecEvent
 */
extern int 
Memcpy_AntennaSpecEvent(
LLRP_tSElement *pAntennaSpecEvent_tobeset, 
LLRP_tSElement *pAntennaSpecEvent);


/**
 * ParameterName: AntennaStatusEvent
 */
extern int 
Memcpy_AntennaStatusEvent(
LLRP_tSElement *pAntennaStatusEvent_tobeset, 
LLRP_tSElement *pAntennaStatusEvent);


/**
 * ParameterName: ConnectionAttemptEvent
 */
extern int 
Memcpy_ConnectionAttemptEvent(
LLRP_tSElement *pConnectionAttemptEvent_tobeset, 
LLRP_tSElement *pConnectionAttemptEvent);


/**
 * ParameterName: GenaralCapabilities
 */
extern int 
Memcpy_GenaralCapabilities(
LLRP_tSElement *pGenaralCapabilities_tobeset, 
LLRP_tSElement *pGenaralCapabilities);


/**
 * ParameterName: GPIOCapabilities
 */
extern int 
Memcpy_GPIOCapabilities(
LLRP_tSElement *pGPIOCapabilities_tobeset, 
LLRP_tSElement *pGPIOCapabilities);


/**
 * ParameterName: CommunicationCapabilities
 */
extern int 
Memcpy_CommunicationCapabilities(
LLRP_tSElement *pCommunicationCapabilities_tobeset, 
LLRP_tSElement *pCommunicationCapabilities);


/**
 * ParameterName: SupportRS232
 */
extern int 
Memcpy_SupportRS232(
LLRP_tSElement *pSupportRS232_tobeset, 
LLRP_tSElement *pSupportRS232);


/**
 * ParameterName: SerialAttribute
 */
extern int 
Memcpy_SerialAttribute(
LLRP_tSElement *pSerialAttribute_tobeset, 
LLRP_tSElement *pSerialAttribute);


/**
 * ParameterName: SupportRS485
 */
extern int 
Memcpy_SupportRS485(
LLRP_tSElement *pSupportRS485_tobeset, 
LLRP_tSElement *pSupportRS485);


/**
 * ParameterName: SpecCapabilities
 */
extern int 
Memcpy_SpecCapabilities(
LLRP_tSElement *pSpecCapabilities_tobeset, 
LLRP_tSElement *pSpecCapabilities);


/**
 * ParameterName: RfCapabilities
 */
extern int 
Memcpy_RfCapabilities(
LLRP_tSElement *pRfCapabilities_tobeset, 
LLRP_tSElement *pRfCapabilities);


/**
 * ParameterName: TransmitPowerLevelTable
 */
extern int 
Memcpy_TransmitPowerLevelTable(
LLRP_tSElement *pTransmitPowerLevelTable_tobeset, 
LLRP_tSElement *pTransmitPowerLevelTable);


/**
 * ParameterName: FrequencyInformation
 */
extern int 
Memcpy_FrequencyInformation(
LLRP_tSElement *pFrequencyInformation_tobeset, 
LLRP_tSElement *pFrequencyInformation);


/**
 * ParameterName: FrequencyTable
 */
extern int 
Memcpy_FrequencyTable(
LLRP_tSElement *pFrequencyTable_tobeset, 
LLRP_tSElement *pFrequencyTable);


/**
 * ParameterName: ForDataRateTable
 */
extern int 
Memcpy_ForDataRateTable(
LLRP_tSElement *pForDataRateTable_tobeset, 
LLRP_tSElement *pForDataRateTable);


/**
 * ParameterName: RevDataRateTable
 */
extern int 
Memcpy_RevDataRateTable(
LLRP_tSElement *pRevDataRateTable_tobeset, 
LLRP_tSElement *pRevDataRateTable);


/**
 * ParameterName: ForModulationTable
 */
extern int 
Memcpy_ForModulationTable(
LLRP_tSElement *pForModulationTable_tobeset, 
LLRP_tSElement *pForModulationTable);


/**
 * ParameterName: RevDataEncodingTable
 */
extern int 
Memcpy_RevDataEncodingTable(
LLRP_tSElement *pRevDataEncodingTable_tobeset, 
LLRP_tSElement *pRevDataEncodingTable);


/**
 * ParameterName: ModuleDepthTable
 */
extern int 
Memcpy_ModuleDepthTable(
LLRP_tSElement *pModuleDepthTable_tobeset, 
LLRP_tSElement *pModuleDepthTable);


/**
 * ParameterName: AirProtocolCapabilities
 */
extern int 
Memcpy_AirProtocolCapabilities(
LLRP_tSElement *pAirProtocolCapabilities_tobeset, 
LLRP_tSElement *pAirProtocolCapabilities);


/**
 * ParameterName: PerAntennaAirProtocol
 */
extern int 
Memcpy_PerAntennaAirProtocol(
LLRP_tSElement *pPerAntennaAirProtocol_tobeset, 
LLRP_tSElement *pPerAntennaAirProtocol);


/**
 * ParameterName: HbProtocolCapabilities
 */
extern int 
Memcpy_HbProtocolCapabilities(
LLRP_tSElement *pHbProtocolCapabilities_tobeset, 
LLRP_tSElement *pHbProtocolCapabilities);


/**
 * ParameterName: SelectSpec
 */
extern int 
Memcpy_SelectSpec(
LLRP_tSElement *pSelectSpec_tobeset, 
LLRP_tSElement *pSelectSpec);


/**
 * ParameterName: SelectSpecStartTrigger
 */
extern int 
Memcpy_SelectSpecStartTrigger(
LLRP_tSElement *pSelectSpecStartTrigger_tobeset, 
LLRP_tSElement *pSelectSpecStartTrigger);


/**
 * ParameterName: PeriodicTrigger
 */
extern int 
Memcpy_PeriodicTrigger(
LLRP_tSElement *pPeriodicTrigger_tobeset, 
LLRP_tSElement *pPeriodicTrigger);


/**
 * ParameterName: GPITrigger
 */
extern int 
Memcpy_GPITrigger(
LLRP_tSElement *pGPITrigger_tobeset, 
LLRP_tSElement *pGPITrigger);


/**
 * ParameterName: SelectSpecStopTrigger
 */
extern int 
Memcpy_SelectSpecStopTrigger(
LLRP_tSElement *pSelectSpecStopTrigger_tobeset, 
LLRP_tSElement *pSelectSpecStopTrigger);


/**
 * ParameterName: AntennaSpec
 */
extern int 
Memcpy_AntennaSpec(
LLRP_tSElement *pAntennaSpec_tobeset, 
LLRP_tSElement *pAntennaSpec);


/**
 * ParameterName: AntennaSpecStopTrigger
 */
extern int 
Memcpy_AntennaSpecStopTrigger(
LLRP_tSElement *pAntennaSpecStopTrigger_tobeset, 
LLRP_tSElement *pAntennaSpecStopTrigger);


/**
 * ParameterName: TagObservationTrigger
 */
extern int 
Memcpy_TagObservationTrigger(
LLRP_tSElement *pTagObservationTrigger_tobeset, 
LLRP_tSElement *pTagObservationTrigger);


/**
 * ParameterName: RfSpec
 */
extern int 
Memcpy_RfSpec(
LLRP_tSElement *pRfSpec_tobeset, 
LLRP_tSElement *pRfSpec);


/**
 * ParameterName: MemoryBank
 */
extern int 
Memcpy_MemoryBank(
LLRP_tSElement *pMemoryBank_tobeset, 
LLRP_tSElement *pMemoryBank);


/**
 * ParameterName: SelectReportSpec
 */
extern int 
Memcpy_SelectReportSpec(
LLRP_tSElement *pSelectReportSpec_tobeset, 
LLRP_tSElement *pSelectReportSpec);


/**
 * ParameterName: ReportDestination
 */
extern int 
Memcpy_ReportDestination(
LLRP_tSElement *pReportDestination_tobeset, 
LLRP_tSElement *pReportDestination);


/**
 * ParameterName: AccessSpec
 */
extern int 
Memcpy_AccessSpec(
LLRP_tSElement *pAccessSpec_tobeset, 
LLRP_tSElement *pAccessSpec);


/**
 * ParameterName: AccessSpecStopTrigger
 */
extern int 
Memcpy_AccessSpecStopTrigger(
LLRP_tSElement *pAccessSpecStopTrigger_tobeset, 
LLRP_tSElement *pAccessSpecStopTrigger);


/**
 * ParameterName: AccessCommand
 */
extern int 
Memcpy_AccessCommand(
LLRP_tSElement *pAccessCommand_tobeset, 
LLRP_tSElement *pAccessCommand);


/**
 * ParameterName: SecurityModuleSpec
 */
extern int 
Memcpy_SecurityModuleSpec(
LLRP_tSElement *pSecurityModuleSpec_tobeset, 
LLRP_tSElement *pSecurityModuleSpec);


/**
 * ParameterName: HbMatchSpec
 */
extern int 
Memcpy_HbMatchSpec(
LLRP_tSElement *pHbMatchSpec_tobeset, 
LLRP_tSElement *pHbMatchSpec);


/**
 * ParameterName: HbTargetTag
 */
extern int 
Memcpy_HbTargetTag(
LLRP_tSElement *pHbTargetTag_tobeset, 
LLRP_tSElement *pHbTargetTag);


/**
 * ParameterName: HbReadSpec
 */
extern int 
Memcpy_HbReadSpec(
LLRP_tSElement *pHbReadSpec_tobeset, 
LLRP_tSElement *pHbReadSpec);


/**
 * ParameterName: ClientRequestSpec
 */
extern int 
Memcpy_ClientRequestSpec(
LLRP_tSElement *pClientRequestSpec_tobeset, 
LLRP_tSElement *pClientRequestSpec);


/**
 * ParameterName: AccessReportSpec
 */
extern int 
Memcpy_AccessReportSpec(
LLRP_tSElement *pAccessReportSpec_tobeset, 
LLRP_tSElement *pAccessReportSpec);


/**
 * ParameterName: HbWriteSpec
 */
extern int 
Memcpy_HbWriteSpec(
LLRP_tSElement *pHbWriteSpec_tobeset, 
LLRP_tSElement *pHbWriteSpec);


/**
 * ParameterName: HbPrivateWriteSpec
 */
extern int 
Memcpy_HbPrivateWriteSpec(
LLRP_tSElement *pHbPrivateWriteSpec_tobeset, 
LLRP_tSElement *pHbPrivateWriteSpec);


/**
 * ParameterName: TagReportData
 */
extern int 
Memcpy_TagReportData(
LLRP_tSElement *pTagReportData_tobeset, 
LLRP_tSElement *pTagReportData);


/**
 * ParameterName: SelectSpecID
 */
extern int 
Memcpy_SelectSpecID(
LLRP_tSElement *pSelectSpecID_tobeset, 
LLRP_tSElement *pSelectSpecID);


/**
 * ParameterName: SpecIndex
 */
extern int 
Memcpy_SpecIndex(
LLRP_tSElement *pSpecIndex_tobeset, 
LLRP_tSElement *pSpecIndex);


/**
 * ParameterName: RfSpecID
 */
extern int 
Memcpy_RfSpecID(
LLRP_tSElement *pRfSpecID_tobeset, 
LLRP_tSElement *pRfSpecID);


/**
 * ParameterName: AntennaID
 */
extern int 
Memcpy_AntennaID(
LLRP_tSElement *pAntennaID_tobeset, 
LLRP_tSElement *pAntennaID);


/**
 * ParameterName: PeakRSSI
 */
extern int 
Memcpy_PeakRSSI(
LLRP_tSElement *pPeakRSSI_tobeset, 
LLRP_tSElement *pPeakRSSI);


/**
 * ParameterName: FirstSeenTimestampUTC
 */
extern int 
Memcpy_FirstSeenTimestampUTC(
LLRP_tSElement *pFirstSeenTimestampUTC_tobeset, 
LLRP_tSElement *pFirstSeenTimestampUTC);


/**
 * ParameterName: LastSeenTimestampUTC
 */
extern int 
Memcpy_LastSeenTimestampUTC(
LLRP_tSElement *pLastSeenTimestampUTC_tobeset, 
LLRP_tSElement *pLastSeenTimestampUTC);


/**
 * ParameterName: TagSeenCount
 */
extern int 
Memcpy_TagSeenCount(
LLRP_tSElement *pTagSeenCount_tobeset, 
LLRP_tSElement *pTagSeenCount);


/**
 * ParameterName: AccessSpecID
 */
extern int 
Memcpy_AccessSpecID(
LLRP_tSElement *pAccessSpecID_tobeset, 
LLRP_tSElement *pAccessSpecID);


/**
 * ParameterName: GenaralSelectSpecResult
 */
extern int 
Memcpy_GenaralSelectSpecResult(
LLRP_tSElement *pGenaralSelectSpecResult_tobeset, 
LLRP_tSElement *pGenaralSelectSpecResult);


/**
 * ParameterName: CustomizedSelectSpecResult
 */
extern int 
Memcpy_CustomizedSelectSpecResult(
LLRP_tSElement *pCustomizedSelectSpecResult_tobeset, 
LLRP_tSElement *pCustomizedSelectSpecResult);


/**
 * ParameterName: HbReadSpecResult
 */
extern int 
Memcpy_HbReadSpecResult(
LLRP_tSElement *pHbReadSpecResult_tobeset, 
LLRP_tSElement *pHbReadSpecResult);


/**
 * ParameterName: ClientRequestSpecResult
 */
extern int 
Memcpy_ClientRequestSpecResult(
LLRP_tSElement *pClientRequestSpecResult_tobeset, 
LLRP_tSElement *pClientRequestSpecResult);


/**
 * ParameterName: HbWriteSpecResult
 */
extern int 
Memcpy_HbWriteSpecResult(
LLRP_tSElement *pHbWriteSpecResult_tobeset, 
LLRP_tSElement *pHbWriteSpecResult);


/**
 * ParameterName: HbPrivateWriteSpecResult
 */
extern int 
Memcpy_HbPrivateWriteSpecResult(
LLRP_tSElement *pHbPrivateWriteSpecResult_tobeset, 
LLRP_tSElement *pHbPrivateWriteSpecResult);


/**
 * ParameterName: HbCustomizedReadSpecResult
 */
extern int 
Memcpy_HbCustomizedReadSpecResult(
LLRP_tSElement *pHbCustomizedReadSpecResult_tobeset, 
LLRP_tSElement *pHbCustomizedReadSpecResult);


/**
 * ParameterName: ReadDataInfo
 */
extern int 
Memcpy_ReadDataInfo(
LLRP_tSElement *pReadDataInfo_tobeset, 
LLRP_tSElement *pReadDataInfo);


/**
 * ParameterName: CID
 */
extern int 
Memcpy_CID(
LLRP_tSElement *pCID_tobeset, 
LLRP_tSElement *pCID);


/**
 * ParameterName: FPDH
 */
extern int 
Memcpy_FPDH(
LLRP_tSElement *pFPDH_tobeset, 
LLRP_tSElement *pFPDH);


/**
 * ParameterName: SYXZ
 */
extern int 
Memcpy_SYXZ(
LLRP_tSElement *pSYXZ_tobeset, 
LLRP_tSElement *pSYXZ);


/**
 * ParameterName: CCRQ
 */
extern int 
Memcpy_CCRQ(
LLRP_tSElement *pCCRQ_tobeset, 
LLRP_tSElement *pCCRQ);


/**
 * ParameterName: CLLX
 */
extern int 
Memcpy_CLLX(
LLRP_tSElement *pCLLX_tobeset, 
LLRP_tSElement *pCLLX);


/**
 * ParameterName: GL
 */
extern int 
Memcpy_GL(
LLRP_tSElement *pGL_tobeset, 
LLRP_tSElement *pGL);


/**
 * ParameterName: PL
 */
extern int 
Memcpy_PL(
LLRP_tSElement *pPL_tobeset, 
LLRP_tSElement *pPL);


/**
 * ParameterName: HPZL
 */
extern int 
Memcpy_HPZL(
LLRP_tSElement *pHPZL_tobeset, 
LLRP_tSElement *pHPZL);


/**
 * ParameterName: HPHMXH
 */
extern int 
Memcpy_HPHMXH(
LLRP_tSElement *pHPHMXH_tobeset, 
LLRP_tSElement *pHPHMXH);


/**
 * ParameterName: JYYXQ
 */
extern int 
Memcpy_JYYXQ(
LLRP_tSElement *pJYYXQ_tobeset, 
LLRP_tSElement *pJYYXQ);


/**
 * ParameterName: QZBFQ
 */
extern int 
Memcpy_QZBFQ(
LLRP_tSElement *pQZBFQ_tobeset, 
LLRP_tSElement *pQZBFQ);


/**
 * ParameterName: ZKZL
 */
extern int 
Memcpy_ZKZL(
LLRP_tSElement *pZKZL_tobeset, 
LLRP_tSElement *pZKZL);


/**
 * ParameterName: CSYS
 */
extern int 
Memcpy_CSYS(
LLRP_tSElement *pCSYS_tobeset, 
LLRP_tSElement *pCSYS);


/**
 * ParameterName: ClientRequestAck
 */
extern int 
Memcpy_ClientRequestAck(
LLRP_tSElement *pClientRequestAck_tobeset, 
LLRP_tSElement *pClientRequestAck);


/**
 * ParameterName: TagLog
 */
extern int 
Memcpy_TagLog(
LLRP_tSElement *pTagLog_tobeset, 
LLRP_tSElement *pTagLog);


/**
 * ParameterName: StartLogTimestamp
 */
extern int 
Memcpy_StartLogTimestamp(
LLRP_tSElement *pStartLogTimestamp_tobeset, 
LLRP_tSElement *pStartLogTimestamp);


/**
 * ParameterName: EndLogTimestamp
 */
extern int 
Memcpy_EndLogTimestamp(
LLRP_tSElement *pEndLogTimestamp_tobeset, 
LLRP_tSElement *pEndLogTimestamp);


/**
 * ParameterName: DeviceLog
 */
extern int 
Memcpy_DeviceLog(
LLRP_tSElement *pDeviceLog_tobeset, 
LLRP_tSElement *pDeviceLog);


/**
 * ParameterName: DeviceEventNotificationSpec
 */
extern int 
Memcpy_DeviceEventNotificationSpec(
LLRP_tSElement *pDeviceEventNotificationSpec_tobeset, 
LLRP_tSElement *pDeviceEventNotificationSpec);


/**
 * ParameterName: EventNotificationState
 */
extern int 
Memcpy_EventNotificationState(
LLRP_tSElement *pEventNotificationState_tobeset, 
LLRP_tSElement *pEventNotificationState);


/**
 * ParameterName: AntennaProperties
 */
extern int 
Memcpy_AntennaProperties(
LLRP_tSElement *pAntennaProperties_tobeset, 
LLRP_tSElement *pAntennaProperties);


/**
 * ParameterName: AntennaConfiguration
 */
extern int 
Memcpy_AntennaConfiguration(
LLRP_tSElement *pAntennaConfiguration_tobeset, 
LLRP_tSElement *pAntennaConfiguration);


/**
 * ParameterName: ModuleDepth
 */
extern int 
Memcpy_ModuleDepth(
LLRP_tSElement *pModuleDepth_tobeset, 
LLRP_tSElement *pModuleDepth);


/**
 * ParameterName: Identification
 */
extern int 
Memcpy_Identification(
LLRP_tSElement *pIdentification_tobeset, 
LLRP_tSElement *pIdentification);


/**
 * ParameterName: AlarmConfiguration
 */
extern int 
Memcpy_AlarmConfiguration(
LLRP_tSElement *pAlarmConfiguration_tobeset, 
LLRP_tSElement *pAlarmConfiguration);


/**
 * ParameterName: AlarmThreshod
 */
extern int 
Memcpy_AlarmThreshod(
LLRP_tSElement *pAlarmThreshod_tobeset, 
LLRP_tSElement *pAlarmThreshod);


/**
 * ParameterName: CommunicationConfiguration
 */
extern int 
Memcpy_CommunicationConfiguration(
LLRP_tSElement *pCommunicationConfiguration_tobeset, 
LLRP_tSElement *pCommunicationConfiguration);


/**
 * ParameterName: CommLinkConfiguration
 */
extern int 
Memcpy_CommLinkConfiguration(
LLRP_tSElement *pCommLinkConfiguration_tobeset, 
LLRP_tSElement *pCommLinkConfiguration);


/**
 * ParameterName: KeepaliveSpec
 */
extern int 
Memcpy_KeepaliveSpec(
LLRP_tSElement *pKeepaliveSpec_tobeset, 
LLRP_tSElement *pKeepaliveSpec);


/**
 * ParameterName: TcpLinkConfiguration
 */
extern int 
Memcpy_TcpLinkConfiguration(
LLRP_tSElement *pTcpLinkConfiguration_tobeset, 
LLRP_tSElement *pTcpLinkConfiguration);


/**
 * ParameterName: ClientModeConfiguration
 */
extern int 
Memcpy_ClientModeConfiguration(
LLRP_tSElement *pClientModeConfiguration_tobeset, 
LLRP_tSElement *pClientModeConfiguration);


/**
 * ParameterName: IPAddress
 */
extern int 
Memcpy_IPAddress(
LLRP_tSElement *pIPAddress_tobeset, 
LLRP_tSElement *pIPAddress);


/**
 * ParameterName: ServerModeConfiguration
 */
extern int 
Memcpy_ServerModeConfiguration(
LLRP_tSElement *pServerModeConfiguration_tobeset, 
LLRP_tSElement *pServerModeConfiguration);


/**
 * ParameterName: SerialLinkConfiguration
 */
extern int 
Memcpy_SerialLinkConfiguration(
LLRP_tSElement *pSerialLinkConfiguration_tobeset, 
LLRP_tSElement *pSerialLinkConfiguration);


/**
 * ParameterName: HttpLinkConfiguration
 */
extern int 
Memcpy_HttpLinkConfiguration(
LLRP_tSElement *pHttpLinkConfiguration_tobeset, 
LLRP_tSElement *pHttpLinkConfiguration);


/**
 * ParameterName: EthernetIpv4Configuration
 */
extern int 
Memcpy_EthernetIpv4Configuration(
LLRP_tSElement *pEthernetIpv4Configuration_tobeset, 
LLRP_tSElement *pEthernetIpv4Configuration);


/**
 * ParameterName: EthernetIpv6Configuration
 */
extern int 
Memcpy_EthernetIpv6Configuration(
LLRP_tSElement *pEthernetIpv6Configuration_tobeset, 
LLRP_tSElement *pEthernetIpv6Configuration);


/**
 * ParameterName: NTPConfiguration
 */
extern int 
Memcpy_NTPConfiguration(
LLRP_tSElement *pNTPConfiguration_tobeset, 
LLRP_tSElement *pNTPConfiguration);


/**
 * ParameterName: SerialPortConfiguration
 */
extern int 
Memcpy_SerialPortConfiguration(
LLRP_tSElement *pSerialPortConfiguration_tobeset, 
LLRP_tSElement *pSerialPortConfiguration);


/**
 * ParameterName: LocationConfiguration
 */
extern int 
Memcpy_LocationConfiguration(
LLRP_tSElement *pLocationConfiguration_tobeset, 
LLRP_tSElement *pLocationConfiguration);


/**
 * ParameterName: GpsLocation
 */
extern int 
Memcpy_GpsLocation(
LLRP_tSElement *pGpsLocation_tobeset, 
LLRP_tSElement *pGpsLocation);


/**
 * ParameterName: BdsLocation
 */
extern int 
Memcpy_BdsLocation(
LLRP_tSElement *pBdsLocation_tobeset, 
LLRP_tSElement *pBdsLocation);


/**
 * ParameterName: SecurityModuleConfiguration
 */
extern int 
Memcpy_SecurityModuleConfiguration(
LLRP_tSElement *pSecurityModuleConfiguration_tobeset, 
LLRP_tSElement *pSecurityModuleConfiguration);


/**
 * ParameterName: GenaralConfigData
 */
extern int 
Memcpy_GenaralConfigData(
LLRP_tSElement *pGenaralConfigData_tobeset, 
LLRP_tSElement *pGenaralConfigData);


/**
 * ParameterName: RTCTime
 */
extern int 
Memcpy_RTCTime(
LLRP_tSElement *pRTCTime_tobeset, 
LLRP_tSElement *pRTCTime);


/**
 * ParameterName: SecurityModuleSN
 */
extern int 
Memcpy_SecurityModuleSN(
LLRP_tSElement *pSecurityModuleSN_tobeset, 
LLRP_tSElement *pSecurityModuleSN);


/**
 * ParameterName: ReadMode
 */
extern int 
Memcpy_ReadMode(
LLRP_tSElement *pReadMode_tobeset, 
LLRP_tSElement *pReadMode);


/**
 * ParameterName: PrivateConfigData
 */
extern int 
Memcpy_PrivateConfigData(
LLRP_tSElement *pPrivateConfigData_tobeset, 
LLRP_tSElement *pPrivateConfigData);


/**
 * ParameterName: VersionInfo
 */
extern int 
Memcpy_VersionInfo(
LLRP_tSElement *pVersionInfo_tobeset, 
LLRP_tSElement *pVersionInfo);


/**
 * ParameterName: VersionDownload
 */
extern int 
Memcpy_VersionDownload(
LLRP_tSElement *pVersionDownload_tobeset, 
LLRP_tSElement *pVersionDownload);


/**
 * ParameterName: AlarmReportInfo
 */
extern int 
Memcpy_AlarmReportInfo(
LLRP_tSElement *pAlarmReportInfo_tobeset, 
LLRP_tSElement *pAlarmReportInfo);


/**
 * ParameterName: AlarmRestoreInfo
 */
extern int 
Memcpy_AlarmRestoreInfo(
LLRP_tSElement *pAlarmRestoreInfo_tobeset, 
LLRP_tSElement *pAlarmRestoreInfo);


/**
 * ParameterName: AlarmSyncInfo
 */
extern int 
Memcpy_AlarmSyncInfo(
LLRP_tSElement *pAlarmSyncInfo_tobeset, 
LLRP_tSElement *pAlarmSyncInfo);


/**
 * ParameterName: DiagnosticTestItem
 */
extern int 
Memcpy_DiagnosticTestItem(
LLRP_tSElement *pDiagnosticTestItem_tobeset, 
LLRP_tSElement *pDiagnosticTestItem);


/**
 * ParameterName: DiagnosticTestResultItem
 */
extern int 
Memcpy_DiagnosticTestResultItem(
LLRP_tSElement *pDiagnosticTestResultItem_tobeset, 
LLRP_tSElement *pDiagnosticTestResultItem);


/**
 * ParameterName: DiagnosticTestResultAntennaConnected
 */
extern int 
Memcpy_DiagnosticTestResultAntennaConnected(
LLRP_tSElement *pDiagnosticTestResultAntennaConnected_tobeset, 
LLRP_tSElement *pDiagnosticTestResultAntennaConnected);


/**
 * ParameterName: DiagnosticTestResultAntennaVSWR
 */
extern int 
Memcpy_DiagnosticTestResultAntennaVSWR(
LLRP_tSElement *pDiagnosticTestResultAntennaVSWR_tobeset, 
LLRP_tSElement *pDiagnosticTestResultAntennaVSWR);



/*                                                                                                                                                                              
 *############################
 * LIRP Message Functions
 *############################
 */


extern int
Memcpy_ErrorAck(
LLRP_tSElement *pErrorAck_tobeset,
LLRP_tSElement *pErrorAck
);


extern int
Memcpy_Keepalive(
LLRP_tSElement *pKeepalive_tobeset,
LLRP_tSElement *pKeepalive
);


extern int
Memcpy_KeepaliveAck(
LLRP_tSElement *pKeepaliveAck_tobeset,
LLRP_tSElement *pKeepaliveAck
);


extern int
Memcpy_Disconnect(
LLRP_tSElement *pDisconnect_tobeset,
LLRP_tSElement *pDisconnect
);


extern int
Memcpy_DisconnectAck(
LLRP_tSElement *pDisconnectAck_tobeset,
LLRP_tSElement *pDisconnectAck
);


extern int
Memcpy_DeviceEventNotification(
LLRP_tSElement *pDeviceEventNotification_tobeset,
LLRP_tSElement *pDeviceEventNotification
);


extern int
Memcpy_GetDeviceCapabilities(
LLRP_tSElement *pGetDeviceCapabilities_tobeset,
LLRP_tSElement *pGetDeviceCapabilities
);


extern int
Memcpy_GetDeviceCapabilitiesAck(
LLRP_tSElement *pGetDeviceCapabilitiesAck_tobeset,
LLRP_tSElement *pGetDeviceCapabilitiesAck
);


extern int
Memcpy_AddSelectSpec(
LLRP_tSElement *pAddSelectSpec_tobeset,
LLRP_tSElement *pAddSelectSpec
);


extern int
Memcpy_AddSelectSpecAck(
LLRP_tSElement *pAddSelectSpecAck_tobeset,
LLRP_tSElement *pAddSelectSpecAck
);


extern int
Memcpy_DeleteSelectSpec(
LLRP_tSElement *pDeleteSelectSpec_tobeset,
LLRP_tSElement *pDeleteSelectSpec
);


extern int
Memcpy_DeleteSelectSpecAck(
LLRP_tSElement *pDeleteSelectSpecAck_tobeset,
LLRP_tSElement *pDeleteSelectSpecAck
);


extern int
Memcpy_StartSelectSpec(
LLRP_tSElement *pStartSelectSpec_tobeset,
LLRP_tSElement *pStartSelectSpec
);


extern int
Memcpy_StartSelectSpecAck(
LLRP_tSElement *pStartSelectSpecAck_tobeset,
LLRP_tSElement *pStartSelectSpecAck
);


extern int
Memcpy_StopSelectSpec(
LLRP_tSElement *pStopSelectSpec_tobeset,
LLRP_tSElement *pStopSelectSpec
);


extern int
Memcpy_StopSelectSpecAck(
LLRP_tSElement *pStopSelectSpecAck_tobeset,
LLRP_tSElement *pStopSelectSpecAck
);


extern int
Memcpy_EnableSelectSpec(
LLRP_tSElement *pEnableSelectSpec_tobeset,
LLRP_tSElement *pEnableSelectSpec
);


extern int
Memcpy_EnableSelectSpecAck(
LLRP_tSElement *pEnableSelectSpecAck_tobeset,
LLRP_tSElement *pEnableSelectSpecAck
);


extern int
Memcpy_DisableSelectSpec(
LLRP_tSElement *pDisableSelectSpec_tobeset,
LLRP_tSElement *pDisableSelectSpec
);


extern int
Memcpy_DisableSelectSpecAck(
LLRP_tSElement *pDisableSelectSpecAck_tobeset,
LLRP_tSElement *pDisableSelectSpecAck
);


extern int
Memcpy_GetSelectSpec(
LLRP_tSElement *pGetSelectSpec_tobeset,
LLRP_tSElement *pGetSelectSpec
);


extern int
Memcpy_GetSelectSpecAck(
LLRP_tSElement *pGetSelectSpecAck_tobeset,
LLRP_tSElement *pGetSelectSpecAck
);


extern int
Memcpy_AddAccessSpec(
LLRP_tSElement *pAddAccessSpec_tobeset,
LLRP_tSElement *pAddAccessSpec
);


extern int
Memcpy_AddAccessSpecAck(
LLRP_tSElement *pAddAccessSpecAck_tobeset,
LLRP_tSElement *pAddAccessSpecAck
);


extern int
Memcpy_DeleteAccessSpec(
LLRP_tSElement *pDeleteAccessSpec_tobeset,
LLRP_tSElement *pDeleteAccessSpec
);


extern int
Memcpy_DeleteAccessSpecAck(
LLRP_tSElement *pDeleteAccessSpecAck_tobeset,
LLRP_tSElement *pDeleteAccessSpecAck
);


extern int
Memcpy_EnableAccessSpec(
LLRP_tSElement *pEnableAccessSpec_tobeset,
LLRP_tSElement *pEnableAccessSpec
);


extern int
Memcpy_EnableAccessSpecAck(
LLRP_tSElement *pEnableAccessSpecAck_tobeset,
LLRP_tSElement *pEnableAccessSpecAck
);


extern int
Memcpy_DisableAccessSpec(
LLRP_tSElement *pDisableAccessSpec_tobeset,
LLRP_tSElement *pDisableAccessSpec
);


extern int
Memcpy_DisableAccessSpecAck(
LLRP_tSElement *pDisableAccessSpecAck_tobeset,
LLRP_tSElement *pDisableAccessSpecAck
);


extern int
Memcpy_GetAccessSpec(
LLRP_tSElement *pGetAccessSpec_tobeset,
LLRP_tSElement *pGetAccessSpec
);


extern int
Memcpy_GetAccessSpecAck(
LLRP_tSElement *pGetAccessSpecAck_tobeset,
LLRP_tSElement *pGetAccessSpecAck
);


extern int
Memcpy_TagSelectAccessReport(
LLRP_tSElement *pTagSelectAccessReport_tobeset,
LLRP_tSElement *pTagSelectAccessReport
);


extern int
Memcpy_EnableCachedEventsAndReport(
LLRP_tSElement *pEnableCachedEventsAndReport_tobeset,
LLRP_tSElement *pEnableCachedEventsAndReport
);


extern int
Memcpy_CachedSelectAccessReport(
LLRP_tSElement *pCachedSelectAccessReport_tobeset,
LLRP_tSElement *pCachedSelectAccessReport
);


extern int
Memcpy_CachedSelectAccessReportAck(
LLRP_tSElement *pCachedSelectAccessReportAck_tobeset,
LLRP_tSElement *pCachedSelectAccessReportAck
);


extern int
Memcpy_ClientRequestOp(
LLRP_tSElement *pClientRequestOp_tobeset,
LLRP_tSElement *pClientRequestOp
);


extern int
Memcpy_ClientRequestOpAck(
LLRP_tSElement *pClientRequestOpAck_tobeset,
LLRP_tSElement *pClientRequestOpAck
);


extern int
Memcpy_DeviceBinding(
LLRP_tSElement *pDeviceBinding_tobeset,
LLRP_tSElement *pDeviceBinding
);


extern int
Memcpy_DeviceBindingAck(
LLRP_tSElement *pDeviceBindingAck_tobeset,
LLRP_tSElement *pDeviceBindingAck
);


extern int
Memcpy_DeviceCertificateConfig(
LLRP_tSElement *pDeviceCertificateConfig_tobeset,
LLRP_tSElement *pDeviceCertificateConfig
);


extern int
Memcpy_DeviceCertificateConfigAck(
LLRP_tSElement *pDeviceCertificateConfigAck_tobeset,
LLRP_tSElement *pDeviceCertificateConfigAck
);


extern int
Memcpy_DeviceBindingResultNotification(
LLRP_tSElement *pDeviceBindingResultNotification_tobeset,
LLRP_tSElement *pDeviceBindingResultNotification
);


extern int
Memcpy_UploadTagLog(
LLRP_tSElement *pUploadTagLog_tobeset,
LLRP_tSElement *pUploadTagLog
);


extern int
Memcpy_UploadTagLogAck(
LLRP_tSElement *pUploadTagLogAck_tobeset,
LLRP_tSElement *pUploadTagLogAck
);


extern int
Memcpy_UploadTagLogConfirm(
LLRP_tSElement *pUploadTagLogConfirm_tobeset,
LLRP_tSElement *pUploadTagLogConfirm
);


extern int
Memcpy_ClearTagLog(
LLRP_tSElement *pClearTagLog_tobeset,
LLRP_tSElement *pClearTagLog
);


extern int
Memcpy_ClearTagLogAck(
LLRP_tSElement *pClearTagLogAck_tobeset,
LLRP_tSElement *pClearTagLogAck
);


extern int
Memcpy_TagLogCount(
LLRP_tSElement *pTagLogCount_tobeset,
LLRP_tSElement *pTagLogCount
);


extern int
Memcpy_TagLogCountAck(
LLRP_tSElement *pTagLogCountAck_tobeset,
LLRP_tSElement *pTagLogCountAck
);


extern int
Memcpy_UploadDeviceLog(
LLRP_tSElement *pUploadDeviceLog_tobeset,
LLRP_tSElement *pUploadDeviceLog
);


extern int
Memcpy_UploadDeviceLogAck(
LLRP_tSElement *pUploadDeviceLogAck_tobeset,
LLRP_tSElement *pUploadDeviceLogAck
);


extern int
Memcpy_UploadDeviceLogConfirm(
LLRP_tSElement *pUploadDeviceLogConfirm_tobeset,
LLRP_tSElement *pUploadDeviceLogConfirm
);


extern int
Memcpy_DeviceLogCount(
LLRP_tSElement *pDeviceLogCount_tobeset,
LLRP_tSElement *pDeviceLogCount
);


extern int
Memcpy_DeviceLogCountAck(
LLRP_tSElement *pDeviceLogCountAck_tobeset,
LLRP_tSElement *pDeviceLogCountAck
);


extern int
Memcpy_ClearDeviceLog(
LLRP_tSElement *pClearDeviceLog_tobeset,
LLRP_tSElement *pClearDeviceLog
);


extern int
Memcpy_ClearDeviceLogAck(
LLRP_tSElement *pClearDeviceLogAck_tobeset,
LLRP_tSElement *pClearDeviceLogAck
);


extern int
Memcpy_GetDeviceConfig(
LLRP_tSElement *pGetDeviceConfig_tobeset,
LLRP_tSElement *pGetDeviceConfig
);


extern int
Memcpy_GetDeviceConfigAck(
LLRP_tSElement *pGetDeviceConfigAck_tobeset,
LLRP_tSElement *pGetDeviceConfigAck
);


extern int
Memcpy_SetDeviceConfig(
LLRP_tSElement *pSetDeviceConfig_tobeset,
LLRP_tSElement *pSetDeviceConfig
);


extern int
Memcpy_SetDeviceConfigAck(
LLRP_tSElement *pSetDeviceConfigAck_tobeset,
LLRP_tSElement *pSetDeviceConfigAck
);


extern int
Memcpy_GetVersion(
LLRP_tSElement *pGetVersion_tobeset,
LLRP_tSElement *pGetVersion
);


extern int
Memcpy_GetVersionAck(
LLRP_tSElement *pGetVersionAck_tobeset,
LLRP_tSElement *pGetVersionAck
);


extern int
Memcpy_SetVersion(
LLRP_tSElement *pSetVersion_tobeset,
LLRP_tSElement *pSetVersion
);


extern int
Memcpy_SetVersionAck(
LLRP_tSElement *pSetVersionAck_tobeset,
LLRP_tSElement *pSetVersionAck
);


extern int
Memcpy_ActiveVersion(
LLRP_tSElement *pActiveVersion_tobeset,
LLRP_tSElement *pActiveVersion
);


extern int
Memcpy_ActiveVersionAck(
LLRP_tSElement *pActiveVersionAck_tobeset,
LLRP_tSElement *pActiveVersionAck
);


extern int
Memcpy_UnActiveVersion(
LLRP_tSElement *pUnActiveVersion_tobeset,
LLRP_tSElement *pUnActiveVersion
);


extern int
Memcpy_UnActiveVersionAck(
LLRP_tSElement *pUnActiveVersionAck_tobeset,
LLRP_tSElement *pUnActiveVersionAck
);


extern int
Memcpy_AlarmReport(
LLRP_tSElement *pAlarmReport_tobeset,
LLRP_tSElement *pAlarmReport
);


extern int
Memcpy_AlarmRestore(
LLRP_tSElement *pAlarmRestore_tobeset,
LLRP_tSElement *pAlarmRestore
);


extern int
Memcpy_AlarmDelete(
LLRP_tSElement *pAlarmDelete_tobeset,
LLRP_tSElement *pAlarmDelete
);


extern int
Memcpy_AlarmSync(
LLRP_tSElement *pAlarmSync_tobeset,
LLRP_tSElement *pAlarmSync
);


extern int
Memcpy_DiagnosticTest(
LLRP_tSElement *pDiagnosticTest_tobeset,
LLRP_tSElement *pDiagnosticTest
);


extern int
Memcpy_DiagnosticTestAck(
LLRP_tSElement *pDiagnosticTestAck_tobeset,
LLRP_tSElement *pDiagnosticTestAck
);


extern int
Memcpy_ResetDevice(
LLRP_tSElement *pResetDevice_tobeset,
LLRP_tSElement *pResetDevice
);


extern int
Memcpy_ResetDeviceAck(
LLRP_tSElement *pResetDeviceAck_tobeset,
LLRP_tSElement *pResetDeviceAck
);
