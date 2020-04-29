
// MFC3.30View.cpp : CMFC330View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC3.30.h"
#endif

#include "MFC3.30Doc.h"
#include "MFC3.30View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC330View

IMPLEMENT_DYNCREATE(CMFC330View, CView)

BEGIN_MESSAGE_MAP(CMFC330View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFC330View::OnFileOpen)
END_MESSAGE_MAP()

// CMFC330View 构造/析构

CMFC330View::CMFC330View()
{
	// TODO: 在此处添加构造代码

}

CMFC330View::~CMFC330View()
{
}

BOOL CMFC330View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC330View 绘制

void CMFC330View::OnDraw(CDC* /*pDC*/)
{
	CMFC330Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC330View 诊断

#ifdef _DEBUG
void CMFC330View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC330View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC330Doc* CMFC330View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC330Doc)));
	return (CMFC330Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC330View 消息处理程序


void CMFC330View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		dc.TextOutW(200, 300, filename);
		CImage img;
		img.Load(filename);
		float w, h, sx, sy;
		{CRect rect;
		GetClientRect(&rect);
		sx = (rect.Width() - img.GetWidth()) / 2;
		sy = (rect.Height() - img.GetHeight()) / 2;
		}
		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	}
}
