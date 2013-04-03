
// ClientMFCView.cpp : CClientMFCView Ŭ������ ����
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CClientMFCView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CClientMFCView ����/�Ҹ�

CClientMFCView::CClientMFCView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CClientMFCView::~CClientMFCView()
{
}

BOOL CClientMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CClientMFCView �׸���

void CClientMFCView::OnDraw(CDC* /*pDC*/)
{
	CClientMFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CClientMFCView �μ�


void CClientMFCView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CClientMFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CClientMFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CClientMFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
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


// CClientMFCView ����

#ifdef _DEBUG
void CClientMFCView::AssertValid() const
{
	CView::AssertValid();
}

void CClientMFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CClientMFCDoc* CClientMFCView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CClientMFCDoc)));
	return (CClientMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CClientMFCView �޽��� ó����
