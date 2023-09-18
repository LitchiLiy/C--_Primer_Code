#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
 
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // exam4.9
    // 1
    // 测试内置类型的数据大小
    std::cout << sizeof(int) << "\n"
              << sizeof(char) << "\n"
              << sizeof(unsigned char) << "\n"
              << sizeof(unsigned int) << "\n"
              << sizeof(long) << "\n"
              << sizeof(unsigned long) << "\n"
              << std::endl;

    /*
        1. char 和 unsigned char都是8位.
        2. sizeof得到的是一个常量表达式: 类似于constexpr, 并不会算真正的数值, 只会返回表达式所占的字节数是多少.
    */

    // 2
    int x[10], *p = x;
    std::cout << sizeof(x) / sizeof(*x) << std::endl;
    /*
        1. 前面一个x指的是整个数组所占的字节数大小, 后面的x指的是地址, 因为x会被翻译成地址, *x就像是解印符一样将x[0]送到sizeof中去, 所以结果是10.
    */
    
    _getch();
    return 0;
}