#include <conio.h>
#include <iostream>
#include <C:\Users\Litchi\Desktop\C++_Primer_Code\item\Sales_data.h>

int mian()
{
    // 输入书籍信息

    Sales_data book_data1, book_data2;
    std::cout << "输入第一份书籍售卖的信息:书籍单号, 书籍销售数量, 书籍销售单价:" << std::endl;
    std::cin >> book_data1.bookNo >> book_data1.book_num >> book_data1.price;
    book_data1.revenue = book_data1.book_num * book_data1.price;
    std::cout << "输入第二份书籍售卖的信息:书籍单号, 书籍销售数量, 书籍销售单价:" << std::endl;
    std::cin >> book_data2.bookNo >> book_data2.book_num >> book_data2.price;
    book_data2.revenue = book_data2.book_num * book_data2.price;

    // 输出两个对象的和




    _getch();
    return 0;
}