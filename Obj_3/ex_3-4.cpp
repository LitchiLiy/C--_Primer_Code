#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
using std::string;
using std::vector;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    // 迭代器第一个字母大写
    // string str("hello world!");
    // auto it = str.begin();

    // if(it != str.end())
    // {
    //     *it = toupper(*it);
    // }
    /*
        如果你的迭代器来自string类型, 他是没有-empyt()这个操作的, 这个操作只能来自其他类型, 比如说vector类
    */

   // 用迭代器化为大写
    // string str;
    // vector<string> str_vec;
    // while(std::cin >> str)
    // {
    //     str_vec.push_back(str);
    // }
    // for (auto it = str_vec.begin(); it != str_vec.end() && !it->empty(); ++it)
    // {
    //     for(auto &c:*it)
    //     {
    //         c = toupper(c);
    //     }
    //     std::cout << *it << std::endl;
    // }

    // // 迭代器的定义
    // string::iterator str_it;
    // string::const_iterator str_const_it;
    // vector<int>::iterator vec_int_it;

    // 二分搜索算法
    // vector<int> num_vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // auto beg = num_vec.begin(), end = num_vec.end();
    // auto mid = beg + (beg - end) / 2;
    // int sought = 3;
    // while((mid != end) && (*mid != sought))
    // {
    //     if(sought < *mid)
    //     {
    //         end = mid;
    //     }
    //     else
    //     {
    //         beg = mid + 1;
    //     }
    //     mid = beg + (beg - end) / 2;
    // }
    // std::cout << *beg << *end << std::endl;
    /*
        因为用beg - end得到的是deffience_type类型, 而beg+end/2得到的是一个不知道什么鬼类型
    */
    

    _getch();
    return 0;
}