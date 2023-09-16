#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
double fact(int n)
{
    if(n > 0)
    {
        double total = 1;
        while(n != 0)
        {
            total *= n;
            n--;
        }
        std::cout << "这个数的阶层为: " << std::endl;
        return total;
    }
    else
    {
        std::cout << "请输入一个非负整数!" << std::endl;
        return -1;
    }
}
int loca_static(int xincan)
{
    static int x = 0;
    return x++;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // exam61

    // 6.14
    // int num;
    // std::cin >> num;
    // std::cout << fact(num) << std::endl;
    // _getch();
    // return 0;
    /*
        1. 无论如何形参初始化时类型是一样, 那每个形参前面也必须跟着一个数据类型, int i, intj, 而不是int i,j
    */

    // 局部静态变量
    // int num = 10;
    // while(num--)
    // {
    //     std::cout << loca_static(num) << std::endl;
    //     std::cout << loca_static->x << std::endl;
    // }
    /*
        1. 形参和局部变量差不多, 作用域都被限制在函数内部, 而静态局部变量则不是, 如果在函数中被定义了, 那函数下次被调用时仍然存在, 数值仍然保留
        2. 如果函数内部定义了一个变量的名字与函数外的相同, 那么函数外的那个变量会被隐藏, 直到这个函数结束.
        3. 静态变量没法在函数外被调用, 不同于全局变量
    */
    
    _getch();
    return 0;
    
}