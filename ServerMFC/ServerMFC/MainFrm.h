#pragma once

#include "FileView.h"
#include "ClassView.h"
#include "OutputWnd.h"
#include "PropertiesWnd.h"
#include "UserListMgr.h"

class CMainFrame : public CFrameWndEx
{
protected: // serialization에서만 만들어집니다.
	CMainFrame();
public:
	virtual ~CMainFrame();
protected:
	DECLARE_DYNCREATE(CMainFrame)
public:
	virtual BOOL 				PreCreateWindow					(CREATESTRUCT& cs);
	virtual BOOL 				LoadFrame						(UINT nIDResource, DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, CWnd* pParentWnd = NULL, CCreateContext* pContext = NULL);

	CUserListMgr*				GetUserListMgr					() { return &m_UserListMgr; }
private:
	bool						InitServer						();
protected:
	afx_msg int					OnCreate						(LPCREATESTRUCT lpCreateStruct);
	
	afx_msg LRESULT				OnToolbarCreateNew				(WPARAM wp, LPARAM lp);
	
	afx_msg void 				OnViewCustomize					();
	afx_msg void 				OnApplicationLook				(UINT id);
	afx_msg void 				OnUpdateApplicationLook			(CCmdUI* pCmdUI);
	void 						SetDockingWindowIcons			(BOOL bHiColorIcons);

	BOOL 						CreateDockingWindows			();

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL				DestroyWindow					();
protected:  // 컨트롤 모음이 포함된 멤버입니다.
	CMFCMenuBar       			m_wndMenuBar;
	CMFCToolBar       			m_wndToolBar;
	CMFCStatusBar     			m_wndStatusBar;
	CMFCToolBarImages 			m_UserImages;
	CFileView         			m_wndFileView;
	CClassView        			m_wndClassView;
	COutputWnd        			m_wndOutput;
	CPropertiesWnd    			m_wndProperties;

	SOCKET						m_hServerSocket;
	SOCKET						m_hClientSocket;

	CUserListMgr				m_UserListMgr;
};