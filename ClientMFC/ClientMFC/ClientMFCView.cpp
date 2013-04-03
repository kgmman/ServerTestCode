
// ClientMFCView.cpp : CClientMFCView 클래스의 구현
//

#include "stdafx.h"
#include "ClientMFC.h"

#include "ClientMFCDoc.h"
#include "ClientMFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CClientMFCView

IMPLEMENT_DYNCREATE(CClientMFCView, CView)

BEGIN_MESSAGE_MAP(CClientMFCView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CClientMFCView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CClientMFCView 생성/소멸

CClientMFCView::CClientMFCView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CClientMFCView::~CClientMFCView()
{
}

BOOL CClientMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CClientMFCView 그리기

void CClientMFCView::OnDraw(CDC* /*pDC*/)
{
	CClientMFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CClientMFCView 인쇄


void CClientMFCView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CClientMFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CClientMFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CClientMFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void CClientMFCView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CClientMFCView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CClientMFCView 진단

#ifdef _DEBUG
void CClientMFCView::AssertValid() const
{
	CView::AssertValid();
}

void CClientMFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CClientMFCDoc* CClientMFCView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CClientMFCDoc)));
	return (CClientMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CClientMFCView 메시지 처리기
