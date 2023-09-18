#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
 
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 关于隐式转换
    /*
        1. 有符号和无符号的字节数是一样的.
        2. 当 'a' + 1这种运算时, char会转化成int, 然后再和1相加, 最后的结果还要看左值类型是什么再进行第二部转换.
    */
    // 关于显式转换
    // int i = 10;

    // static_cast<double>(i);
    // std::cout << i << sizeof(i) << std::endl;

    // char32_t c = static_cast<char32_t>(i);
    // std::cout << c << sizeof(c) << std::endl;

    const int i = 10;
    const int* const p = &i;
    int *pp = const_cast<int*>(p);

    std::cout << *pp << std::endl;
    /*
        1. 这些显式转换不是将本身的东西转换, 而是返回一个副本值, 是一个右值.
        2. const_cast只能转换指针, 引用等, int常量不能转换.
    */
    // exam 4.11.3
    // 2
    // int i;
    double d;
    const std::string *ps;
    char *pc;
    void *pv;
    // void *pv = const_cast<void *>(pv);
    // int i = static_cast<int>(*pc);
    // double *pv = <double*>(pv) = &d;
    /*
        1. 没怎么理解, 不过也不用理解了, 反正这三种显式转换只是为了代替老式的那种int(double)这种类似的转换的而已, 但又被警告尽量不要用.
    */
    

    _getch();
    return 0;
}