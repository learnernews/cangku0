
// �˵�View.cpp : C�˵�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�˵�.h"
#endif

#include "�˵�Doc.h"
#include "�˵�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�˵�View

IMPLEMENT_DYNCREATE(C�˵�View, CView)

BEGIN_MESSAGE_MAP(C�˵�View, CView)
	ON_COMMAND(ID_SHOWNAME, &C�˵�View::OnShowname)
END_MESSAGE_MAP()

// C�˵�View ����/����

C�˵�View::C�˵�View()
{
	// TODO: �ڴ˴���ӹ������
	s = "";
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;


}

C�˵�View::~C�˵�View()
{
}

BOOL C�˵�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�˵�View ����

void C�˵�View::OnDraw(CDC* pDC)
{
	C�˵�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC = ->BitBit(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);

}


// C�˵�View ���

#ifdef _DEBUG
void C�˵�View::AssertValid() const
{
	CView::AssertValid();
}

void C�˵�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�˵�Doc* C�˵�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�˵�Doc)));
	return (C�˵�Doc*)m_pDocument;
}
#endif //_DEBUG


// C�˵�View ��Ϣ�������


void C�˵�View::OnShowname()
{
	// TODO: �ڴ���������������
	CString s=_T("����ǿ");
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);


}
