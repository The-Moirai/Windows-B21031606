// StrFuncsExec2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#   include <Windows.h>


int main()
{
    typedef int (*PMyStrcmp)(const char* str1, const char* str2);

    HMODULE hDll = LoadLibrary(L"StrDll.dll");

    PMyStrcmp MyStrcmp = (PMyStrcmp)GetProcAddress(hDll, "MyStrcmp");
    if (MyStrcmp != NULL)
    {
       std:: cout << MyStrcmp("aa", "bb");
    }

    FreeLibrary(hDll);
    std::cout << "Hello World!\n";
    std::cout << MyStrcmp("Class", "Classes");
    std::cout << MyStrcmp("Class", "Class");
    std::cout << MyStrcmp("Class", "C");
    std::cout << MyStrcmp("Class", NULL);
    std::cout << MyStrcmp(NULL, NULL);
}
