# ifndef SALES_DATA_H_
# define SALES_DATA_H_

# include <string>
struct Sales_data
{
    std::string bookNo;
    int book_num=0;
    double price;
    const double cost = 20.0;
    double revenue;
};

#endif