#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string.h>
#include <string>
#include <vector>
using std::string;
using std::vector;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. 关于常量表达式constexpr: 这是一个开头声明, 表明后面跟着的东西能在编译的时候就被算出来, 而不是在运行的时候被计算
        2. 第二个这样的在编译中就可以计算出来的是所有的const int t, 这样定义过的常量.
        3. 因为数组里面不能存放引用, 引用不是对象, 没有数据结构, 故你也不知道用什么来定义, int也是错的
        4. 数组不能用auto来表示, 必须声明是啥
        5. 字符串初始化会将\0这个空字符读进去, 故会比你输入的词大1
        6. 在函数外部定义一般都初始化为int 0, 函数内部没有规律, 但在vscode中好像是0;
        7. 数组的下标是size_t类型, 是一种内置的机器类型, 和vector的下标不一样.
    */
    // constexpr unsigned t = 20;
    // unsigned tt = 20;
    // const unsigned ttt = 20;
    // int num[t]; // 这样是合法的
    // // int num2[tt]; // 这样是非法的, 因为tt不是常量表达式
    // int num3[ttt]; // 合法

    // int i[3] = {1, 2, 3};
    // int ii[4] = {1, 2, 3, 4};
    // int iii[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // char u[] = {'a'};
    // char uu[] = {"a"};

    // int *pre[20];
    // int (*pre1)[20];
    // int &pre2[20]; // 非法, 因为数组里面不能存放引用, 引用不是对象, 没有数据结构, 故你也不知道用什么来定义, int也是错的
    // int (&pre3)[20]; // 但是数组却可以形成一个引用

    // exam352
    // 1
    // constexpr size_t idx = 20;
    // int num[idx];
    // for (size_t i = 0; i <= idx; ++i)
    // {
    //     num[i] = i;
    // }
    // std::cout << num[20] << std::endl;
    /*
        1. 索引错误就是超出了数组范围, 不过不知道为啥vscode编译能过还能输出.
        2. 如果int i[10], 一般来说索引是0到9, 但是i[10]这个地址是存在的, 用来对标迭代器的end位置, 这个位置是可以存在的, 用来赋予指针.
    */
   // 指针
    // int num[20];
    // int *beg1 = num, *end1 = &num[20];
    // int *beg2 = std::begin(num), *end2 = std::end(num); // 上下两种方式的指针效果都是一样的.

    // 指针运算, 基本和标准库类型差不多, 可以直接对指针地址相加减, 但是指针的差类型是strdiff类型
    /*
        1. string和vector的下标不能为负值.
        2. 但是数组的下标可以为负值, 如果是负值的话i[-2] = i[0]指向的其实是开头的元素.
    */
    // exam353
    /*
        1. 关于p1 += p2 - p1, 只要这些指针最后的结果都不超过同一个数组的大小, 那就是合法的, 无论p2 - p1是正负, 因为strdiff类型是有符号的
    */
    
    // 2
    // int ii[20];
    // int *ii_ptr = std::begin(ii);
    // int *ii_end = std::end(ii);
    // while(ii_ptr != ii_end)
    // {
    //     *ii_ptr = 0;
    //     ++ii_ptr;
    // }
    // for(auto c:ii)
    // {
    //     std::cout << c << std::endl;
    // }

    /*
        关于C字符串的一些知识点
        1. C字符串保存在一个数组中, 如果想知道大小可以用strlen函数, 不过这个数组一定要空字符串结尾, 没有\0则会报错
        2. 两个C字符串连在一起异常麻烦, 不如string + string 方便
    */
    
    // exam 354
    // 4
    // char str1[] = "hello";
    // char str2[] = "world";
    // char str3[11];
    // strcpy(str3, str1);
    // strcat(str3, " ");
    // strcat(str3, str2);
    // for(auto c:str3)
    // {
    //     std::cout << c;
    // }

    /*
        关于面向现实的妥协:
        1. string.c_str()函数, string与字符串字面值(带\0)的相加,
        2. vector<int> num_vec(begin(arr),end(arr))
        关于数组引用:
        1. int (&arr)[10], 这里的[10]没有任何意义, 他只表示这个引用, 引用的是一个大小为10的数组, 不是说有10个引用一一对应.
        2. 要将&arr = arr 区分开来, 数组引用后可以直接用arr[10]将值弄出来, 但是单纯的arr只是表示开头的那个地址, 不能使用下标索引符号.
        3. 指针地址的类型好像是const char*, 如果你看到一个变量的类型是const char * 那么这个东西就是一个地址.
    */

    

    _getch();
    return 0;
}