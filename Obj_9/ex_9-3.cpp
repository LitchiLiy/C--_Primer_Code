#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <deque>
#include <list>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // exam931
    /*
        1. 没事就用vector, 头部添加用deque, 中间添加用list
        2. emplace_back()是用初始化的方式直接在尾部创建元素, 而push_back是将某个元素拷贝到后面去
        3. 随机访问的意思是可以对迭代器直接用+3来位移, 并且可以用[]来访问, 不然只能通过++迭代器, 只有string, vector, array才拥有随机访问, list不行
        4. 关于insert的返回值, 返回插入元素的第一个元素作为迭代器
        5. 关于插入方法: 插入到迭代器所指元素的前面一个位置, 迭代器可以选到end的地方, 正好表示插入到末尾.
    */
    
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    v.push_back(1);
    v.emplace_back(22);

    deque<string> vv{"hello", "world"};
    vv.push_back("!");
    vv.push_front("you");

    vv.emplace_back("//");
    vv.emplace_front("++");

    list<string> l1{"hello", "world"};
    l1.insert(l1.begin(), "you are man?");
    l1.insert(l1.begin() , "1");
    l1.insert(++l1.begin(), "2");
    l1.insert(l1.end(), {"3", "4"});
    l1.insert(l1.end(), vv.begin(), vv.end());

    // 1
    string str1;
    // deque<string> destr;

    // while(cin >> str1)
    // {
    //     destr.push_back(str1);
    // }
    // for (auto vbeg = destr.begin();  vbeg != destr.end(); ++vbeg)
    // {
    //     cout << *vbeg << endl;
    // }

    // 2
    // list<string> listr;
    // while(cin >> str1)
    // {
    //     listr.push_back(str1);
    // }
    // for (auto beg = listr.begin(); beg != listr.end(); ++beg)
    // {
    //     cout << *beg << endl;
    // }

    // 3
    // int num;
    // deque<int> oushu, jishu;
    // list<int> linum;
    // while(cin >> num)
    // {
    //     linum.push_back(num);
    // }
    // for(const auto &n :  linum)
    // {
    //     if(n%2 == 0)
    //     {
    //         oushu.push_back(n);
    //     }
    //     else
    //     {
    //         jishu.push_back(n);
    //     }
    // }
    // for (auto &n: oushu)
    // {
    //     cout << n << " ";
    // }
    // for(auto &n: jishu)
    // {
    //     cout << n << " ";
    // }

    // 932
    /*
        1. array, vector, deque, string都是可以随机访问的容器类型
        2. back和front函数返回的是引用, 而不是赋值, 可以直接被赋值
        3. 养成在随机访问时保证数组不为空, 或者访问对象不超出范围的好习惯.
        4. at返回一个引用, 左值也应该被设计为一个引用
    */
    vector<int> num1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(!num1.empty())
    {
        cout << num1.back() << ++num1.front() << endl; // 返回 9 2
        num1.back() = 90;
        num1.front() = 10;
        cout <<  num1.back() << ++num1.front() << endl; // 返回 90 11
        cout << num1[1];
        int &yy = num1.at(0);
        cout << --yy << endl;
    }


    _getch();
    return 0;
}