#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <stack>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. 容器适配器就两个, stack和queue, 一个是先进后出, 一个是先进先出, 前者只能单边进出, 后者有两边进出的能力
        2. stack就三个功能, 他只要求适配的形式拥有push_back的功能就行了,
    */
    std::stack<int> stk;
    for (size_t ix = 0; ix <= 10; ++ix)
    {
        stk.push(ix);
    }
    std::cout << stk.top();
    stk.pop();
    std::cout << stk.top();

    _getch();
    return 0;
}