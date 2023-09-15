#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
using std::string, std::vector, std::cin, std::cout, std::endl;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 条件运算符
    std::cout << ( (42 == 42) ? "true" : "false" ) << std::endl;
    // std::cout << (42 == 42) ? "true1" : "false" << std::endl;
    // std::cout << 42 == 42 ? "true2" : "false" << std::endl;
    /*
        1. 条件运算符优先级低的要死, 上面三条后两条都是不合法的, 报错
    */
    // exam 4.7
    // 1
    // cout << "请输入一系列整数:" << endl;
    // vector<int> vec_num;
    // int num;
    // while(cin >> num)
    // {
    //     vec_num.push_back(num);
    // }
    // cout << "输入的整数中奇数翻倍: " << endl;
    // for(auto &c : vec_num)
    // {
    //     c = (c % 2 == 0 ? c : c * c);
    // }
    // for(auto &c : vec_num)
    // {
    //     cout << c << endl;
    // }

    // 2 成绩划分
    // cout << "请输入一系列成绩:" << endl;
    // vector<int> vec_score;
    // int temp_score;
    // while(cin >> temp_score)
    // {
    //     vec_score.push_back(temp_score);
    // }
    // auto iter_beg = vec_score.begin();
    // auto iter_end = vec_score.end();
    // while(iter_beg != iter_end)
    // {
    //     cout << (*iter_beg >= 90 ? "high pass" : *iter_beg >= 75 ? "pass"
    //                                          : *iter_beg >= 60   ? "low pass"
    //                                                              : "fail")
    //          << endl;
    //     ++iter_beg;
    // }
    
    _getch();
    return 0;
}