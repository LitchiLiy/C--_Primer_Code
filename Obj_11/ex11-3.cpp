#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <iterator>
using namespace std;
 
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. 三种变量类型: value_type指的是set或者map一个元素代表着什么类型, 像map就是个pair对, 而key_type就是first位置是什么类型, 一般是string, 而maped_type只有map才有, 你定义时是啥就是啥
        2. map和set的关键字都是不能改变的, 但是map的second是可以改变的, 只能添加不能删除
    */
// set<string>::value_type v1;
// set<string>::key_type v2;
// map<string, int>::value_type v3;
// map<string, int>::key_type v4;
// map<string, int>::mapped_type v5;

// set<string> set1{"a", "b", "c"};
// auto vbeg = set1.begin();
// cout << vbeg->size() << endl;
// // *vbeg = 3;

// map<int, string> map1{{1, "a"}, {2, "b"}, {3, "c"}};
// auto mbeg = map1.begin();
// cout << mbeg->first << endl;
// // mbeg->first = 3;
// mbeg->second = "e";
// cout << mbeg->second << endl;

    // exam1131
    /*
        1. vector<int>, int, pair
        2. set和map都是有序容器, 会自动按字典排列顺序, 并且会自动sort, 因此对于inserter插入后他会自动排序, 无论是前插入还是后插入, 都会自动排序
        3. back和front_inserter在set和map中都是不合法的, 因为要求自动排序,
        4. 复习一下inserter, 第一个参数为要插入的容器, 第二个参数为插入位置的迭代器, 插入后位置保持不变, 插入元素被往上推
    */
    // 2
// vector<string> num{"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
// multiset<string> mset;
// copy(num.begin(), num.end(), inserter(mset, mset.begin()));
// copy(num.begin(), num.end(), back_inserter(mset));
// copy(mset.begin(), mset.end(), inserter(mset, mset.end()));
// copy(mset.begin(), mset.end(), back_inserter(num));
// for (auto &c : mset)
// {
//     cout << c << endl;
// }

    /*
        1. 关于insert的用法, map和set有着不同的体验, set有双迭代器, 单参数, {}列表直接添加, map有{}列表, 和三种定义pair对的方法, 没有迭代器
        2. 由于set和map对于同一个关键字不会重复叠加, 如果再次输入这个关键字, 将对原来的关键字不会做任何操作, 相当于后者无效输入, 不会覆盖前者
        3. insert返回一个pair, 前者是插入位置的迭代器, 后者是bool元素, true表示插入成功, false表示插入失败, 如果重复, 这前者仍指向重叠的迭代器, 后者false
        4. 可以看到下面例子second输出都是0, 因为插入失败了
        5. ->优先级比++优先级高, 比如++p->second, 先->再++
    */
// vector<int> num{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
// set<int> set1;
// set1.insert({1, 2, 3});
// set1.insert(num.begin(), num.end());
// for (auto &c : set1)
// {
//     cout << c << endl;
// }

// map<string, int> map1;
// map1.insert({"word", 1});
// cout << map1.insert(make_pair("word", 2)).second << endl;
// cout << map1.insert(pair<string, int>("word", 3)).second << endl;
// cout << map1.insert(map<string, int>::value_type("word", 4)).second << endl;
// for(auto &c : map1)
// {
//     cout << c.first << "出现了" << c.second << "次" << endl;
// }
    
    // exam1132
    //1
// string word;
// map<string, size_t> wordlist;
// while(cin >> word)
// {
//     auto wordstr = wordlist.insert({word, 1});
//     if(!wordstr.second)
//     {
//         wordstr.first->second++;
//     }
// }
// for(auto &c : wordlist)
// {
//     cout << c.first << "出现了" << c.second << "次" << endl;
// }

    // 1133
    /*
        1. 三个erase删除版本, 关键字删除, 指定迭代器删除, 指定范围删除, 都有返回值, 1返回删除后的总数量, 2返回下一个, 3.返回后迭代器的迭代器
    */
    // map<string, size_t> wordlist{{"a", 1}, {"b", 2}, {"c", 3}};
    // auto wordstr = wordlist.erase("b");
    // cout << wordstr << endl;

    // map<string, size_t> wordlist{{"a", 1}, {"b", 2}, {"c", 3}};
    // auto wordstr2 = wordlist.erase(wordlist.begin(), ++wordlist.end());
    // cout << wordstr2->first << endl;

    // map<string, size_t> wordlist{{"a", 1}, {"b", 2}, {"c", 3}};
    // auto wordstr3 = wordlist.erase(wordlist.begin());
    // cout << wordstr3->first << endl;

    /*
        1. 访问元素的方法, 下标, find, at, count, lower_bound, upper_bound, equal_range, 返回类型也有所不同, count是存在的数量非0即其他数, 但是其他的都是返回迭代器, 如果不存在就返回end,
        2. equal返回一个pair, first和seconde制定了一个范围, 该范围就是寻找的元素.不然就是双end
        3. lower_bound是一个begin迭代器, upper_bound是一个end迭代器, lower返回大于等于这个元素的值, upper返回大于这个元素的值指向的元素,
        4, 初始化set和map后都会自动排序, 无论你初始化时怎样调动他的顺序, 都会按字典自动排序
    */
    map<string, int> map1{{"a", 1}, {"b", 2}, {"c", 3}};
    auto wordstr4 = map1.find("b");
    cout << wordstr4->first << "出现了" << wordstr4->second << "次" << endl;

    multiset<int> set1{1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 5, 5, 5, 6, 2};
    auto setstr1 = set1.count(1);
    cout << setstr1 << endl;

    for (auto setstr2 = set1.lower_bound(1), setstr3 = set1.upper_bound(1); setstr2 != setstr3; ++setstr2)
    {
        cout << *setstr2 << endl;
    }

    for (auto str3 = set1.equal_range(2); str3.first != str3.second; ++str3.first)
    {
        cout << *str3.first << endl;
    }

    

        _getch();
    return 0;
}