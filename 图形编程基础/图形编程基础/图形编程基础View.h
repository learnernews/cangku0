
// ͼ�α�̻���View.h : Cͼ�α�̻���View ��Ľӿ�
//

#pragma once


class Cͼ�α�̻���View : public CView
{
protected: // �������л�����
	Cͼ�α�̻���View();
	DECLARE_DYNCREATE(Cͼ�α�̻���View)

// ����
public:
	Cͼ�α�̻���Doc* GetDocument() const;
	int m_nRadious;
	CPoint m_pointOri;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cͼ�α�̻���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ͼ�α�̻���View.cpp �еĵ��԰汾
inline Cͼ�α�̻���Doc* Cͼ�α�̻���View::GetDocument() const
   { return reinterpret_cast<Cͼ�α�̻���Doc*>(m_pDocument); }
#endif

