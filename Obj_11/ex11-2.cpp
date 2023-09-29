#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
// vector<int> num{1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
// set<int> set1(num.begin(), num.end());
// multiset<int> set2(num.begin(), num.end());
// for(auto &c : set1)
// {
//     cout << c << endl;
// }
// for(auto &c : set2)
// {
//     cout << c << endl;
// }
    /*
        1. 虽然multiset可以重复存储数据, 但是他会将数据按一定的方法排列, 并且sort.
        2. 不知道为什么关联容器存储不到中文, 调试时看到的是乱码, 输出又输出不出来, 空的, 然后字母是没问题的.
    */
    
    // exam1121
// map<string, vector<string>> familylist;
// string familyname, kidname;
// while(cin >> familyname >> kidname)
// {
//     familylist[familyname].push_back(kidname);
// }
// for(auto &c : familylist)
// {
//     cout << c.first << "家庭有" << c.second.size() << "个孩子" << endl;
//     cout << "孩子们是：";
//     for(auto &d : c.second)
//     {
//         cout << d << " ";
//     }
//     cout << endl;
// }

    // exam 11.23
// string word;
// int num;
// pair <string, int> p;
// while(cin >> word >> num)
// {
//     p = make_pair(word, num);
//     cout << p.first << "出现了" << p.second << endl;
// }
    
    _getch();
    return 0;
}