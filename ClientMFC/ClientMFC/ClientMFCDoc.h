
// ClientMFCDoc.h : CClientMFCDoc Ŭ������ �������̽�
//


#pragma once


class CClientMFCDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CClientMFCDoc();
	DECLARE_DYNCREATE(CClientMFCDoc)

// Ư���Դϴ�.
public:

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// �����Դϴ�.
public:
	virtual ~CClientMFCDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


