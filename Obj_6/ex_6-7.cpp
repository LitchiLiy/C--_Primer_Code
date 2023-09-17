#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
using std::string;

typedef string::size_type (*pp_str1)(const string &str1, const string &str2);
string::size_type bidaxiao(const string &str1, const string &str2);

void f1(const string &p1, const string &p2, string::size_type (*sstr)(const string &str1, const string &str2));
void f2(const string &p1, const string &p2, pp_str1 strr);

pp_str1 f3();

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 函数指针
    /*
        1. 函数的decltype返回的类型, 或者说函数的数据类型是什么, 看两点: 函数的返回类型 + 函数的形参列表, 与名字无关
        2. 函数指针的定义方法和数组指针差不多
    */
   // 函数指针定义和使用
//    string::size_type (*p_str)(const string &str1, const string &str2) = &bidaxiao;
//    std::cout << p_str("hello", "world") << std::endl;
//    std::cout << (*p_str)("hello", "world") << std::endl;
//    int(*a)[10];

   // 函数指针作为形参放到函数中去
   /*
    1. 函数指针作为形参放到函数中去,方式有两种,第一种是直接将函数丢进去, 第二种是将指针丢进去, 效果都是一样的
    2. 下面两条函数定义是一样的.
   */
    // void f1(const string p1, string::size_type (*sstr)(const string &str1, const string &str2));
    // void f2(const string p1, string::size_type sstr(const string &str1, const string &str2));
    // f1("hello", "world", bidaxiao);

    /*
        用类型别名定义函数指针和函数形参
        1. 注意名字放置的位置就行了, 如下所示pp_str1就是一个类型为前后两种的一个函数指针, pp_str2是另一种类型别名用法.
        2. 用这种类型别名方式可以迅速创建一系列函数指针.
        3. 中类型别名来代替函数中的指针函数形参也是一种很方便的方式
        4. 类型别名也可用用来作为函数的返回类型, 也就是说我想用一个函数来返回函数指针的时候也能用这个
    */
    typedef string::size_type (*pp_str1)(const string &str1, const string &str2);
    typedef decltype(bidaxiao) pp_str2;
    pp_str1 zhizhen_str = &bidaxiao;

    std::cout << zhizhen_str("hello", "world");
    f2("hello", "world", f3());

    /*
        返回一个函数指针的函数定义:
        1. 用using需要注意一点就是, 函数类型和函数指针类型是不一样的, 如果直接使用decltype就会变成函数类型
        2. 标准定义和尾纸返回类型, 下面这两条都是等效的, 定义了返回函数指针的两个函数 名字称为zhizhen
    */
    using pp1 = decltype(bidaxiao);
    using pp2 = string::size_type (*)(const string &str1, const string &str2);
    pp1 *p1 = &bidaxiao;
    pp2 p2 = &bidaxiao;

    string::size_type (* zhizhen(const string &str1, const string &str2))(const string &str1, const string &str2);
    auto zhizhen(const string &str1, const string &str2)->string::size_type (*)(const string &str1, const string &str2);

    _getch();
    return 0;
}
string::size_type bidaxiao(const string &str1, const string &str2)
{
    return str1.size() > str2.size() ? str1.size() : str2.size();
}
void f1(const string &p1, const string &p2, string::size_type(*sstr)(const string &str1, const string &str2))
{
    std::cout << sstr(p1, p2) << std::endl;
}
void f2(const string &p1, const string &p2, pp_str1 strr)
{
    std::cout << strr(p1, p2) << std::endl;
}
pp_str1 f3()
{
    return &bidaxiao;
}