
// ClientMFCDoc.cpp : CClientMFCDoc Ŭ������ ����
//

#include "stdafx.h"
#include "ClientMFC.h"

#include "ClientMFCDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CClientMFCDoc

IMPLEMENT_DYNCREATE(CClientMFCDoc, CDocument)

BEGIN_MESSAGE_MAP(CClientMFCDoc, CDocument)
END_MESSAGE_MAP()


// CClientMFCDoc ����/�Ҹ�

CClientMFCDoc::CClientMFCDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CClientMFCDoc::~CClientMFCDoc()
{
}

BOOL CClientMFCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CClientMFCDoc serialization

void CClientMFCDoc::Serialize(CArchive& ar)
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


// CClientMFCDoc ����

#ifdef _DEBUG
void CClientMFCDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CClientMFCDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CClientMFCDoc ���
