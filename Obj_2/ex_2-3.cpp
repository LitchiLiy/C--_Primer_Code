#include <iostream>
#include <conio.h>

int main()
{
    // 1
    // int i = 1024;
    // int j = 2048;
    // int &yinyong1 = i, &yinyong2 = j;
    // int &yinyong3 = yinyong1;
    // std::cout << i << j << std::endl;
    // std::cout << yinyong1 << yinyong2 << yinyong3 << std::endl;

    // double dd;
    // double &ddyinyong = dd;
    // dd = 10;
    // ddyinyong = 100;
    // std::cout << dd << ddyinyong << std::endl;
    // double yy = 3.1;
    // double &ddyinyong = yy;
    // std::cout << ddyinyong << std::endl;

    /*
        引用被初始化定义之后无法再次更改, 引用没有对象, 故没有地址, 没有地址故不能被指针所指.
        指针所指向的对象数据类型必须要相同, 因为指针有地址, 数据类型不同导致地址的大小不同会错误.
        在初始化指针时用*p来指向&val的地址, p值就是记录着val的地址, 而*p输出的是val的值. 这里需要注意的是, 指针p是指针的名字, *p是指针指向地址的值, 或者说*p是引用.
        尽量初始化所有的指针, 比如空指针 double *p = nullptr, 但是你不能拿一个变量值为0的变量去初始化一个空指针, 这是错误的操作, 空指针不指向任何对象.
        有一种void类型的指针可以对其赋予任意数据类型的指针或变量, 但是没法通过void类型的指针去给所指向的对象赋值, 因为你不知道所指对象的数据类型, 固然不能对其赋值. void的作用比较有限.
    */

    // exam 2.32
    /*
        2.19 : 指针有地址, 引用没有地址
        2.20 : 将i平方
        2.21 : a是错的, 数据类型不同; b是错的, 不能这样初始化空指针; c是对的
        2.22 : 第一个判断p是不是一个int类的空指针, 第二个判断这个指针指向的对象的值是不是0
        2.23 : 不能
        2.24 : p的void是一个可以被任意指向的类型指针, 而lp的数据结构不一样当然是不合法的
    */

   /*
    定义的数据类型: 基本数据类型和复合数据类型
    变量名: 标识符
    类型修饰符: & *
   */
   
   /*
    **p指的是指针的指针, 其指向的对象是一个指针的地址, 返回的值是一个指针, 如果**p = &q, 那么p就是q的地址, *p就是q这个指针, **p就是q这个指针指向的对象.
    从应用角度来看, 改变p就改变了p指向另一个指针, 改变*p就改变了q指向的对象, 改变**p就改变了q指向对象的值.
   */
    int i = 10;
    int *p = &i;
    int **q = &p;

    int j = 20;
    int *z = &j;

    std::cout << **q << *q << q << std::endl;

    q = &z;
    std::cout << **q << *q << q << std::endl;
    *q = &i;
    std::cout << **q << *q << q << std::endl;
    **q = 200;
    std::cout << i << **q << std::endl;

  
    

    _getch();
    return 0;
}