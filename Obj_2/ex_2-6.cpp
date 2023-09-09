#include <conio.h>
#include <iostream>
#include <Sales_data.h>

int main()
{
    // 输入书籍信息
    int num = 10;
    char ch = 'a';
    char ch1[] = "a";

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