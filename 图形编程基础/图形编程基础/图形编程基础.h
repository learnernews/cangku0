
// 图形编程基础.h : 图形编程基础 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C图形编程基础App:
// 有关此类的实现，请参阅 图形编程基础.cpp
//

class C图形编程基础App : public CWinApp
{
public:
	C图形编程基础App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C图形编程基础App theApp;
