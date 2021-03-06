; --------------------------------------------------------------------------------------------------
;                           xactsrv.inc Copyright The MASM32 SDK 1998-2010
; --------------------------------------------------------------------------------------------------

IFNDEF XACTSRV_INC
XACTSRV_INC equ <1>

XsCaptureParameters PROTO STDCALL :DWORD,:DWORD
XsCheckSmbDescriptor PROTO STDCALL :DWORD,:DWORD
XsConvertServerEnumBuffer PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
XsDupStrToWStr PROTO STDCALL :DWORD
XsDupWStrToStr PROTO STDCALL :DWORD
XsI_NetNameCanonicalize PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsI_NetNameCompare PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsI_NetNameValidate PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsI_NetPathCanonicalize PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsI_NetPathCompare PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsI_NetPathType PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetAccessAdd PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetAccessDel PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetAccessEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetAccessGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetAccessGetUserPerms PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetAccessSetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetAccountDeltas PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetAccountSync PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetBuildGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetCharDevControl PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetCharDevEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetCharDevGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetCharDevQEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetCharDevQGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetCharDevQPurge PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetCharDevQPurgeSelf PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetCharDevQSetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetConnectionEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetFileClose2 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetFileEnum2 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetFileGetInfo2 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetGetDCName PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetGroupAdd PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetGroupAddUser PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetGroupDel PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetGroupDelUser PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetGroupEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetGroupGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetGroupGetUsers PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetGroupSetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetGroupSetUsers PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetLogonEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetMessageBufferSend PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetMessageNameAdd PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetMessageNameDel PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetMessageNameEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetMessageNameGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintDestAdd PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintDestControl PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintDestDel PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintDestEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintDestGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintDestSetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintJobContinue PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintJobDel PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintJobEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintJobGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintJobPause PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintJobSetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintQAdd PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintQContinue PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintQDel PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintQEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintQGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintQPause PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintQPurge PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetPrintQSetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetRemoteTOD PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetServerAuthenticate PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetServerDiskEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetServerEnum2 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetServerEnum3 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetServerGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetServerPasswordSet PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetServerReqChallenge PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetServerSetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetServiceControl PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetServiceEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetServiceGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetServiceInstall PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetSessionDel PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetSessionEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetSessionGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetShareAdd PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetShareCheck PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetShareDel PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetShareEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetShareGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetShareSetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetStatisticsGet2 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUnsupportedApi PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUseAdd PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUseDel PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUseEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUseGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUserAdd2 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUserDel PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUserEnum2 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUserEnum PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUserGetGroups PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUserGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUserModalsGet PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUserModalsSet PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUserPasswordSet2 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUserSetGroups PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUserSetInfo2 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetUserSetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetWkstaGetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetWkstaSetInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetWkstaSetUID PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetWkstaUserLogoff PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsNetWkstaUserLogon PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsSamOEMChangePasswordUser2_P PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
XsSetParameters PROTO STDCALL :DWORD,:DWORD,:DWORD

ELSE
  echo ------------------------------------------
  echo WARNING duplicate include file xactsrv.inc
  echo ------------------------------------------
ENDIF
