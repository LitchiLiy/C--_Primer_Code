#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

using std::string;

struct Sales_data;
std::ostream &print(std::ostream &couts,const Sales_data &items);
std::istream &read(std::istream &cins, Sales_data &items);

struct Sales_data
{
    // 构造函数
    Sales_data() = default;
    Sales_data(const string &s) : bookNo(s){};
    Sales_data(const string &s, unsigned u, double p) : bookNo(s), units_sold(u), revenue(p * u){};
    Sales_data(std::istream &str)
    {
        read(str, *this);
    }

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    string isbn() const
    {
        return bookNo;
    }
    Sales_data &combine(const Sales_data &items);
    
    double avg_price() const;
};



std::ostream &print(std::ostream &couts,const Sales_data &items)
{
    couts << items.isbn() << " " << items.units_sold << " " << items.revenue;
    return couts;
}

std::istream &read(std::istream &cins, Sales_data &items)
{
    double price = 0;
    std::cout << "请输入书号, 售出数量, 单价" << std::endl;
    cins >> items.bookNo >> items.units_sold >> price;
    items.revenue = items.units_sold * price;
    return cins;
}

Sales_data add(const Sales_data &items1, const Sales_data &items2)
{
    Sales_data tt = items1;
    tt.combine(items2);
    return tt;
}


double Sales_data::avg_price() const
{
    if(units_sold)
    {
        return revenue / units_sold;
    }
    else
    {
        return 0;
    }
}

Sales_data &Sales_data::combine(const Sales_data &items)
{
    units_sold += items.units_sold;
    revenue += items.revenue;
    return *this;
}





#endif