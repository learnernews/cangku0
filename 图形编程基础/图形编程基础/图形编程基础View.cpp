
// ͼ�α�̻���View.cpp : Cͼ�α�̻���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ͼ�α�̻���.h"
#endif

#include "ͼ�α�̻���Doc.h"
#include "ͼ�α�̻���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cͼ�α�̻���View

IMPLEMENT_DYNCREATE(Cͼ�α�̻���View, CView)

BEGIN_MESSAGE_MAP(Cͼ�α�̻���View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cͼ�α�̻���View ����/����

Cͼ�α�̻���View::Cͼ�α�̻���View()
{
	// TODO: �ڴ˴���ӹ������

}

Cͼ�α�̻���View::~Cͼ�α�̻���View()
{
}

BOOL Cͼ�α�̻���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cͼ�α�̻���View ����

void Cͼ�α�̻���View::OnDraw(CDC* pDC)
{
	Cͼ�α�̻���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

}


// Cͼ�α�̻���View ���

#ifdef _DEBUG
void Cͼ�α�̻���View::AssertValid() const
{
	CView::AssertValid();
}

void Cͼ�α�̻���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cͼ�α�̻���Doc* Cͼ�α�̻���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cͼ�α�̻���Doc)));
	return (Cͼ�α�̻���Doc*)m_pDocument;
}
#endif //_DEBUG


// Cͼ�α�̻���View ��Ϣ�������


void Cͼ�α�̻���View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	m_pointOri = point;

	CWnd::OnLButtonDown(nFlags, point);

	CView::OnLButtonDown(nFlags, point);


}


void Cͼ�α�̻���View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	dc.SetViewportOrg(point);
	dc.Ellipse(-(point.x - m_pointOri.x), -(point.x - m_pointOri.x), (point.x - m_pointOri.x), (point.x - m_pointOri.x));

	CWnd::OnLButtonUp(nFlags, point);

	CView::OnLButtonUp(nFlags, point);
}
