
// MFC3.30View.h : CMFC330View ��Ľӿ�
//

#pragma once


class CMFC330View : public CView
{
protected: // �������л�����
	CMFC330View();
	DECLARE_DYNCREATE(CMFC330View)

// ����
public:
	CMFC330Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC330View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFC3.30View.cpp �еĵ��԰汾
inline CMFC330Doc* CMFC330View::GetDocument() const
   { return reinterpret_cast<CMFC330Doc*>(m_pDocument); }
#endif

