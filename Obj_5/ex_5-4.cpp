#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
 
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // std::vector<int> vec_num1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, vec_num2{1, 2, 3, 4, 5, 6};
    // auto big_beg = vec_num1.size() > vec_num2.size() ? vec_num1.begin() : vec_num2.begin();
    // auto big_end = vec_num1.size() > vec_num2.size() ? vec_num1.end() : vec_num2.end();
    // auto sml_beg = (big_beg == vec_num1.begin()) ? vec_num2.begin()  : vec_num1.begin();
    // auto sml_end = (big_beg == vec_num1.end()) ? vec_num2.end() : vec_num1.end();

    // while(sml_beg != sml_end && *sml_beg != ' ')
    // {
    //     if(*big_beg != *sml_beg)
    //     {
    //         std::cout << "没有前缀关系" << std::endl;
    //         break;
    //     }
    //     ++big_beg;
    //     ++sml_beg;
    // }
    // if(sml_beg == sml_end)
    // {
    //     std::cout << "有前缀关系" << std::endl;
    // }
    /*
        1. 出错了, 搞不出来
    */
    
    // exam544
    // 2 用do while一点意思都没有
    
    // std::string nn;
    // do{
    //     std::string str1, str2;
    //     std::cout << "是否想比较两个字符串大小?[y/n]: " << std::endl;
    //     std::cin >> nn;
    //     if(nn == "n" || nn == "N")
    //     {
    //         break;
    //     }
    //     std::cout << "输入两个字符串: " << std::endl;
    //     std::cin >> str1 >> str2;
    //     if (str1.size() > str2.size())
    //     {
    //         std::cout << "str1大于str2" << std::endl;
    //         }
    //         else if(str1.size() < str2.size())
    //         {
    //             std::cout << "str1小于str2" << std::endl;
    //         }
    //         else
    //         {
    //             std::cout << "str1等于str2" << std::endl;
    //         }

    // } while (nn[0] == 'y' || nn[0] == 'Y');


    _getch();
    return 0;
}