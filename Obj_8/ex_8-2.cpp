#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <fstream>
#include <myinc\Sales_data.h>

using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. 关联代码tie的作用就是将cin和cout关联起来, 这样在调用cin的时候就会自动刷新缓冲区方便cout输出.
        2. 缓冲区的作用: 防止频繁的访问设备, 等存到一定量后一次性写入设备
        3. 刷新缓冲区的区别: 输出缓冲区是立即写入到设备当中, 而刷新输入缓冲区是丢弃所有未被识别的内容.
        4. 三个刷新输出缓冲方式, 默认刷新方式, 关联方式
    */
    // cout << "hello world" << ends;
    // cout << "hello world" << endl;
    // cout << "hello world" << flush;

    // cout << unitbuf;
    // cout << "刷新缓冲区";
    // cout << "hello world!";
    // cout << nounitbuf;

    // cin.tie(nullptr);
    // cout << "hello world";
    // cin.tie(&cout);
    /*
        1. 读取文件ifstream可以视为是一个缓冲区, 读取路径是编译器决定的, 反正绝对路径是可以的, 读取一个文件的所有内容, 放到一个人对象里去.
        2. 然后你可以用getline或者是get等函数将对象里的内容取出来, 然后用cout输出.
        3. 关于eof的注意事项. 只有cin在读取到空的时候eof才会置true, 所以用在while会多识别一轮.
        4. 初始化和open函数都能将ifstream的对象打开, 如果close了, 那么将读取不到任何ifstream对象里的所有内容.
    */
   // exam821

    // ifstream InputData1("C:/Users/29524/Desktop/git_repo/C--_Primer_Code-1/Obj_8/ifstream_data.txt");
    // ifstream InputData2;
    // InputData2.open("C:/Users/29524/Desktop/git_repo/C--_Primer_Code-1/Obj_8/ifstream_data.txt");

    // if(InputData1.is_open())
    // {
    //     cout << "yes, 1 is open" << endl;
    // }
    // if(InputData2.is_open())
    // {
    //     cout << "yes, 2 is open" << endl;
    // }
    // // InputData1.close();
    // InputData2.close();
    // cout << "?" << endl;
    // vector<string> v;
    // string str;
    // // while(!InputData1.eof())
    // // while(InputData1 >> str)
    // while(getline(InputData1,str))
    // {

    //     v.push_back(str);
    // }
    // for(auto str1 : v)
    // {
    //     cout << str1 << endl;
    // }

    // 文件模式
    /*
        1. ofstream就是打开一个文件, 然后将内容输出到文件当中, 如果文件不存在, 那么就会自己新建一个文件.
        2. 打开out模式一定要设定初始化模式, 不然有可能会清空你打开的所有文件.
        3. ofstream默认是out模式, 只能写不能读, ifstream同理, 想要写读用fstream定义或者of用in模式
        4. 为什么这个相对路径却可以, 我即使tasks那里没有workspace时, 创建在workspac那里, 可能是编译器搞了什么环境东西.
        5. in out两个模式一起来不会创建文本(如果你没有这个文本), 其他模式都会, 但是除了app模式, 和inout模式, 其他模式都会删除原先的内容.
    */
    
    // ofstream fout1("Obj_8\\ofstream_data_out1.txt");
    // ofstream fout2("Obj_8\\ofstream_data_out2.txt", ofstream::in | ofstream::out);
    // ofstream fout3("Obj_8\\ofstream_data_out3.txt", ofstream::app);
    // ofstream fout4("Obj_8\\ofstream_data_out4.txt", ofstream::ate);

    // exam822
    Sales_data bookdata, book;
    bookdata.bookNo = "123";
    std::cin >> book.bookNo >> book.book_num >> book.price;
    if(book.bookNo == bookdata.bookNo)
    {
        bookdata.book_num += book.book_num;
        bookdata.revenue += book.book_num * book.price;
    }


    // ofstream bookdatatxt("Obj_8\\bookdatatxt.txt", ofstream::out);
    ofstream bookdatatxt("Obj_8\\bookdatatxt.txt", ofstream::app);
    bookdatatxt << bookdata.bookNo << "\n"
                << bookdata.book_num << "\n"
                << bookdata.cost << "\n"
                << bookdata.revenue << std::endl;
    /*
        1. Sales_data被默认初始化了, 但是不是初始化成0, 而是被默认初始化成8了, 所以以后所有的类一定要初始化之后再使用.
        2. "\n"这个字符串不会被识别成字符串, 而是被识别成换行, 就像cout一样, 一切的东西就像cout一样.
        3. 直接设置app模式就可以继续在文档中写了, app就是append的意思.
    */
    

    _getch();
    return 0;
}