#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

#include <list>
#include <array>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // exam921
    // 2 3
    // vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int i;
    // cin >> i;
    // auto vbeg = v.begin();
    // for (; vbeg != v.end(); ++vbeg)
    // {
    //     if (*vbeg == i)
    //     {
    //         cout <<"这个数在这个数组的第"<< vbeg - v.begin()<<"个。" << endl;
            
    //         break;
    //     }
    // }
    // if(vbeg == v.end())
    // {
    //     cout << "这个数不在这个数组中" << endl;
    // }

    /*
        1. 用迭代器循环所有内容， 如果不达标就输出不达标， 否则中间直接退出
        2. begin在头， end在尾, 所以end > begin
        3. 元素的意思就是vector里面存储的内容, 元素类型就是比如说int是整形, char是字符, string是字符串.
    */

    // vector<int>::iterator iter1;
    // list<string>::difference_type count;

    // vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // auto v1 = v.begin();
    // auto v2 = v.cbegin();
    // vector<int>::reverse_iterator v3 = v.rend();

    // // 关于容器初始化
    // vector<int> i1{1,2,3,4};

    // vector<int> j1 = i1;
    // vector<int> j2(i1);

    // vector<int> k1{1,2,3,4,5,6,7,8,9,10};
    // vector<int> k2 = {1, 2, 3};

    // auto cb = i1.begin();
    // auto ce = i1.end();
    // vector<int> l1(cb, ce);

    // vector<int> l2(10);
    // vector<int> l3(10, 0);

    // array<int, 10> a1;

    /*
        1. 内置数组不能直接赋值与拷贝, 但是类型容器可以, 注意类型要一样就行, 但是用迭代器初始化类型可以不一样
    */
    // list<string> st1(cb, ce);
    // list<string> st2(i1); 错误

    /*
        1. 拷贝初始化和迭代器初始化的区别在于, 迭代器可以选定范围, 并且只要数据类型可以转化, 那么可以初始化数据类型不同的容器
    */

   /*
    1. assign就是将某个容器赋值给另一个容器, 当然相似的操作是初始化, 但是当初始化结束后, 就可以用这种方式来赋值, 只要可以发生转化, 那么就可以赋值(不同类型用迭代器赋值)
    2. swap(a,b)是交换两个相同类型容器的内容, 这种方式不会使指针失效(其他方式都会使迭代器失效, 指针失效), 只是所在的容器变了而已
   */
    list<const char *> str{"hello", "world"};
    vector<string> str2;
    vector<string> str3{"you are a man."};
    str2.assign(str.cbegin(), str.cend());

    auto vbeg = str3.begin();
    swap(str2, str3);

    str.assign(10, "hi!");

    // exam927
    vector<int> ii1{1,2,3,4,5};
    vector<int> ii2{1, 2, 3, 4};
    vector<int> ii3{2};
    cout << (ii1 > ii2) << (ii2 > ii3) << endl;

    /*
        1. 无序容器不能用><来比较
        2. 比较必须要相同的数据类型.
        3. 大小比较原则还是原来那三条.
    */
    

    _getch();
    return 0;
}