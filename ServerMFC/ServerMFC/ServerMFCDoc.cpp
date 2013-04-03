
// ServerMFCDoc.cpp : CServerMFCDoc 클래스의 구현
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


// CServerMFCDoc 생성/소멸

CServerMFCDoc::CServerMFCDoc()
{
	// TODO: 여기에 일회성 생성 코드를 추가합니다.

}

CServerMFCDoc::~CServerMFCDoc()
{
}

BOOL CServerMFCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 여기에 재초기화 코드를 추가합니다.
	// SDI 문서는 이 문서를 다시 사용합니다.

	return TRUE;
}




// CServerMFCDoc serialization

void CServerMFCDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 여기에 저장 코드를 추가합니다.
	}
	else
	{
		// TODO: 여기에 로딩 코드를 추가합니다.
	}
}


// CServerMFCDoc 진단

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


// CServerMFCDoc 명령
