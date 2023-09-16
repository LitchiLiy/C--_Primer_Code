#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
 
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. 只有void函数才能用return;直接跳出函数, 其他的都需要带个数值.
        2. 函数返回可以用引用返回
    */

    _getch();
    return 0;
}