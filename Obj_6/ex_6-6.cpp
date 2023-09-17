#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

void ff(int i);
void ff(double i, double j = 3.14);
void ff(int i, int j);
void ff(const int i);
// void ff(int &i);
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. 关于重载函数怎么选择的问题: 候选函数, 可行函数
        2. 当多个形参的时候服从两条规则: a. 所有形参都不劣于, b. 至少有一个形参优于其他重载函数, 不然就会报错不选.
        3. 整数对int是更匹配的, 对double不是更匹配.
    */
   // 函数重载选择
    // ff(2.5, 42);
    // ff(23);
    // ff(42, 23);
    // ff(2.52, 3.254);
    /*
        1. 可以看到, 就第一条有问题, 因为第一条谁也没赢过谁
        2. 第二节讲了实参转化的问题, 比如说输入了一个'a'这个字符字面值, 但他转化成int类型了, 然后调用了ff(int)中
        3. 如果ff之间单纯的是const之间的差距, 即ff(const int) 和 ff(int) , 那么一个const int num变量会调用前者, int变量调用后者, 这个是没有异议的.
    */
   // 关于const和char
    ff('a');
    // const int i = 999;
    // ff(i);
    /*
        1. const int 和 int不能一起定义, 不给过编译, 说重载冲突了, 但是char这个是成功了.
    */
    

    _getch();
    return 0;
}

void ff(int i)
{
    std::cout << i << std::endl;
}
void ff(double i, double j)
{
    std::cout << i+1.0 << j+1.0 << std::endl;
}
void ff(int i, int j)
{
    std::cout << i+2 << j+2 << std::endl;
}
// void ff(int &i)
// {
//     std::cout << i+3 << std::endl;
// }
// void ff(const int &i)
// {
//     std::cout << i+4 << std::endl;
// }
