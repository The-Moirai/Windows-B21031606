// StrFuncsExec2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"StrDll.h"
int main()
{
    std::cout << "Hello World!\n";
    std::cout << MyStrcmp("Class", "Classes");
    std::cout << MyStrcmp("Class", "Class");
    std::cout << MyStrcmp("Class", "C");
}
