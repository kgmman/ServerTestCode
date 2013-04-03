
// ServerMFCView.cpp : CServerMFCView 클래스의 구현
//

#include "stdafx.h"
#include "ServerMFC.h"

#include "ServerMFCDoc.h"
#include "ServerMFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CServerMFCView

IMPLEMENT_DYNCREATE(CServerMFCView, CView)

BEGIN_MESSAGE_MAP(CServerMFCView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CServerMFCView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CServerMFCView 생성/소멸

CServerMFCView::CServerMFCView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CServerMFCView::~CServerMFCView()
{
}

BOOL CServerMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CServerMFCView 그리기

void CServerMFCView::OnDraw(CDC* /*pDC*/)
{
	CServerMFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CServerMFCView 인쇄


void CServerMFCView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CServerMFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CServerMFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CServerMFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void CServerMFCView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CServerMFCView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CServerMFCView 진단

#ifdef _DEBUG
void CServerMFCView::AssertValid() const
{
	CView::AssertValid();
}

void CServerMFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CServerMFCDoc* CServerMFCView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CServerMFCDoc)));
	return (CServerMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CServerMFCView 메시지 처리기
