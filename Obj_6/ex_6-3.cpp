#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

void big_small(int num1, int num2)
{
    if(num1 > num2)
    {
        std::cout << num1 << std::endl;
        return;
    }
    if(num1 < num2)
    {
        std::cout << num2 << std::endl;
        return;
    }
    else
    {
        std::cout << "两个整数一样大" << std::endl;
        return;
    }
}

std::string big_small1(int num1, int num2)
{
    if(num1 > num2)
    {
        return std::to_string(num1);
    }
    if(num1 < num2)
    {
        return std::to_string(num2);
    }
    else
    {
        return "两个整数一样大";
    }
}
int &findbignum(int &numm1, int &numm2)
{
    if(numm1 > numm2)
    {
        return numm1;
    }
    if(numm1 < numm2)
    {
        return numm2;
    }
    else
    {
        return numm1;
    }
}
std::vector<std::string> big_small2(int num1, int num2)
{
    if(num1 > num2)
    {
        return {"最大的值是" + std::to_string(num1)};
    }
    if(num1 < num2)
    {
        return {"最大的值是" + std::to_string(num2)};
    }
    else
    {
        return {"两个整数一样大"};
    }
}

int factorial(int n)
{
    if(n > 1)
    {
        return n * factorial(n-1);
    }
    else
    {
        return 1;
    }
}

// int (*shuzhuzhizhen(int (*a)[10], int (*b)[10]))[10]
// {
//     auto sizea = std::begin(a) - std::end(a);
//     auto sizeb = std::begin(b) - std::end(b);
// }

auto shuzhuzhizhen1(int (*a)[10], int (*b)[10])->int(*)[10]
{
    return a;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. 只有void函数才能用return;直接跳出函数, 其他的都需要带个数值.
        2. 函数返回可以用引用返回, 也就是说将一个引用返回回去, 但是这个引用千万不要是局内变量的引用, 因为局内变量的所有东西都会被清除, 
        3. 当然你也可以返回一个指针回去, 
        4. 可以看到, 函数的返回类型可以作为右值, 也能使用string.size()这样的函数.
        5. 函数返回的引用可以作为一个左值来被赋值.
        6. 如果是vector<string>的话, 你return {"这是一串中文"}, 这个vector的大小是1, 也就是那串字符串只占一个格子.
    */
   // 无返回值

//    int numm1, numm2;
//    std::cin >> numm1 >> numm2;
//    big_small(numm1, numm2);
//    std::cout << big_small1(numm1, numm2) << std::endl;
//    std::cout << big_small1(numm1, numm2).size() << std::endl;

   // 引用返回
//    int num1 = 1, num2 = 3;
//    findbignum(num1, num2) = 9999;
//    std::cout << findbignum(num1, num2) << std::endl;
//    std::cout << num1<<'\n' << num2 << std::endl;
    // 列表初始化
    // int num1 = 10, num2 = 20;
    // for(auto &i : big_small2(num1, num2))
    // {
    //     std::cout << i << std::endl;
    // }

    // 递归函数
    // int num;
    // std::cin >> num;
    // std::cout << factorial(num) << std::endl;

    /*
        1. 返回数组指针有四种形式, 我感觉最常用的是标准形式和后置形式
        2. 这个数组指针不好搞, 反正好像至少二维, 然后返回的指针所绑定的数组还是外面的数组, 不是函数内部的, 所以不会被清除, 麻烦的要死.
        3. 尾纸返回类型好像也挺好用的
    */
    // int num1, num2;
    // std::cin >> num1 >> num2;
    // int (*p)[10] = shuzhuzhizhen(num1, num2);

    _getch();
    return 0;
}