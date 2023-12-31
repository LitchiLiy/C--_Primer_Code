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
    /*
        1. else只会跟着最近的一个if进行匹配, 而不是看你代码的缩进, 所以最好的解决方法就是每个if后面都跟着花括号{}, 这样就能避免不需要的错误.
    */
    // int i = 11, j = 11, k = 12;
    // if (i != 11)
    //     if (i != 12)
    //         i = k;
    // else
    //         i = 15;
        
    // std::cout << i << std::endl;
    // 这里如果是python的话就是15了, 但是这里C++由于悬垂else性质, 导致else跟着的是最近的上面那个内层if, 而不是本意的最外层if

    // 关于switch语句
    // char ch;
    // int yuanyin = 0;
    // while(std::cin >> ch)
    // {
    //     switch (ch)
    //     {
    //     case 'a':
    //         ++yuanyin;
    //         break;
    //     default:
    //         break;
    //     }
    // }
    // std::cout << yuanyin << std::endl;
    /*
        1. case后面只能跟着常量表达式, 或者是整数, 和数组的初始化的[]里面的要求一样.
        2. case进去之后如果你没有break, 那么将会执行case后面的所有语句, 所以break你要有目的的设置.
        3. char变量在while(cin>>char)的时候, 在终端中可以asdfgh这样连着输入不用打空格, 他识别到一个字符之后会自动while进去.
    */

   // exam 532

   // 1
    // char ch;
    // int yuanyin = 0, fuyin = 0;
    // int zhibiaofu = 0;
    // while(std::cin>>ch)
    // {
    //     ch = tolower(ch); // 大写转小写好统计.
    //     switch(ch)
    //     {
    //         case 'a':
    //         case 'e':
    //         case 'i':
    //         case 'o':
    //         case 'u':
    //             ++yuanyin;
    //             break;
    //         default : 
    //             if(isspace(ch))
    //             {
    //                 ++zhibiaofu;
    //             }
    //             else
    //                 ++fuyin;
    //             break;
    //     }
    // }
    // std::cout << yuanyin << std::endl;
    // std::cout << fuyin << std::endl;
    // std::cout << zhibiaofu << std::endl;
    /*
        1. 你会发现char类型不读取字表符, 空格, 换行符这种类型的符号. 
    */
    
    // 2 读取输入语句的所有空格, 换行符, 制表符
    std::string str;
    int yuanyin = 0, fuyin = 0;
    int zhibiaofu = 0;
    vector<string> str_vec;
    while(std::getline(std::cin, str))
    {
        str_vec.push_back(str);
    }
    for(auto s:str_vec)
    {
        std::cout << s << std::endl;
        for(auto ch : s)
        {
            std::cout << ch << std::endl;
            switch(ch)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    ++yuanyin;
                    break;
                default : 
                    if(std::isspace(ch))
                    {
                        ++zhibiaofu;
                    }
                    else
                        ++fuyin;
                    break;
            }
        }
    }
    std::cout << yuanyin << '\n'
              << fuyin << '\n'
              << zhibiaofu << std::endl;
    /*
        1. 如果是while(cin >> str)的话, 这个str将不会读取you are a man.中的所有空格, 而是一个个单词来读, you一个, are一个
        2. 然后就会发现vector里面没有一个空格, 空间被用来存储单词了. 
        3. 所以想要得到空格, 或者想vector存储一句带空格的话, 就要用getline来读取到str中.
    */
    
    // 3 检测ff只要先判断有没有f, 再用switch就行
    
    _getch();
    return 0;
}