
#include "stdafx.h"

#include "w32.h"

char* pchar()
{
	return "从静态库取得的字符串";
}

int f::GetA() {
	return a + 1;
}