
// MFC3.30View.cpp : CMFC330View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMFC330View ����/����

CMFC330View::CMFC330View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC330View::~CMFC330View()
{
}

BOOL CMFC330View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC330View ����

void CMFC330View::OnDraw(CDC* /*pDC*/)
{
	CMFC330Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC330View ���

#ifdef _DEBUG
void CMFC330View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC330View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC330Doc* CMFC330View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC330Doc)));
	return (CMFC330Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC330View ��Ϣ�������


void CMFC330View::OnFileOpen()
{
	// TODO: �ڴ���������������
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
