#include"pch.h"
int MyStrcmp(const char* str1, const char* str2)
{
	if (strcmp(str1, str2) > 0)
		return 1;
	else if (strcmp(str1, str2) == 0)
		return 0;
	else
		return -1;
}