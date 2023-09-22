#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

#include "Obj_7/myinc/Screen.h"
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    /*
        1. const和引用必须初始化, 所以如果类类型成员中包含const和引用对象的话, 必须初始化这个类.
        2. 类在初始化的时候, 初始化顺序和成员出现的前后顺序是绑定的, 和你构造函数:后面的对象无关.
    */
    // exam751
    // 1 正确的应该是这样的, 错误在初始化定义顺序错了
    struct X
    {
        X() = default;
        X(int i, int j) : x(i), y(j){};
        public:
            const X &print() const
            {
                std::cout << x << " " << y << std::endl;
                return *this;
            }
        private:
            int x, y;
    };
    X num(1, 2);
    num.print();

    // 7.39
    /*
        有可能istream不合法, 因为他可能输入的是一个字面值, 而不是一个对象
    */

   // 委托构造函数(其实就是迭代)
   struct Z
   {
    public:
        Z(int i, char c) : x(i), str(c){};
        Z() : Z(0, 'a'){};
        Z(char c) : Z(1, c){};

    private:
        int x;
        char str;
   };
   /*
    1. 委托构造函数记得用的是:而不是==
   */

  // exam753
  // 1
  struct C
  {
    public:
        C() = default;
        C(int vi) : i(vi){};
        int x;
    private:
        int i;
        // Screen obj(i); 我觉得是这样的
  };

  /*
    1. 隐式构造函数好像没啥用, 反正记住, 构造函数参数为一个时, 可以用explicit来声明这个构造函数, 让其禁止这种隐式转换行为, 当参数大于等于2时, 不会发生隐式转换, 故也不用explicit这个声明了
    2. 聚合类的意思就是类的集合, 而不是类, 相当于一个文件夹.
  */
    struct juhelei
    {
        int i;
        char j;
        std::string str;
    };
    juhelei jj = {1, 'c', "hello"};
    std::cout << jj.i << " " << jj.j << " " << jj.str << std::endl;

    _getch();
    return 0;
}