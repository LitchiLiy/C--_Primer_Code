#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
 
void change(int *p, int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}
std::string::size_type find_char(const std::string &str, const char &c, int &num)
{
    auto loca = str.size();
    for(std::string::size_type cc = 0; cc != str.size(); ++cc)
    {
        if(str[cc] == c)
        {
            ++num;
            if(loca == str.size())
            {
                loca = cc;
            }
        }
    }
    return loca;
}
void find_bigchar(const std::string &str)
{
	for(const auto &c : str)
	{
		if(isupper(c))
		{
				std::cout << "这个string字符串里有大写字母, 这个大写字母为:\n"
							 << c << std::endl;
		}
		else
		{
				std::cout << c << "不是大写字母." << std::endl;
		}
	}

}
void change_lowchar(std::string &str)
{
	for(auto &c : str)
	{
		c = tolower(c);
	}
	std::cout << str << std::endl;
}
void cal_sum(std::initializer_list<int> listed)
{
	int sum = 0;
	for(const auto &n : listed)
	{
		sum += n;
	}
	std::cout << sum << std::endl;
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // exam621
    // int i = 1, j = 2;
    // int *pi = &i, *pj = &j;
    // change(pi, pj);
    // std::cout << i << j << std::endl;
    /*
        1. 这里需要注意, 关于函数形参, 只有当形参被设定为引用是, 才是将形参绑定到实参上, 不然永远都是实参复刻一份东西给新参, 是复刻!
        2. 尽量用常量引用, 因为复刻很吃内存, 没必要, 如果不改变实参的话就用常量引用吧.
    */

   //
    // std::string strr{"you are a man."};
    // int nn = 0;
    // std::cout << find_char(strr, 'a', nn) << '\n'
    //           << nn << std::endl;

    /*
        1. 函数尽量用常量引用, 这里复习一下顶层const和底层const, 普通的const int i 是顶层,
        2. 指针的: const int *(const p) = &i中, 第一个const指的是p所指的对象i是不允许通过*p来改动的, 尽管i可能是一个非常量对象, 第二个const是顶层指的是p所指的对象已经锁死了不能动
        3. 关于引用如果 string &s = "you." 这种对字面值的引用是不被允许的, 因为字面值不是一个对象, 当然在函数中很容易就出错, 如果一个形参是一个引用, 而你在调用这个函数的时候却输入一个字面值, 那么就会导致错误
        
    */

   // exam623
    // 2
	//  std::cout << "输入一个字符串:" << std::endl;
	//  std::string strr;
	//  std::cin >> strr;
	//  find_bigchar(strr);
	//  change_lowchar(strr);

	/*
		1. 关于二维数组指针形参, void printf(int (*a)[10]) 或 (int a[][10]), 后面的10这个地方一定有数字, 表明他的二维大小是10个固定的.
	*/
	// exam626
	// 1
	cal_sum({1,2,3,4,5,6,7,8,9,10});

	// 3
	// 应该无法设置成引用, 因为initializer_list不是一个对象, 是一个常量值, 但你应该可以设置成常量引用

	/*
		1. initializer_list本质上你可以将其视为vector<>类型, 但传入参数时必须用花括号将其括起来{}
	*/
	

	 _getch();
    return 0;
}