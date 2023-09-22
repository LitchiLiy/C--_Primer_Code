#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. istringstream就是一个字符串缓冲器, 先存着, 然后当cin用,
        2. istringstream对象在被读取完所有内容之后会失活, 也就是close, 所以定义一个sstream对象要在循环内部定义, 而不是循环外部可以重复使用, 是不能重复使用的.
        3. istringstream和ostringstream就像是C++程序内置的输入缓冲区和输出缓冲区, 符合cin和cout的所有语法, 类为sstream头文件.
    */
    // 例子
    // exam831
    // 1
// struct People
// {
//     std::string name;
//     std::vector<std::string> number;
// };

// std::string lineword;
// std::vector<People> peoplelist;
// while(getline(std::cin, lineword))
// {
//     People person;
//     std::istringstream str;
//     std::string tpnumber;
//     str.str(lineword);
//     str >> person.name;
//     while(str >> tpnumber)
//     {
//         person.number.push_back(tpnumber);
//     }
//     peoplelist.push_back(person);
// }
    // 2
// ifstream readata("Obj_8/ifstream_data.txt");
// vector<string> content_list;
// string word;
// string linecontent;
// while(getline(readata, linecontent))
// {
//     content_list.push_back(linecontent);
// }
// for(const auto &str : content_list)
// {
//     istringstream linecin(str);
//     while(linecin >> word)
//     {
//         cout << word << endl;
//     }
// }


    _getch();
    return 0;
}