
// MainFrm.h : CMainFrame Ŭ������ �������̽�
//

#pragma once
#include "FileView.h"
#include "ClassView.h"
#include "OutputWnd.h"
#include "PropertiesWnd.h"

class CMainFrame : public CFrameWndEx
{
protected:
	DECLARE_DYNCREATE(CMainFrame)
protected: // serialization������ ��������ϴ�.
	CMainFrame();
public:
	virtual ~CMainFrame();
// �������Դϴ�.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL LoadFrame(UINT nIDResource, DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, CWnd* pParentWnd = NULL, CCreateContext* pContext = NULL);
protected:
	virtual BOOL DestroyWindow();
	BOOL CreateDockingWindows();

	bool				InitClient					();

	void SetDockingWindowIcons(BOOL bHiColorIcons);
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnViewCustomize();
	afx_msg void OnApplicationLook(UINT id);
	afx_msg void OnUpdateApplicationLook(CCmdUI* pCmdUI);
	
	afx_msg LRESULT OnToolbarCreateNew(WPARAM wp, LPARAM lp);
	DECLARE_MESSAGE_MAP()
protected:  // ��Ʈ�� ������ ���Ե� ����Դϴ�.
	CMFCMenuBar       				m_wndMenuBar;
	CMFCToolBar       				m_wndToolBar;
	CMFCStatusBar     				m_wndStatusBar;
	CMFCToolBarImages 				m_UserImages;
	CFileView         				m_wndFileView;
	CClassView        				m_wndClassView;
	COutputWnd        				m_wndOutput;
	CPropertiesWnd    				m_wndProperties;

	SOCKET							m_hSocket;
};