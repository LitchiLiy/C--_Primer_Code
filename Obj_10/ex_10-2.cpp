#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

#include <iterator>
#include <numeric>
#include <algorithm>
using namespace std;

void elimDups(vector<string> &str);
bool isShorter(const string &a, const string &b);
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 10.2.1
    /*
        1. 第三个参数是初始化的值, 字符串相加就是连在一起, 第三个参数记得用string的空字符串来初始化, 试过了, 不然会报错
        2. equal输入三个迭代器, 但是两个比较的对象可以不一样的数据类型, 作用是两者是否相同
    */
// vector<int> num{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// cout << accumulate(num.begin(), num.end(), 0) << endl;
// vector<string> str{"Hello", "world"};
// cout << accumulate(str.begin(), str.end(), string("")) << endl;
// cout << equal(num.begin(), num.end(), num.begin()) << endl;

    /*
        1. fill输入两个迭代器, 用第三个参数在迭代器范文内替换掉, fill_n是从第一个迭代器开始往下N个数, 用第三个参数替代掉
        2. 插入迭代器返回一个指针, 这个指针输入一个数值进去, 这个指针就会指向下一个位置自动的, 不需要你手动++, 甚至可以使用在空数组上, 从0个元素开始添加都可以
    */
    
// vector<int> num1{1, 2, 3, 4, 5, 6, 7, 8, 9,10};
// fill(num1.begin(), num1.end(), 99);
// for(auto &c:num1)
// {
//     cout << c << endl;
// }
// fill_n(num1.begin(), 4, 20);
// for(auto &c:num1)
// {
//     cout << c << endl;
// }

// vector<int> num2;
// fill_n(back_inserter(num2), 10, 888);
// for(auto &c:num2)
// {
//     cout << c << endl;
// }

// auto ntr = back_inserter(num2);
// *ntr = 0;
// *ntr = 1;
// for(auto &c:num2)
// {
//     cout << c << endl;
// }
    
// vector<int> num1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// vector<int> num2;
// num2.reserve(10);
// copy(num1.begin(), num1.end(), back_inserter(num2));
// fill_n(num2.begin(), 10, 78);
// for(auto &c:num2)
// {
//     cout << c << endl;
// }
    // exam 10.2.2
    /*
        2. copy必须双方的元素大小是一样的, 题目中第二个元素大小为0, 故这里会报错, 这点和fill是一样的, 一定要存在元素大小, 如果你一个vector为空是无法用fill的
        3. reserve调动vector容量大小是可行的, 可以使用copy, 连fill_n也能用
        3. reserve是预留了空间, 所以copy能复制过来, 和a[10]是一样的意思
    */

    // exam 10.2.3
// vector<string> str1{"a","b","c","a","a","d"};
// string strtp;
// while(cin >> strtp)
// {
//     str1.push_back(strtp);
// }
// elimDups(str1);
    /*
        1. 不知道为啥erase吃了屎一样不知道为什么删除不了后面的东西.(已解决)
        2. 指示器er被前面的for循环++到end那里去了, 注意, 以后for循环的指示器自己定义, 而不要用外面的.
    */
// vector<string> str1;
// string strtp;
// while (cin >> strtp)    
// {
//     str1.push_back(strtp);
// }
// str1.erase(str1.begin() + 1, str1.end());
// for (auto &c:str1)
// {
//     cout << c << endl;
// }
    /*
        1. 如果想string按字母重排的同事, 大小也要跟着重排, 用stable_sort, 这是一个二元谓词版本, 用普通的sort只会默认是字典排, 如果用自己写的short则用字母长度排, 但不会字典也排
        2. 谓词的位置是放bool值的, 程序会调用bool值来排序, 也就是二元谓词
    */
    vector<string> str1;
    string strtp;
    while (cin >> strtp)    
    {
        str1.push_back(strtp);
    }
    stable_sort(str1.begin(), str1.end(), isShorter);
    for (auto &c:str1)
    {
        cout << c << endl;
    }

    _getch();
    return 0;
}

void elimDups(vector<string> &str)
{
    sort(str.begin(), str.end());
    auto er = unique(str.begin(), str.end());
    cout << "你要删除的内容是:" << endl;
    // for (; er != str.end(); ++er)
    // {
    //     cout << *er << endl;
    // }
    str.erase(er, str.end());
    cout << "删除后的内容是：" << endl;
    for (auto &c:str)
    {
        cout << c << endl;
    }
};

bool isShorter(const string &a, const string &b)
{
    return a.size() < b.size();
}

void bigger(vector<string> &str1, string::size_type dx)
{
    elimDups(str1);
    stable_sort(str1.begin(), str1.end(), [](const string &a, const string &b)
                { return a.size() > b.size(); });
    auto fi = find_if(str1.begin(), str1.end(), [dx](const string &a)
                 { return a.size() > dx; });
    for_each(fi, str1.end(), [](const string &a){
        cout << a << "";});
    cout << endl;
}