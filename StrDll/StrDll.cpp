#include"pch.h"
int MyStrcmp(const char* str1, const char* str2)
{
	if((str1 != NULL) && (str2 == NULL))
		return 1;
	else if ((str1 == NULL) && (str2 == NULL))
		return 0;
	if (strcmp(str1, str2) >0)
		return 1;
	else if (strcmp(str1, str2) == 0)
		return 0;
	else
		return -1;
}
