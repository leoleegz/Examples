/////////////////////////////////////////////////////////////////////////////
//
//	Copyright (c) 2005 <company name>
//
//	Module Name:
//		ResProp.cpp
//
//	Abstract:
//		Implementation of the resource extension property page classes.
//
//	Author:
//		<name> (<e-mail name>) Mmmm DD, 2005
//
//	Revision History:
//
//	Notes:
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "B2CServiceEx.h"
#include "ResProp.h"
#include "ExtObj.h"
#include "DDxDDv.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CB2CServiceParamsPage property page
/////////////////////////////////////////////////////////////////////////////

IMPLEMENT_DYNCREATE(CB2CServiceParamsPage, CBasePropertyPage)

/////////////////////////////////////////////////////////////////////////////
// Message Maps

BEGIN_MESSAGE_MAP(CB2CServiceParamsPage, CBasePropertyPage)
	//{{AFX_MSG_MAP(CB2CServiceParamsPage)
	//}}AFX_MSG_MAP
	// TODO: Modify the following lines to represent the data displayed on this page.
	ON_EN_CHANGE(IDC_PP_B2CSERVICE_ID, CBasePropertyPage::OnChangeCtrl)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
//++
//
//	CB2CServiceParamsPage::CB2CServiceParamsPage
//
//	Routine Description:
//		Default constructor.
//
//	Arguments:
//		None.
//
//	Return Value:
//		None.
//
//--
/////////////////////////////////////////////////////////////////////////////
CB2CServiceParamsPage::CB2CServiceParamsPage(void) : CBasePropertyPage(CB2CServiceParamsPage::IDD)
{
	// TODO: Modify the following lines to represent the data displayed on this page.
	//{{AFX_DATA_INIT(CB2CServiceParamsPage)
	m_strID = _T("");
	//}}AFX_DATA_INIT

	// Setup the property array.
	{
		m_rgProps[epropID].Set(REGPARAM_B2CSERVICE_ID, m_strID, m_strPrevID);
	}  // Setup the property array

	m_iddPropertyPage = IDD_PP_B2CSERVICE_PARAMETERS;
	m_iddWizardPage = IDD_WIZ_B2CSERVICE_PARAMETERS;

}  //*** CB2CServiceParamsPage::CB2CServiceParamsPage()

/////////////////////////////////////////////////////////////////////////////
//++
//
//	CB2CServiceParamsPage::DoDataExchange
//
//	Routine Description:
//		Do data exchange between the dialog and the class.
//
//	Arguments:
//		pDX		[IN OUT] Data exchange object 
//
//	Return Value:
//		None.
//
//--
/////////////////////////////////////////////////////////////////////////////
void CB2CServiceParamsPage::DoDataExchange(CDataExchange * pDX)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: Modify the following lines to represent the data displayed on this page.
	//{{AFX_DATA_MAP(CB2CServiceParamsPage)
	DDX_Text(pDX, IDC_PP_B2CSERVICE_ID, m_strID);
	//}}AFX_DATA_MAP

	// Handle numeric parameters.
	if (!BBackPressed())
	{
	}  // if:  back button not pressed

	// TODO: Add any additional field validation here.
	if (pDX->m_bSaveAndValidate)
	{
		// Make sure all required fields are present.
		if (!BBackPressed())
		{
		}  // if:  back button not pressed
	}  // if:  saving data from dialog

	CBasePropertyPage::DoDataExchange(pDX);

}  //*** CB2CServiceParamsPage::DoDataExchange()

/////////////////////////////////////////////////////////////////////////////
//++
//
//	CB2CServiceParamsPage::OnInitDialog
//
//	Routine Description:
//		Handler for the WM_INITDIALOG message.
//
//	Arguments:
//		None.
//
//	Return Value:
//		TRUE		We need the focus to be set for us.
//		FALSE		We already set the focus to the proper control.
//
//--
/////////////////////////////////////////////////////////////////////////////
BOOL CB2CServiceParamsPage::OnInitDialog(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	CBasePropertyPage::OnInitDialog();

	// TODO:
	// Limit the size of the text that can be entered in edit controls.

	return TRUE;	// return TRUE unless you set the focus to a control
					// EXCEPTION: OCX Property Pages should return FALSE

}  //*** CB2CServiceParamsPage::OnInitDialog()

/////////////////////////////////////////////////////////////////////////////
//++
//
//	CB2CServiceParamsPage::OnSetActive
//
//	Routine Description:
//		Handler for the PSN_SETACTIVE message.
//
//	Arguments:
//		None.
//
//	Return Value:
//		TRUE	Page successfully initialized.
//		FALSE	Page not initialized.
//
//--
/////////////////////////////////////////////////////////////////////////////
BOOL CB2CServiceParamsPage::OnSetActive(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// Enable/disable the Next/Finish button.
	if (BWizard())
		EnableNext(BAllRequiredFieldsPresent());

	return CBasePropertyPage::OnSetActive();

}  //*** CB2CServiceParamsPage::OnSetActive()

/////////////////////////////////////////////////////////////////////////////
//++
//
//	CB2CServiceParamsPage::OnChangeRequiredField
//
//	Routine Description:
//		Handler for the EN_CHANGE message on the Share name or Path edit
//		controls.
//
//	Arguments:
//		None.
//
//	Return Value:
//		None.
//
//--
/////////////////////////////////////////////////////////////////////////////
void CB2CServiceParamsPage::OnChangeRequiredField(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	OnChangeCtrl();

	if (BWizard())
		EnableNext(BAllRequiredFieldsPresent());

}  //*** CB2CServiceParamsPage::OnChangeRequiredField()

/////////////////////////////////////////////////////////////////////////////
//++
//
//	CB2CServiceParamsPage::BAllRequiredFieldsPresent
//
//	Routine Description:
//		Handler for the EN_CHANGE message on the Share name or Path edit
//		controls.
//
//	Arguments:
//		None.
//
//	Return Value:
//		None.
//
//--
/////////////////////////////////////////////////////////////////////////////
BOOL CB2CServiceParamsPage::BAllRequiredFieldsPresent(void) const
{
	return TRUE;

}  //*** CB2CServiceParamsPage::BAllRequiredFieldsPresent()
