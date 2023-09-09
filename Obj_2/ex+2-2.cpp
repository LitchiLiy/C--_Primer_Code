#include <iostream>
#include <conio.h>

int asdfg;
int i = 10;

int main()
{
    // 1 列表初始化
    // int i = 0;
    // int i = {0};
    // int i{0};
    // int i(0);
    // std::cout << i << std::endl;

    // 2 
    // int global_int;
    // std::string asdf("asd");
    // std::cout  << asdfg;
    // /*
    //     第一个属于函数外的整形初始化, int main也算函数外, 初始化为0, 第二个是类初始化, 是空字符串, 空的, 没有任何东西.
    //     函数外的int初始化也是0.
    // */

    // 3
    // int 1_or_2 = 1;
    // int double = 1;
    int _;
    // int catch - 22;
    double Double = 3.15;
    std::cout << _ << Double << std::endl;
    // extern int al;
    // std::cout << al << std::endl;

    /*
        大写字母开头的那种Double这种命名方式是合法的, 当然你也可以Int, Float这种命名, 单单下划线_也是可行的, 数字开头是不允许的.
        声明的变量是无法直接让他输出值的, 编译都编译不了.
    */

   // 4

    
    // int i = 100;
    // int j = i;
    // std::cout << i << std::endl;

    int sum = 0;
    for (int i = 0; i != 10;++i)
    {
        sum += i;
    }
    std::cout << i << sum << std::endl;

    /*
        如果全局变量的一个名字i定义了值, 在函数的区块内再次用这个名字定义, 那么这个全局变量的定义会被这个函数块所覆盖. 也就是函数块定义的优先级更高. 
    */
    

    _getch();
    return 0;
}