
// ServerMFCDoc.h : CServerMFCDoc Ŭ������ �������̽�
//


#pragma once


class CServerMFCDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CServerMFCDoc();
	DECLARE_DYNCREATE(CServerMFCDoc)

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
	virtual ~CServerMFCDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


