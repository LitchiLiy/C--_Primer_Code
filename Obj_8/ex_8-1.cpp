#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

std::istream &cc(std::istream &cins);
void showstate(std::istream &cins, int type);

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. rdstate为一个int类型的状态量, 0记录着good为true, 2记录着fail为true, 相当于寄存器
        2. eof()这些其实是false或者是True.
    */
	int i;
	// while (1)
	// {
	// 	std::cin >> i;
	// 	auto state1 = std::cin.rdstate();
	// 	auto state2 = std::cin.eof();
	// 	auto state3 = std::cin.fail();
	// 	auto state4 = std::cin.good();
	// 	std::cout << i << " " << state1 << std::endl;
	// 	std::cout << state2 << std::endl;
    // }
    // exam812
    cc(std::cin);
    /*
        1. 通过cc这个东西彻底搞明白cin的状态是啥了, rdstate就是一个类似寄存器的东西, 寄存这四位状态为, 从低到高分别为good, fail, eof, bad,^Z结束输入时, rdstate为6, 也就是0110, eof和fail都是1.
        2. is流不能被赋值和拷贝, 故不能作为一个实参输入到函数中, 所以函数调用一定是引用 , 返回类型也是引用.
    */
    

    _getch();
    return 0;
}

std::istream &cc(std::istream &cins)
{
    std::string str;
    showstate(std::cin, 1);
    while (!cins.eof())
    {
        showstate(std::cin, 2);
        cins >> str;
        std::cout << str << std::endl;
    }
    showstate(std::cin, 2);
    cins.clear();
    showstate(std::cin, 2);
    return cins;
}

void showstate(std::istream &cins, int type)
{
    std::vector<int> state1;
    state1.push_back(cins.rdstate());
    state1.push_back(cins.good());
    state1.push_back(cins.eof());
    state1.push_back(cins.fail());
    state1.push_back(cins.bad());

    if(type == 1)
    {
        std::cout << "输入前状态为: " << std::endl;
        for(auto &i : state1)
        {
            std::cout << i;
        }
    }
    else if(type == 2)
    {
        std::cout << "输入后状态为: " << std::endl;
        for(auto &i : state1)
        {
            std::cout << i;
        }
    }
}