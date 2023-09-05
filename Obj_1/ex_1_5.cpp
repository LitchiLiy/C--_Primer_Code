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