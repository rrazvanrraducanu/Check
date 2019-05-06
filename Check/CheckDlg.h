#include "CColors.h"

// CheckDlg.h : header file
//

#pragma once


// CCheckDlg dialog
class CCheckDlg : public CDialogEx
{
// Construction
public:
	CCheckDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHECK_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CColors m_edit;
	afx_msg void OnClickedCheck1();
	afx_msg void OnClickedCheck2();
};
