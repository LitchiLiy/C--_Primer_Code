#include <conio.h>
#include <iostream>
#include <windows.h>
 
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*
        1. 你好像没有考虑过cout<<i<<++i<<endl;这个的输出, 这个语句在不同的编译器输出是不同的, 所以这是个错误语句.
        2. 只有四个二元运算符运算符决定了计算顺序 && || ?: 和 ,
    */

   /*
    关于除法和取余的操作
    1. 除法的得到的数值向0取整:即直接去掉小数部分(这是两个整数int相除时)
    2. 取余的符号取决于头一个整数是什么符号, 第二个整数的符号无关(可以无视), 而且%取余必须是两个整数
    3. 正负号优先级最高, 过了乘除取余, 最后加减, 同一个等级那就是从左到右
   */
//    int a = 21, b = 10;
//    int c = -21, d = -10;
//    std::cout << (a % b) << std::endl;
//    std::cout << (c % d) << std::endl;
//    std::cout << (a % c) << std::endl;

//    // exam 4.2
//    // 求整数是奇数还是偶数
//    int num;
//    std::cout << "输入一个整数: " << std::endl;
//    std::cin >> num;
//    if(num % 2 == 0)
//    {
//        std::cout << "该数是偶数" << std::endl;
//    }
//    else
//    {
//        std::cout << "该数是奇数" << std::endl;
//    }

    /*
       关于条件运算符和关系运算符:
       1. 非
       2. 大于 小于 不小于 不大于
       3. 等于 不等于 , 这里需要注意的是等于不等于优先级要比大于小于要低
       4. 与 这个优先级比或还要高
       5. 或
    */
   /*
    关于赋值运算符:
    1. 左值 = 右值, 运算结果类型永远是左值的类型, 不是右值的类型, 比如说int = float, 他会将float的小数点丢掉给int
    2. 赋值顺序永远是从右到左, 比如多个赋值语句int = double = float, 从左到右赋值, 
   */
    // int i = 0; 编译都不给过, 
    // if(42 = i)
    //     ;
    // if(i = 42)
    //     ;
    // std::string str = {"you are a man."};
    // auto word = str.begin();
    // while(word != str.end())
    // {
    //     std::cout << *word++ << std::endl;
    // }
    /*
        关于递增递减运算符
        1. 我这里只讲后增, 他是这样的, i++过程是对i加一, 但是返回的整个i++值还是i
        2. 关于string和vector这两个类, 想索引内部的指针的话用begin和end就可以了, 定义的指针用auto*(类型是string.iterator)
    */
   // exam 4.5
   // 3
//    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//    int *ptr = a;
//    if(*ptr != 0 && *ptr++)
//    {
//        std::cout << 1 << std::endl;
//    }
    /*
        很明显, 第三题的前两个都是合法的, 因为&&运算符有前后顺序, 但是第三条是不合法的, 因为没有前后顺序的设定.
    */
<<<<<<< HEAD
<<<<<<< HEAD
   
=======
>>>>>>> 9501e89 (笔记本上学的)
=======
   
>>>>>>> d463cfc (On branch office)
    

   _getch();
   return 0;
}