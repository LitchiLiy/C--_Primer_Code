#include <conio.h>
#include <iostream>
 
<<<<<<< HEAD
int main()
=======
int mian()
>>>>>>> 04d80c1 (第一次将本地文件夹include路径添加, 可以直接从本地文件夹中添加头文件)
{
    /*
        关于typedef这个东西, 他和常量配合时你需要注意typedef定义结束后的那个类型是一个基本数据类型还是一个符合类型, 然后才和const配
    */
    /*
        关于auto: 必须初始化, 并且定义的类型会自动计算auto a = b + c, 会推理bc的数据类型后为a赋予一个数据类型.
        如何用auto去定义指针: 直接auto a = &b就行了, 不用*这个符号, 将地址赋值就代表着定义指针.
        用auto多个定义时, 定义的所有变量的类型必须相同.
    */
    /*
     关于decltype( )函数的用法: 先看括号能是不是变量, 返回变量的数据类型, 如果括号内不是变量, 那么就返回括号内最终结果的数据类型.
     哲理有一点需要注意 *p的数据类型是引用, 而不是int值. 也就是说decltype(*p)返回的数据类型是 int&.;
    */

   /*
    exam 2.53
    //
    整形: a b c 
    引用: d
    a = 4, b = 4,c = 4,d = 4

    //
    decltype是根据表达式结果的数据类型来返回数据类型, 并不返回表达式的值
    而auto是计算表达式的值后连同数据类型一起返回, 并且对于顶层const不会保留, 而decltype会保留顶层const的类型

    */
   

    _getch();
    return 0;
}