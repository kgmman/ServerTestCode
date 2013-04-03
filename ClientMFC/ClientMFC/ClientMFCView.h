
// ClientMFCView.h : CClientMFCView Ŭ������ �������̽�
//


#pragma once


class CClientMFCView : public CView
{
protected: // serialization������ ��������ϴ�.
	CClientMFCView();
	DECLARE_DYNCREATE(CClientMFCView)

// Ư���Դϴ�.
public:
	CClientMFCDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CClientMFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ClientMFCView.cpp�� ����� ����
inline CClientMFCDoc* CClientMFCView::GetDocument() const
   { return reinterpret_cast<CClientMFCDoc*>(m_pDocument); }
#endif

