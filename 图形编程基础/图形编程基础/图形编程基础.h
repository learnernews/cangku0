
// ͼ�α�̻���.h : ͼ�α�̻��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cͼ�α�̻���App:
// �йش����ʵ�֣������ ͼ�α�̻���.cpp
//

class Cͼ�α�̻���App : public CWinApp
{
public:
	Cͼ�α�̻���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cͼ�α�̻���App theApp;
