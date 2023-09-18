#include <conio.h>
#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
using std::vector;
using std::string;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. vector<T> a(b) 用圆括号就是一个副本赋值初始化, 如果是花括号{}就是定义初始化, 也称之为列表初始化, 这种是不能用圆括号初始化的
        2. 关于初始化的事情: 我们如何区分我给的数字10是用来定义vector的容量还是列表初始化呢? 用{}和()来区分, 编译器一开始会识别是否列表初始化, 如果列表初始化不成功, 那么就会考虑默认的初始化方式
        3. 比如vector<string> str1{10}, 结果是初始化10容量大小, 因为如果是列表初始化那么元素必须是string类的, 但是里面的元素是int类, 所以列表初始化失败, 只能默认初始化
        4. string和vector的索引下标设置为size_type类型. 而不是int
    */

   // exam 331
    // vector<string> vec_str(10, "null");

    // exam 332
    // int num;
    // vector<int> num_vec;
    // while(std::cin >> num)
    // {
    //     num_vec.push_back(num);
    // }

    // string str;
    // vector<string> str_vec;

    // while(std::cin >> str)
    // {
    //     str_vec.push_back(str);
    // }

    // exam 333
    // 1
    // vector<int> v1, v2(10), v3(10, 42), v4{10}, v5{10, 42};
    // vector<string> v6{10}, v7{10, "hi"};
    // std::cout << "输出每个vector变量的容量大小:" << std::endl;
    // std::cout << v1.size() << "\n"
    //           << v2.size() << "\n"
    //           << v3.size() << "\n"
    //           << v4.size() << "\n"
    //           << v5.size() << "\n"
    //           << v6.size() << "\n"
    //           << v7.size() << "\n"
    //           << std::endl;
    // std::cout << "输出每个vector的值: " << std::endl;
    // for(auto i:v4)
    // {
    //     std::cout << i << std::endl;
    // }

    // 2 输入一组词
    // string word;
    // vector<string> vec_str;
    // while(std::cin >> word)
    // {
    //     vec_str.push_back(word);
    // }
    // std::cout << "这组词被改成大写后为: " << std::endl;
    // for(auto &i:vec_str)
    // {
    //     for(auto &j:i)
    //     {
    //         j = toupper(j);
    //     }
    //     std::cout << i << std::endl;
    // }
    /*
        1. 引用也以已经被初始化对象了的引用, 可以叠加引用, 引用的引用的引用对象是最开始的那个引用的初始化对象.
        2. 如果你想改变原先vector的内容必须学会引用, 不然就是一个赋值而已.
    */

   // 4
    // vector<int> num(10, 42);
    // vector<int> num = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    // vector<int> num;
    // for (int i = 0; i < 10; i++)
    // {
    //     num.push_back(42);
    // }
    // 第一种方法更好

    // 5


        _getch();
    return 0;
}