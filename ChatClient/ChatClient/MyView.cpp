// MyView.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "ChatClient.h"
#include "MyView.h"


// CMyView

IMPLEMENT_DYNCREATE(CMyView, CView)

CMyView::CMyView()
{
	m_title_string = "�׸��� ����";
}

CMyView::~CMyView()
{
}

BEGIN_MESSAGE_MAP(CMyView, CView)
END_MESSAGE_MAP()


// CMyView �׸����Դϴ�.

void CMyView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: ���⿡ �׸��� �ڵ带 �߰��մϴ�.
	pDC->SetTextColor(RGB(0, 0, 255));
	pDC->TextOut(10, 20, m_title_string);
	pDC->FillSolidRect(CRect(60, 60, 160, 160), RGB(0, 128, 0));
	pDC->Ellipse(CRect(110, 110, 210, 210));
}


// CMyView �����Դϴ�.

#ifdef _DEBUG
void CMyView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyView �޽��� ó�����Դϴ�.
