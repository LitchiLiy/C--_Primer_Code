<<<<<<< HEAD
# include <iostream>
# include <conio.h>
# include "C:\Users\Litchi\Desktop\C++_Primer_Code\item\Sales_item.h"
// 绝对路径, 相对路径不太行, 应该是编辑器某个地方可以添加

int main()
{
    // 读写书籍
    Sales_item book;
    // std::cout << "输入书号, 数量, 单价" << std::endl;
    // std::cin >> book;
    // std::cout << "书号, 数量, 总价, 单价分别为:" << std::endl;
    // std::cout << book << std::endl;

    // 读取同一个书籍的多个销售记录, 然后输出记录和
    Sales_item book_total;
    int sales_num = 0, price_sum = 0;
    std::cout << "请输入所有的销售记录:" << std::endl;
    while(std::cin >> book)
    {
        if(book_total.isbn == "")
        {
            book_total = book;
            continue;
        }
        if(book_total.isbn == book.isbn)
        {
        book_total += book;
        }
    }
    std::cout << "书号, 数量, 总价, 单价分别为:" << std::endl;
    std::cout << book_total.isbn << std::endl;

    // // 读取多个书号的销售记录, 并且记录每个书号的销售次数
    // Sales_item book, book_item1, book_item2, book_item3;
    // book = book_item1 = book_item2 = book_item3 = Sales_item();

    // int sales_num1 = 0, sales_num2 = 0, sales_num3 = 0;
    // std::cout << "输入多个书号的销售记录, 可以随意输入" << std::endl;
    // while(std::cin >> book)
    // {

    //     if(book.isbn() == book_item1.isbn())
    //     {
    //         ++sales_num1;
    //         book_item1 += book;
    //     }
    //     else if(book.isbn() == book_item2.isbn())
    //     {
    //         ++sales_num2;
    //         book_item2 += book;
    //     }
    //     else if(book.isbn() == book_item3.isbn())
    //     {
    //         ++sales_num3;
    //         book_item3 += book;
    //     }
    //     // 没见过的数
    //     if(book_item1.isbn() == "")
    //     {
    //         book_item1 = book;
    //         ++sales_num1;
    //     }        
    //     else if(book_item2.isbn() == "")
    //     {
    //         book_item2 = book;
    //         ++sales_num2;
    //     }
    //     else if(book_item3.isbn() == "")
    //     {
    //         book_item3 = book;
    //         ++sales_num3;
    //     }

    // }

    std::cout << "按任意键继续..." << std::endl;
    _getch();
    return 0;
}

/*
    1. 如果什么都没有想检测是否空集, 用""符号就可以了.
    2. 不知道为啥如果用while等待输入时, 每次回车都会直接执行程序, 执行结束一个循环之后再次进入while的输入界面, 此时你才可以输入(从调试输入中发现的现象), 如果此时强行输入在终端将看不到你输入的什么, 但是在下一个循环到来之后, 你之前的所有输入会全部出现在终端输入区中, 像是缓存在键盘中一样.
    3. 用conio.h和_getch();在末尾配合终端来解决终端自动退出的问题.
*/
=======
# include <iostream>
# include "C:\Users\Litchi\Desktop\C++_Primer_Code\item\Sales_item.h"
// 绝对路径, 相对路径不太行, 应该是编辑器某个地方可以添加

int main()
{
    // 读写书籍
    Sales_item book;

    std::cin >> book;

    std::cout << book << std::endl;

    return 0;
}
>>>>>>> 25d7fbe (第一次在工位上运行成功C++文件, 这个.vscode文件夹是可行的)
