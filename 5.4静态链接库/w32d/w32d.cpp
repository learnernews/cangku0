// w32d.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "w32d.h"


// ���ǵ���������һ��ʾ��
W32D_API int nw32d=0;

// ���ǵ���������һ��ʾ����
W32D_API int fnw32d(void)
{
    return 42;
}

W32D_API int GetInt()
{
	return 2020;
}
// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� w32d.h
Cw32d::Cw32d()
{
    return;
}
