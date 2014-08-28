; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
ClassCount=4
Class1=CB2CServiceApp
Class2=CExtObject
Class3=CBasePropertyPage
Class4=CB2CServiceParamsPage
ResourceCount=1
Resource1=IDD_PP_B2CSERVICE_PARAMETERS
LastTemplate=CPropertyPage
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "B2CServiceEx.h"

[CLS:CB2CServiceApp]
Type=0
HeaderFile=B2CServiceEx.h
ImplementationFile=B2CServiceEx.cpp
Filter=N
LastObject=CB2CServiceApp

[CLS:CExtObject]
Type=0
HeaderFile=ExtObj.h
ImplementationFile=ExtObj.cpp
BaseClass=CComObjectRoot
Filter=N
LastObject=CExtObject
VirtualFilter=C

[CLS:CBasePropertyPage]
Type=0
HeaderFile=BasePage.h
ImplementationFile=BasePage.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=CBasePropertyPage
VirtualFilter=idWC

[CLS:CB2CServiceParamsPage]
Type=0
HeaderFile=ResProp.h
ImplementationFile=ResProp.cpp
BaseClass=CBasePropertyPage
Filter=D
VirtualFilter=idWC
LastObject=CB2CServiceParamsPage

[DLG:IDD_PP_B2CSERVICE_PARAMETERS]
Type=1
Class=CB2CServiceParamsPage
ControlCount=3
Control1=IDC_PP_ICON,static,1342177283
Control2=IDC_PP_TITLE,static,1342308492
Control3=IDC_PP_RESPARAMS_ID_LABEL,static,1342308352
Control4=IDC_PP_RESPARAMS_ID,edit,1350631552
