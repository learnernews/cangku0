
// MFC3.30View.h : CMFC330View 类的接口
//

#pragma once


class CMFC330View : public CView
{
protected: // 仅从序列化创建
	CMFC330View();
	DECLARE_DYNCREATE(CMFC330View)

// 特性
public:
	CMFC330Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC330View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFC3.30View.cpp 中的调试版本
inline CMFC330Doc* CMFC330View::GetDocument() const
   { return reinterpret_cast<CMFC330Doc*>(m_pDocument); }
#endif

