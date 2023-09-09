# include <iostream>
# include <conio.h>

int main()
{
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 04d80c1 (第一次将本地文件夹include路径添加, 可以直接从本地文件夹中添加头文件)
   //  // 1
   //  unsigned u = 10, u2 = 42;
   //  std::cout << u2 - u << std::endl;
   //  std::cout << u - u2 << std::endl;
   //  /*
   //      无符号的定义符号如果超出了展示范围, 那么就会取模
   //  */
<<<<<<< HEAD

   // int i = 10, i2 = 42;
   // std::cout << i2 - i << std::endl;
   // std::cout << i - i2 << std::endl;
   // std::cout << i - u << std::endl;
   // std::cout << u - i << std::endl;
   // std::cout << u - i2 << std::endl;
   // /*
   //     无符号与有符号的加减乘除中, 无符号的优先级更大, 会将有符号的数转化成无符号(负数, 减法将取模), 然后再相加.
   // */

  // 2
  /*
      如果是单个字符那就是字符字面值, 后面不会跟着\0空字符, 但是如果是字符串字面值(多个字符), 那么就会跟着一个\0空字符, 也就是说字符串所占的大小总会比算的多1bit. 
    当然'asb'和"A"这些形式都可以定义个字符串字面值.
  */
	// std::cout << '\n';
	// std::cout << "\t Hi! \n";
	// std::cout << "Hi! \x4dO\115!\n";
	// /*
	// 	前缀就是字符, 后缀就是整形或者是浮点型
	// */
	/*	
		联系2.6: int month=09中不是一个有效的八进制整形数字, 因为8进制只能0到7, 这会发生错误, 而另一个就是将07作为一个8进制整形赋予day这个变量
	*/

	// 3
	std::cout << "2\x4d\n";
	std::cout << "2\t\x4d\n";

	_getch();
=======
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
>>>>>>> 9d38c81 (On branch office)
=======

   // int i = 10, i2 = 42;
   // std::cout << i2 - i << std::endl;
   // std::cout << i - i2 << std::endl;
   // std::cout << i - u << std::endl;
   // std::cout << u - i << std::endl;
   // std::cout << u - i2 << std::endl;
   // /*
   //     无符号与有符号的加减乘除中, 无符号的优先级更大, 会将有符号的数转化成无符号(负数, 减法将取模), 然后再相加.
   // */

  // 2
  /*
      如果是单个字符那就是字符字面值, 后面不会跟着\0空字符, 但是如果是字符串字面值(多个字符), 那么就会跟着一个\0空字符, 也就是说字符串所占的大小总会比算的多1bit. 
    当然'asb'和"A"这些形式都可以定义个字符串字面值.
  */
	// std::cout << '\n';
	// std::cout << "\t Hi! \n";
	// std::cout << "Hi! \x4dO\115!\n";
	// /*
	// 	前缀就是字符, 后缀就是整形或者是浮点型
	// */
	/*	
		联系2.6: int month=09中不是一个有效的八进制整形数字, 因为8进制只能0到7, 这会发生错误, 而另一个就是将07作为一个8进制整形赋予day这个变量
	*/

	// 3
	std::cout << "2\x4d\n";
	std::cout << "2\t\x4d\n";

	_getch();
>>>>>>> 04d80c1 (第一次将本地文件夹include路径添加, 可以直接从本地文件夹中添加头文件)
   return 0;
}