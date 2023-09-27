#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <iterator>
#include <numeric>
#include <algorithm>

#include <functional>
#include <sstream>
using namespace std::placeholders;
using namespace std;

void elimDups(vector<string> &str);
bool isShorter(const string &a, const string &b);
void bigger(vector<string> &str1, string::size_type dx);
bool bigsmall(const int &i, const int &j);
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. 自动排序, 删除相同的内容, 用each_for输出vector容器的内容.
        2. lambda表达式的好处就是简单, []内需要添加使用表达式的那个域的内容, 全局内容不需要出现在这里, 比如说include的表达式,比如cont
    */
    
// vector<string> wordvec;
// string wordtp;
// while (cin >> wordtp)
// {
//     wordvec.push_back(wordtp);
// }
// bigger(wordvec, 4);
// for_each(wordvec.begin(), wordvec.end(), [](const string &a)
//          { cout << a << endl; });

    // exam 1032
// auto f1 = [](const int &i, const int &j)
// { return i + j; };

// int i = 10;
// auto f2 = [i](int j)
// { return i + j; };

    /*
        1. 值捕获的变量在编译时就已经被copy进去了, 是copy一个值进去, 而不是在调用时
        2. 你需要保证引用捕获时被调用的时候引用是有效地, 指针也是如此, 捕获就相当于一个初始化, 如果原来的只是一个普通的值, 捕获时可以定义为引用捕获int i 和[&i]这是合法的
        3. 隐世捕获需要注意, 捕获符号必须放在开头, 一个就能代表所有引用, 其他的只能用另一个值捕获方式, 而且一个隐世捕获就能代表所有未定义的变量
        4. 如果想改变捕获的值, 需要在()后面加上mutable, 当然这个的前提是值捕获, 引用捕获不需要加这个
        5. 如果出了return, 还有其他语句, 那么捕获会自动把返回类型认定为void, 如果真的需要返回一些东西, 需要使用到后置类定义在()后面.
        6. 一元transforms算法用来传输容器之间的元素, 可以使用自定义函数方式来传输
    */
// int i = 10;
// auto f1 = [i]
// { return i; };
// cout << f1() << endl;
// i = 20;
// cout << f1() << endl;

// int &j = i;
// j = 30;
// auto f2 = [&j]
// { return j; };
// cout << f2() << endl;
// j = 40;
// cout << f2() << endl;

// int k = 11;
// auto f3 = [&,k]
// { return k + i + j; };
// cout << f3() << endl;

// int change = 9;
// auto f4 = [&change]() mutable
// { return ++change; };
// // auto f5 = [change]
// // { return ++change; }; 没有mutable不合法
// cout << f4() <<change<<endl;

// vector<int> nm1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// vector<int> nm2(10);
// transform(nm1.begin(), nm1.end(), nm2.begin(), [](int &c) -> int
//             {if(c<0){return -c;}else{return c;} });
// for_each(nm2.begin(), nm2.end(), [](const int &c)
//             { cout << c << endl; });

    // exam 1033
    /*
        1. 可以用sstream的东西来快速分配一句话的每个单词到vector中, 其实for好像也可以
        2. count_if会记录谓词符合的所有单词的个数, 谓词是bool返回类型, 输出每个`元素`符合的个数.
    */
    
// string str1{"you are a man. but i danshafeike, you don't nobibilailai"};
// istringstream iscin(str1);
// vector<string> str2;
// string strtp;
// while(iscin>>strtp)
// {
//     str2.push_back(strtp);
// }
// cout << count_if(str2.begin(), str2.end(), [](const string &c)
//             { return c.size() > 6; })
//     << endl;

    /*
        1. 关于bind其实就是重写函数的意思, bind的绑定参数可以用到作用域里的所有变量, _1和_2这些东西在placehoders这个命名空间当中
        2. 关键作用是配合谓词使用, _1和_2顺序不是固定的, 可以_2在前面, 
        3. bind是复制一个参数来进行绑定, 所以cin类型这种引用不能赋值, 只能通过ref(cin)来复制, 这个ref甚至可以定义int i这种类型直接ref(i)使i作为引用被传递
        4. 和函数一样, 函数形参可以是引用新参, 然后传递一个对象进去令其绑定
        5. C++中不存在一种迭代器被调用之后自动显式的加1, 插入迭代器倒是有自动加一的功能, 不过那个是插入
    */

// vector<int> nm1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// vector<int> nm2{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
// cout << count_if(nm1.begin(), nm1.end(), bind(bigsmall, _1, 3));

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

bool bigsmall(const int &i, const int &j)
{
    return i > j;
}

void bigger(vector<string> &str1, string::size_type dx)
{
    elimDups(str1);
    stable_sort(str1.begin(), str1.end(), [](const string &a, const string &b)
                { return a.size() < b.size(); });
    auto fi = find_if(str1.begin(), str1.end(), [dx](const string &a)
                 { return a.size() > dx; });
    cout << "大于" << dx << "的字符串是：" << endl;
    for_each(fi, str1.end(), [](const string &a){
        cout << a << " ";});
    cout << endl;
}