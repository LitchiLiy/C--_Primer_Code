#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
void morenxingcan(int i, const std::string str, const char c = 'a');
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 默认形参
    int i = 9;
    morenxingcan(9, "you are a man");
    /*
        1. 默认形参可以知道, 默认的操作是在函数声明中, 并且所有的默认值都必须排在后面, 不能放在前面.
        2. 在使用时, 想使用默认的形参就不要填那个位置的数值(反正在最右边, 妨碍不到你)
        3. 函数定义可以在任何地方, 只要在main前声明一下就行了.
        4. 这个默认形参操作里面的数值可以放任何东西, 包括表达式等, 什么时候赋值呢, 在你调用这个函数的时候赋值, 而不是编译的时候, 所以可以不用放常量表达式.
    */
    

    _getch();
    return 0;
}




void morenxingcan(int i, const std::string str,const char c)
{
    std::cout << i << str << c << std::endl;
}