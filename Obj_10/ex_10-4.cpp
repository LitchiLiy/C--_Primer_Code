#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

#include <deque>
#include <functional>
#include <list>
#include <numeric>
#include <iterator>
#include <fstream>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. 三种插入迭代器, 需要注意的是insertiter类型是在迭代器制定的位置之前插入一个元素, 并且返回的迭代器位置是不动的, 和front就这一点不同
        2. 这里需要注意的是:front_iterater这个迭代器只能使用在可以push_front的容器类型,back那个同理, 不然就会出错
    */
// vector<int> nm1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// deque<int> nm2, nm3, nm4;

// copy(nm1.begin(), nm1.end(), inserter(nm2, nm2.begin()));
// copy(nm1.begin(), nm1.end(), front_inserter(nm3));
// copy(nm1.begin(), nm1.end(), back_inserter(nm4));
// for_each(nm2.begin(), nm2.end(), [](int i) { cout << i << endl; });
// for_each(nm3.begin(), nm3.end(), [](int i) { cout << i << endl; });
// for_each(nm4.begin(), nm4.end(), [](int i) { cout << i << endl; });
    
    /*
        1. 流迭代器其实就是可以视为输入输出缓冲区的指针, 可以用到容器算法当中, 比如copy()里面的第三个参数可以放输出流迭代器, 这样就能直接输出vectoer的东西
        2. 这些流迭代器是从头文件iterators.h中引入的, 而不是istream, 
        3. 暂时没看出cout迭代器有什么其他作用, ++, 解引用这些能用,但是没作用, 暂时值看到容器算法中好用
    */

// istream_iterator<int> scin(cin), scin_eof;
// cout << accumulate(scin, scin_eof, 0);

// vector<int> num1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// ostream_iterator<int> scout(cout, " ");
// copy(num1.begin(), num1.end(), scout);

    // exam 1042
    /*
        1. unique_copy()用来去重复的元素, 而且只copy到不重复的位置, 和unique不一样, unique是还返回一个迭代器, 指向最后一个不重复的下一个值
        2. Lambda表达式可以引用cout对象作为捕获引用使用, (重点在于流形式不能复制, 但是可以引用), 这样就能输出到cout
    */
    
    // 1
// ifstream file("Obj_10/ex_10-4.txt");
// istream_iterator<int> filecin(file), filecin_eof;
// vector<int> numlist;
// copy(filecin, filecin_eof, back_inserter(numlist));
// ostream_iterator<int> filecout(cout, " ");
// copy(numlist.begin(), numlist.end(), filecout);

    // 2 3
// istream_iterator<int> scin(cin), scin_eof;
// vector<int> num1;
// copy(scin, scin_eof, back_inserter(num1));
// sort(num1.begin(), num1.end());
// ostream_iterator<int> scout(cout, " ");
// unique_copy(num1.begin(), num1.end(), scout);

    // 4
// ifstream file("Obj_10/ex_10-4.txt");
// istream_iterator<int> filecin(file), filecin_eof;
// ofstream fileout_add("Obj_10/ex_10-4_add.txt", ios::app);
// ofstream fileout_oll("Obj_10/ex_10-4_oll.txt", ios::app);
// ostream_iterator<int> filecout1(fileout_add, " "), fileout2(fileout_oll, "\n");
// for_each(filecin, filecin_eof, [&filecout1, &fileout2](int i){if(i % 2 == 0) filecout1 = i; else fileout2 = i;});

    
    _getch();
    return 0;
}