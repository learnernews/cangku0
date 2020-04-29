
// MFCApplication8View.cpp : CMFCApplication8View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication8.h"
#endif

#include "MFCApplication8Doc.h"
#include "MFCApplication8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication8View

IMPLEMENT_DYNCREATE(CMFCApplication8View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication8View, CView)
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFCApplication8View 构造/析构

CMFCApplication8View::CMFCApplication8View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication8View::~CMFCApplication8View()
{
}

BOOL CMFCApplication8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication8View 绘制

void CMFCApplication8View::OnDraw(CDC* pDC)
{
	CMFCApplication8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->c);

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication8View 诊断

#ifdef _DEBUG
void CMFCApplication8View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication8Doc* CMFCApplication8View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication8Doc)));
	return (CMFCApplication8Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication8View 消息处理程序


void CMFCApplication8View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication8Doc*pDoc = GetDocument();

	pDoc->c.right = point.x;
	pDoc->c.bottom = point.y;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonUp(nFlags, point);
}


void CMFCApplication8View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	CClientDC dc(this);
	CMFCApplication8Doc*pDoc = GetDocument();
	s.Format(_T("鼠标的位置：X:%d,Y;%d"), point.x, point.y);
	dc.TextOutW(200, 200, s);
	CView::OnMouseMove(nFlags, point);
}
