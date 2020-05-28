
// 图形编程基础View.cpp : C图形编程基础View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "图形编程基础.h"
#endif

#include "图形编程基础Doc.h"
#include "图形编程基础View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C图形编程基础View

IMPLEMENT_DYNCREATE(C图形编程基础View, CView)

BEGIN_MESSAGE_MAP(C图形编程基础View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C图形编程基础View 构造/析构

C图形编程基础View::C图形编程基础View()
{
	// TODO: 在此处添加构造代码

}

C图形编程基础View::~C图形编程基础View()
{
}

BOOL C图形编程基础View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C图形编程基础View 绘制

void C图形编程基础View::OnDraw(CDC* pDC)
{
	C图形编程基础Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

}


// C图形编程基础View 诊断

#ifdef _DEBUG
void C图形编程基础View::AssertValid() const
{
	CView::AssertValid();
}

void C图形编程基础View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C图形编程基础Doc* C图形编程基础View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C图形编程基础Doc)));
	return (C图形编程基础Doc*)m_pDocument;
}
#endif //_DEBUG


// C图形编程基础View 消息处理程序


void C图形编程基础View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	m_pointOri = point;

	CWnd::OnLButtonDown(nFlags, point);

	CView::OnLButtonDown(nFlags, point);


}


void C图形编程基础View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	dc.SetViewportOrg(point);
	dc.Ellipse(-(point.x - m_pointOri.x), -(point.x - m_pointOri.x), (point.x - m_pointOri.x), (point.x - m_pointOri.x));

	CWnd::OnLButtonUp(nFlags, point);

	CView::OnLButtonUp(nFlags, point);
}
