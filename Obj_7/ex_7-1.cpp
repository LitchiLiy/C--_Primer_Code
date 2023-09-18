#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>


#include "Obj_7/myinc/Sales_data.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. 关于this: 当一个类对象被用.函数访问类对象的函数时, 该函数会自动形成一个非常量指针形参, 称之为this, 并且将这个类对象的地址传给this, 即this为一个指向这个对象的指针.
        2. 关于->符号, total->isbn() == (*total).isbn(). 只有指针才能用->, 或者说只有地址才能用->, 而且这个指针是指着一个类对象.
        3. 在定义函数的过程中, 如果是外部定义, 需要在函数名声明你是来自哪个类的, Sales_data::print()类似, 然后作用域里用到的变量就是默认是this指向的变量.
        4. 注意: this不是一个常量指针, 故在定义函数时, 可以后置一个const使this的东西变成不能动的, 一旦你加了这个const, 那么this的成员全部都变成const了, 所以在return一个成员的时候, 如果你的返回类型是一个非const引用, 此时会报错说你这个限定符会被丢掉.
    */
    // exam713
    // 3
    /*
        因为read函数需要将引入的items类输入进去, 要改变类的东西, 而print函数只是输出而已, 并不输入, 让其变成cosnt可以提高容错, 比如说一些字面值也能输出出来.
    */
    // 4
    /*
        如果在声明的时候遇到std::ostream报错说遇到不完整的声明的时候, 添加iostream头文件就行
    */
    // 条件的作用就是判断有没有东西输入, 如果有就输入.

    // 构造函数
    // exam714
    // 1
    Sales_data total1("1234"), total2("12345678", 12, 1.0), total3(std::cin);
    print(std::cout, total1);
    print(std::cout, total2);
    print(std::cout, total3);
    /*
        1. 这里遇到的一些错误, 比如说add函数的设置, 返回的是一个Sales_data的一个类对象, 由于函数内有用到tt这个内变量, 所以这里不能返回引用, 只能赋值返回
        2. 关于构造函数的输入式初始化, 在类内和类外都需要初始化, 类内用Sales_data(std::istream &)先声明, 类外用Sales_data::Sales_data(std::istream &str){ read(str, *this)}来在此构造, 这样编译才不会出错
        3. 构造函数的意义在于: 类对象可以用()来初始化, 初始化方式可以为(自带数值), 或者是从终端输入.
        4. 在.h文件的开头声明所有的函数, 使得这些函数都能用在后面的定义中, 即使是struct Sales_data;这个也要声明
        5. cin类型的构造函数(){}<-这里不用加;号
    */

    // 2
    // 5 为我么的Person显示的构造函数
    

    _getch();
    return 0;
}