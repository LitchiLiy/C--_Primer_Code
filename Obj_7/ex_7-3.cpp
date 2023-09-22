#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
 
#include "Obj_7/myinc/Screen.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. mutable的作用就是被.运算符调用时, 如果你这个函数被定义了const, 那么被mutable声明了的变量是可以改变的, 突破const的限制.
        2. 内联函数inline的意思就是, 本来当使用到函数a时, 会跳转到a定义的地方, 等函数a内部处理完之后再跳回来, 如果声明了inline, 可以视为函数的定义就嵌在了这里, 简化运算
        3. 关于this成员函数为什么return *this, 并且函数开头为什么是引用开头, 为了在调用函数时可以连续调用, 连续的使用点函数. (需要注意的是const不能连续点调用)
        4. const的重载函数
    */
    Screen myscreen(5, 5, '*');
    myscreen.set('x').set('o'); // 正如这里所示可以两联调用, 但是如果是一个const的函数就不能了.

    // exam732
    /*
        1. 如果不是Screen&, 而是Screen返回类型, 那么在连续调用的时候, 第二个函数改变的就不是你想改变的那个, 而是一个隐性的temp类对象, 会出错.
        2. 我们也可以将一个类定义为友元, 或者说一个其他类的成员函数定义成友元(看下面的XY方式)
    */

   // exam 733
//     class X;
//     class Y;

//     class X
//     {
//         friend class Y;
//         X &get(const Y &y)
//         {
//             std::cout << y.ynum << std::endl;
//             return *this;
//         }

//     public:
//         Y *ptr;
//         };

//    class Y
//    {
//         friend class X;
//         friend X &X::get(const Y &y);
//     public:
//         X Xproject;

//     private:
//         int ynum;
//    };
/*
    1. 友元函数没搞成, 你自己慢慢想吧
*/


    _getch();
    return 0;
}