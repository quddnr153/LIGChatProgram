#pragma once


// CMyView ���Դϴ�.

class CMyView : public CView
{
	DECLARE_DYNCREATE(CMyView)

public:
	CString m_title_string;
	CMyView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CMyView();

public:
	virtual void OnDraw(CDC* pDC);      // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
};


