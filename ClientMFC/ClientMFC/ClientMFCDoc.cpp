
// ClientMFCDoc.cpp : CClientMFCDoc 클래스의 구현
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


// CClientMFCDoc 생성/소멸

CClientMFCDoc::CClientMFCDoc()
{
	// TODO: 여기에 일회성 생성 코드를 추가합니다.

}

CClientMFCDoc::~CClientMFCDoc()
{
}

BOOL CClientMFCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 여기에 재초기화 코드를 추가합니다.
	// SDI 문서는 이 문서를 다시 사용합니다.

	return TRUE;
}




// CClientMFCDoc serialization

void CClientMFCDoc::Serialize(CArchive& ar)
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


// CClientMFCDoc 진단

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


// CClientMFCDoc 명령
