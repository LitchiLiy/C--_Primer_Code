#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using std::vector;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int num;
    vector<int> nvec;
    while(std::cin >> num)
    {
        nvec.push_back(num);
    }
    auto res = std::find(nvec.cbegin(), nvec.cend(), 10);
    std::cout << *res;
    /*
        1. find返回的是一个迭代器, 如果没找到返回end, 或者说返回你给的最后面的那个迭代器.
    */
    // exam 10.1
    cout << count(nvec.cbegin(), nvec.cend(), 10) << endl;

    _getch();
    return 0;
}