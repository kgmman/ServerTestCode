
// ServerMFCView.cpp : CServerMFCView Ŭ������ ����
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CServerMFCView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CServerMFCView ����/�Ҹ�

CServerMFCView::CServerMFCView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CServerMFCView::~CServerMFCView()
{
}

BOOL CServerMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CServerMFCView �׸���

void CServerMFCView::OnDraw(CDC* /*pDC*/)
{
	CServerMFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CServerMFCView �μ�


void CServerMFCView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CServerMFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CServerMFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CServerMFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
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


// CServerMFCView ����

#ifdef _DEBUG
void CServerMFCView::AssertValid() const
{
	CView::AssertValid();
}

void CServerMFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CServerMFCDoc* CServerMFCView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CServerMFCDoc)));
	return (CServerMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CServerMFCView �޽��� ó����
