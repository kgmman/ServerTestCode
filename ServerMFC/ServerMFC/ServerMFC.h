
// ServerMFC.h : ServerMFC ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CServerMFCApp:
// �� Ŭ������ ������ ���ؼ��� ServerMFC.cpp�� �����Ͻʽÿ�.
//

class CServerMFCApp : public CWinAppEx
{
public:
	CServerMFCApp();
private:
	virtual BOOL 			InitInstance				();
	virtual BOOL 			OnIdle						(LONG lCount);

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
public:
	UINT  					m_nAppLook;

	BOOL  					m_bHiColorIcons;
};

extern CServerMFCApp theApp;
