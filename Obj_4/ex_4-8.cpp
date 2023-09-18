#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

#include <bitset>
using std::bitset;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        关于位移运算符:
        1. 如果一个字面值是8为, 你现在强行让他变成32位, 从2进制的角度来看, 多出来的位数只会在高位上添加, 并且是补0.
        2. 位移出去的值就直接没了, 左移<<是低位往高位移动, >>右移的高位往低位移动.
        3. 1UL 是unsignen long为32位.
    */
    u_char uc = 0233;
    std::cout << bitset<32>(uc) << "\n"
              << bitset<32>(uc << 4) << std::endl;

    std::cout << 1UL << "\n"
              << (1UL << 4) << std::endl;

    _getch();
    return 0;
}