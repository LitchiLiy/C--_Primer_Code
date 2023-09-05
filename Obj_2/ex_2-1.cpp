# include <iostream>
# include <conio.h>

int main()
{
    // 1
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    /*
        无符号的定义符号如果超出了展示范围, 那么就会取模
    */

   int i = 10, i2 = 42;
   std::cout << i2 - i << std::endl;
   std::cout << i - i2 << std::endl;
   std::cout << i - u << std::endl;
   std::cout << u - i << std::endl;
   std::cout << u - i2 << std::endl;
   /*
       无符号与有符号的加减乘除中, 无符号的优先级更大, 会将有符号的数转化成无符号(负数, 减法将取模), 然后再相加.
   */
    
   _getch();
   return 0;
}