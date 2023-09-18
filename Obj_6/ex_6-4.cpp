#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;

int findbignum(int num1, int num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    if(num1 < num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}
void findbignum(string num1, string num2)
{
    if(num1.size() > num2.size())
    {
        cout << num1 << "比" << num2 << "更大" << std::endl;
    }
    if(num1.size() < num2.size())
    {
        cout << num2 << "比" << num1 << "更大" << std::endl;
    }
    else
    {
        cout << "两个字符串一样大一样大" << std::endl;
    }

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 重载函数
    int num1 = 10, num2 = 20;
    cout << findbignum(num1, num2) << std::endl;
    string s1 = "123", s2 = "4561";\
    findbignum(s1, s2);

    /*
        1. 重载函数的特点: 名字一样, 返回类型可以不一样, 形参必须不一样, 用于区分的关键在于输入的形参, 编译器会根据形参来选择使用哪个函数
        2. 但形参int 和double可能会搞混, 所以要注意
        3. 重载函数声明可能会被局部作用域的声明给隐藏, 意思就是说, 局部作用域的函数声明如果和外部的函数名字相同, 那么就会隐藏外部的函数声明, 因为编译器识别到局部有这个函数之后就不再去外部识别了.
        4. 小知识快捷键, ctrl + enter可以在一行的中间直接在下一行插入一个新的一行, ctrl + shift + enter可以在一行的中间直接在上一行插入一个新的一行
    */
    
    
    _getch();
    return 0;
}