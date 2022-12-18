// StrStaticLib.cpp : 定义静态库的函数。
//

#include"StrStaticLib.h"
#include "pch.h"
namespace StringFuncs
{
	char* strcpy(char* src)
	{
		int i, n;
		n = sizeof(src);
		
		char* NewString = (char*)malloc(sizeof(char) * n);
		if (src==NULL)
			return NewString = NULL;
		for (i = 0; *(src + i) != '\0'; i++)
		{
			*(NewString + i) = *(src + i);
		}
		*(NewString + i) = '\0';
		return NewString;

	}
	char* strcat(char* src1, char* src2)
	{
		char* NewString = src1;
		while (*NewString)
		{
			NewString++;
		}
		while (*NewString++ = *src2++);
		return NewString;
	}
}
