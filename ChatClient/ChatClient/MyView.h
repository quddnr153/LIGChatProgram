#pragma once


// CMyView ���Դϴ�.

class CMyView : public CView
{
	DECLARE_DYNCREATE(CMyView)
private:
	//View�� ������ ������ ���� �޸�DC�� �޸�bitmap ��ü
	CDC* _memDc;
	CBitmap *_bitmap, *_oldBitmap;
	CRect _rect;

	//���� �׷����� GDIObject�� �Ӽ���
	CPen m_curPen;

	BOOL _bDrawMode;
	CPoint _anchor, _drawTo, _oldPoint;
	BOOL _bDoing;

	int _nZoomRate;
	int _oldRadius;		//�� �׸��� ���� ������

	int getOblique(CPoint& p1, CPoint& p2);
	void setStatusBar();


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


	afx_msg void OnZoomIn();
	afx_msg void OnZoomOut();

	afx_msg void OnFileNew();
	afx_msg void OnPencil();
	afx_msg void OnUpdatePencil(CCmdUI* pCmdUI);
	afx_msg void OnFill();
	afx_msg void OnUpdateFill(CCmdUI* pCmdUI);
	afx_msg void OnBeeLine();
	afx_msg void OnUpdateBeeLine(CCmdUI* pCmdUI);
	afx_msg void OnEllipse();
	afx_msg void OnUpdateEllipse(CCmdUI* pCmdUI);
	afx_msg void OnRectangle();
	afx_msg void OnUpdateRectangle(CCmdUI* pCmdUI);
	afx_msg void OnPolygon();
	afx_msg void OnUpdatePolygon(CCmdUI* pCmdUI);
	afx_msg void OnFont();
	afx_msg void OnUpdateFont(CCmdUI* pCmdUI);

	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnSize(UINT nType, int cx, int cy);

	afx_msg void OnViewZoomdefault();

	afx_msg void OnDestroy();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);


public:
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);

protected:
	DECLARE_MESSAGE_MAP()
};


