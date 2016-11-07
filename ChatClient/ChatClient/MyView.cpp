// MyView.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "ChatClient.h"
#include "MyView.h"


// CMyView

IMPLEMENT_DYNCREATE(CMyView, CView)

CMyView::CMyView()
{
	m_title_string = "그림판 영역";
}

CMyView::~CMyView()
{
}

BEGIN_MESSAGE_MAP(CMyView, CView)
END_MESSAGE_MAP()


// CMyView 그리기입니다.

void CMyView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: 여기에 그리기 코드를 추가합니다.
	pDC->SetTextColor(RGB(0, 0, 255));
	pDC->TextOut(10, 20, m_title_string);
	pDC->FillSolidRect(CRect(60, 60, 160, 160), RGB(0, 128, 0));
	pDC->Ellipse(CRect(110, 110, 210, 210));
}


// CMyView 진단입니다.

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


// CMyView 메시지 처리기입니다.
