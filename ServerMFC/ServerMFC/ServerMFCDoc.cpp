
// ServerMFCDoc.cpp : CServerMFCDoc Ŭ������ ����
//

#include "stdafx.h"
#include "ServerMFC.h"

#include "ServerMFCDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CServerMFCDoc

IMPLEMENT_DYNCREATE(CServerMFCDoc, CDocument)

BEGIN_MESSAGE_MAP(CServerMFCDoc, CDocument)
END_MESSAGE_MAP()


// CServerMFCDoc ����/�Ҹ�

CServerMFCDoc::CServerMFCDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CServerMFCDoc::~CServerMFCDoc()
{
}

BOOL CServerMFCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CServerMFCDoc serialization

void CServerMFCDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	}
	else
	{
		// TODO: ���⿡ �ε� �ڵ带 �߰��մϴ�.
	}
}


// CServerMFCDoc ����

#ifdef _DEBUG
void CServerMFCDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CServerMFCDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CServerMFCDoc ���
