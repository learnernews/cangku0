// w32d.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "w32d.h"


// 这是导出变量的一个示例
W32D_API int nw32d=0;

// 这是导出函数的一个示例。
W32D_API int fnw32d(void)
{
    return 42;
}

W32D_API int GetInt()
{
	return 2020;
}
// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 w32d.h
Cw32d::Cw32d()
{
    return;
}
