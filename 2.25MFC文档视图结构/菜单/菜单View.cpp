
// 菜单View.cpp : C菜单View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "菜单.h"
#endif

#include "菜单Doc.h"
#include "菜单View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C菜单View

IMPLEMENT_DYNCREATE(C菜单View, CView)

BEGIN_MESSAGE_MAP(C菜单View, CView)
	ON_COMMAND(ID_SHOWNAME, &C菜单View::OnShowname)
END_MESSAGE_MAP()

// C菜单View 构造/析构

C菜单View::C菜单View()
{
	// TODO: 在此处添加构造代码
	s = "";
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;


}

C菜单View::~C菜单View()
{
}

BOOL C菜单View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C菜单View 绘制

void C菜单View::OnDraw(CDC* pDC)
{
	C菜单Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC = ->BitBit(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);

}


// C菜单View 诊断

#ifdef _DEBUG
void C菜单View::AssertValid() const
{
	CView::AssertValid();
}

void C菜单View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C菜单Doc* C菜单View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C菜单Doc)));
	return (C菜单Doc*)m_pDocument;
}
#endif //_DEBUG


// C菜单View 消息处理程序


void C菜单View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CString s=_T("赖曙强");
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);


}
