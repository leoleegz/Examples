/////////////////////////////////////////////////////////////////////////////
//
//	Copyright (c) 2005 <company name>
//
//	Module Name:
//		ResProp.h
//
//	Abstract:
//		Definition of the resource extension property page classes.
//
//	Implementation File:
//		ResProp.cpp
//
//	Author:
//		<name> (<e-mail name>) Mmmm DD, 2005
//
//	Revision History:
//
//	Notes:
//
/////////////////////////////////////////////////////////////////////////////

#ifndef _RESPROP_H_
#define _RESPROP_H_

/////////////////////////////////////////////////////////////////////////////
// Include Files
/////////////////////////////////////////////////////////////////////////////

#ifndef _BASEPAGE_H_
#include "BasePage.h"	// for CBasePropertyPage
#endif

#ifndef _PROPLIST_H_
#include "PropList.h"	// for CObjectPropert
#endif

/////////////////////////////////////////////////////////////////////////////
// Forward Class Declarations
/////////////////////////////////////////////////////////////////////////////

class CB2CServiceParamsPage;

/////////////////////////////////////////////////////////////////////////////
// External Class Declarations
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
//
//	CB2CServiceParamsPage
//
//	Purpose:
//		Parameters page for resources.
//
/////////////////////////////////////////////////////////////////////////////

class CB2CServiceParamsPage : public CBasePropertyPage
{
	DECLARE_DYNCREATE(CB2CServiceParamsPage)

// Construction
public:
	CB2CServiceParamsPage(void);

// Dialog Data
	//{{AFX_DATA(CB2CServiceParamsPage)
	enum { IDD = IDD_PP_B2CSERVICE_PARAMETERS };
	CString	m_strID;
	//}}AFX_DATA
	CString	m_strPrevID;

protected:
	enum
	{
		epropID,
		epropMAX
	};
	CObjectProperty		m_rgProps[epropMAX];

// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CB2CServiceParamsPage)
	public:
	virtual BOOL OnSetActive();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

protected:
	virtual const CObjectProperty *	Pprops(void) const	{ return m_rgProps; }
	virtual DWORD					Cprops(void) const	{ return sizeof(m_rgProps) / sizeof(CObjectProperty); }

// Implementation
protected:
	BOOL	BAllRequiredFieldsPresent(void) const;

	// Generated message map functions
	//{{AFX_MSG(CB2CServiceParamsPage)
	virtual BOOL OnInitDialog();
	afx_msg void OnChangeRequiredField();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};  //*** class CB2CServiceParamsPage

/////////////////////////////////////////////////////////////////////////////

#endif // _RESPROP_H_
