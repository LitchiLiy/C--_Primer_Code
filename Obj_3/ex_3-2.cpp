#include <conio.h>
#include <iostream>
#include <string>
<<<<<<< HEAD
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
=======

int main()
{
>>>>>>> f21f0d0 (合理调整了一下.vscode文件, 将exe整合, 将inc整合,)
    using std::string;
    // string s1;
    // // string s2 = 'a'; // 错误, C++的string不允许将单个a字符赋值于字符串对象, 你可以使用"a"这样来赋值, 只不过多了个空字符号
    // string s3 = "asdfg";
    // string s4("123");
    // string s5(12, 'c');
    // string s6(s1);

    // string word;
    // while(std::cin >> word)
    // {
    //     std::cout << word << std::endl;
    // }
    // /*
    //     string读取会在空格处停止
    // */

    // string line;
    // while(getline(std::cin, line))
    // {
    //     std::cout << line << std::endl;
    // }
    /*
        getline读取停止符是换行键, 故可以读取整段带空格的字符串. 单单一个换行符都会被读进去, 输出一个空行.
    */
    // while(getline(std::cin, line))
    // {
    //     if(!line.empty())
    //     {
    //         std::cout << line << std::endl;
    //     }
    // }
    /*
        所以此时涉及到.emtpy()函数来判断是否为空, 因为getline判断不了
    */

    // auto type_size = line.size();
    /*
        这个size的数据类型是一个无符号的数据类型, 请在比较时用无符号的数据类型进行比较!
    */
    
    /*
        1. 比大小
        2. string相加的内容: 这里有一点需要注意, string的加法左右左右两边必须拥有一个为string对象, 字符串字面值是不允许直接相加的, 而且从左向右开始相加, 一个个来, 会将字符串字面值转化成string后再相加, 结果也是string的
    */
    // string s1, s2, s3;
    // s1 = "Hallo";
    // s2 = "Hallo World";
    // s3 = "abc";
    // std::cout << (s1 < s2) << (s1 > s3) << std::endl;

    // std::cout << (s1 + s3 + "\n") << (s2 + "my name is " + s3) << std::endl;
    
    // exam 3.22
    // 1
    // string wordline, word;
    // getline(std::cin, wordline);
    // std::cout << wordline << std::endl;
    // while(std::cin >> word)
    // {
    //     std::cout << word << std::endl;
    // }

    // 2
    /*
        输入运算符: 遇到空格就停止, 不然就是一直读取字符串, 直到空格就停止读取
        getline: 一读读一整行, 直到换行符就停止, 空格是被读取进去的
    */
    
    // 3
<<<<<<< HEAD
    // string compare1, compare2;
    // std::cout << "请输入两个字符串:" << std::endl;
    // getline(std::cin, compare1);
    // getline(std::cin, compare2);
    // std::cout << "将输出这两个字符串之间string的比较大小方式" << std::endl;
    // if (compare1 > compare2)
    // {
    //     std::cout << "较大的那个字符串是: " << compare1 << std::endl;
    // }
    // else if (compare1 < compare2)
    // {
    //     std::cout << "较大的那个字符串是: " << compare2 << std::endl;
    // }
    // else
    // {
    //     std::cout << "两个字符串相等, 都为"<< compare1 << std::endl;
    // }
    // int size;
    // size = (compare1.size() < compare2.size());
    // if (size == 1)
    // {
    //     std::cout << "较大的那个字符串是: \n" << compare2 << std::endl;
    //     std::cout << "他的长度大小为: \n"
    //               << compare2.size() << std::endl;
    // }
    // else if (compare1.size() > compare2.size())
    // {
    //     std::cout << "较大的那个字符串是: \n" << compare1 << std::endl;
    //     std::cout << "他的长度大小为: \n"
    //               << compare1.size() << std::endl;
    // }
    // else
    // {
    //     std::cout << "两个字符串相等, 都为" << compare1 << std::endl;
    //     std::cout << "他们的长度大小为: \n"
    //               << compare1.size() << std::endl;
    // }

    // 3.23节的内容
    // string str("hello world!!!");
    // for(auto c : str)
    // {
    //     std::cout << c << std::endl;
    // }

    // decltype(str.size()) size_cnt = 0;
    // for(auto c : str)
    // {
    //     if(ispunct(c))
    //     {
    //         ++size_cnt;
    //     }
    // }
    // std::cout << "这个字符串的符号数为:"
    //           << size_cnt
    //           << " 这串字符串为:"
    //           << str
    //           << std::endl;

    // for(auto &c : str)
    // {
    //     c = toupper(c);
    // }
    // std::cout << str
    //           << std::endl;

    // string::size_type index = 0;
    // if(index < str.size())
    // {
    //     str[index] = toupper(str[index]);
    // }
    // std::cout << str
    //           << std::endl;

    // 16进制转换器
    // string x16 = "0123456789ABCDEF";
    // string::size_type index = 0, num;
    // string str;
    // std::cout << "请输入多个十进制数进制数, 每个数之间用空格隔开:"
    //           << std::endl;
    // while(std::cin >> num)
    // {   
    //     if(num < x16.size())
    //         str += x16[num];
    // }
    // std::cout << "转换的结果为:"
    //           << str
    //           << std::endl;
    
    // exam3.23
    // 2 换成char会报错不让你执行. 因为数据结构不一致, 他无法赋值
    string str("hello world!!!");
    // for(chat &c : str)
    // {
    //     c = "X";
    // }

    // 3
    // string str1;
    // for(auto c : str)
    // {
    //     if(!ispunct(c))
    //     {
    //         str1 += c;
    //     }
    // }
    // std::cout << "除掉符号的字符串为: "
    //           << str1
    //           << std::endl;

    // 4
    const string str1("hello world!!!");
    for(auto &c : str1)
    {
        std::cout << c << std::endl;
    }
    /*
        这个c是一个const char 字符引用, 故不能修改他的值, 你把鼠标放在上面就能看出他的数据类型, chatgpt他都傻逼来的, 他说是char
    */
=======
    string compare1, compare2;
    std::cout << "请输入两个字符串:" << std::endl;
    getline(std::cin, compare1);
    getline(std::cin, compare2);
    std::cout << "将输出这两个字符串之间string的比较大小方式" << std::endl;
    if (compare1 > compare2)
    {
        std::cout << "较大的那个字符串是: " << compare1 << std::endl;
    }
    else if (compare1 < compare2)
    {
        std::cout << "较大的那个字符串是: " << compare2 << std::endl;
    }
    else
    {
        std::cout << "两个字符串相等, 都为"<< compare1 << std::endl;
    }
    int size;
    size = (compare1.size() < compare2.size());
    if (size == 1)
    {
        std::cout << "较大的那个字符串是: \n" << compare2 << std::endl;
        std::cout << "他的长度大小为: \n"
                  << compare2.size() << std::endl;
    }
    else if (compare1.size() > compare2.size())
    {
        std::cout << "较大的那个字符串是: \n" << compare1 << std::endl;
        std::cout << "他的长度大小为: \n"
                  << compare1.size() << std::endl;
    }
    else
    {
        std::cout << "两个字符串相等, 都为" << compare1 << std::endl;
        std::cout << "他们的长度大小为: \n"
                  << compare1.size() << std::endl;
    }
>>>>>>> f21f0d0 (合理调整了一下.vscode文件, 将exe整合, 将inc整合,)

    _getch();
    return 0;
}