#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. 额外的string操作, 从半中间初始化或拷贝字符: 迭代器, 下标初始化(搞不明白, 不搞了), 指针的那个操作不会弄, 感觉下标操作初始化好用一点, 当然这只是初始化环节
        2. 赋值环节sbustr, 返回一个选定的数值.(两种重载函数), 一般是取数值之后的所有string字符
    */
// const char *c = "Hello world!!";
// string str1(c);
// string str2(str1, 1, 2);
// cout << str1 << str2 << endl;

// string str3{"Hello world!!"};
// // const char *cp = &str3;
// // string str4(cp, 6);
// string str5(str3, 1, 4);
// cout << str5 << endl;

// string str6, str7;
// str6 = str3.substr(1, 4);
// str7 = str3.substr(7);

    /*
        1. string的搜索操作, find你想要寻找的字符串, 返回字符串第一个字符出现的位置, 空格字符也算一个位置
        2. find_first_of体系("想要寻找的字符"), 寻找的是括号内""内部的所有字符单独拆开来看, 而不是整个看.
    */

    string str1{"you are a man."};
    cout << str1.find("man");

    cout << str1.find_first_of("man");

    _getch();
    return 0;
}