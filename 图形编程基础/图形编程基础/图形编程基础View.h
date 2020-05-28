
// 图形编程基础View.h : C图形编程基础View 类的接口
//

#pragma once


class C图形编程基础View : public CView
{
protected: // 仅从序列化创建
	C图形编程基础View();
	DECLARE_DYNCREATE(C图形编程基础View)

// 特性
public:
	C图形编程基础Doc* GetDocument() const;
	int m_nRadious;
	CPoint m_pointOri;
// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C图形编程基础View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 图形编程基础View.cpp 中的调试版本
inline C图形编程基础Doc* C图形编程基础View::GetDocument() const
   { return reinterpret_cast<C图形编程基础Doc*>(m_pDocument); }
#endif

