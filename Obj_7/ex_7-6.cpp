#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

struct Leijintai
{
public:
	static void change()
	{
		++i;	
	}
	void print()
	{
		std::cout << i << std::endl;
	}
	static int i;
};
int Leijintai::i = 2;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Leijintai L1;
	Leijintai::i = 30;
	L1.change();
	Leijintai::change();
	L1.i = 40;
    /*
        1. 类静态定义时必须在类外部初始化, 并且这个类静态变量或函数存储于对象之外, 与任何类对象无关
        2. 类静态相当于类全局变量, 所有的有关于这个类的对象都能对静态变量或者说是函数进行调用.
        3. 静态函数只能调用类静态变量, 类成员是无法调用的, 因为他没有this?, 静态变量永远不是const的
        4. 也就是你可以将静态变量搞成一个全局整合包用, 
    */
    
    _getch();
    return 0;
}