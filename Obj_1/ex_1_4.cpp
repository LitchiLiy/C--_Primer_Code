# include <iostream>

int main()
{
    // 1
    int sum = 0, v1 = 1;
    while(v1 <= 10){
        sum += v1;
        ++v1; // v1++也可以, 区别在于前缀和后缀, 后缀的话是先进行i操作后再++.
    }
    std::cout << "The sum of 1 to 10 is:"
              << sum << std::endl; 
    // 这里需要注意, 这种编写方法和在同一行输出的结果是一样的, 在sum数值不会换行, 还是在同一行, 不过endl后会换行
    
    // 2

    sum = 0;
    v1 = 50;
    while(v1 <= 100){
        sum += v1;
        ++v1;
    }
    std::cout << "The sum of 50 to 100 is:"
              << sum << std::endl;

    // 3
    v1 = 10;
    std::cout << "the number from 10 to 0:" << std::endl;
    while(v1 >= 0){
        std::cout << v1 << std::endl;
        --v1;
    }

    // 4
    v1 = 0;
    int v2 = 0;
    std::cout << "Please enter the score:" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "the number of the score is:" << std::endl;
    while(v1 <= v2){
        std::cout << v1 << std::endl;
        ++v1;
    }

    // 5
    v1 = 0;
    std::cout << "For 循环输出:" << std::endl;
    // for循环的执行顺序是, 先初始化, 判断条件, 执行任务, 执行任务后才执行第三个For的格子内容.
    for (int v2 = 0; v2 <= 10; ++v2){
        std::cout << v2 << std::endl;
    }

    // 从-100到100为0

    // 7
    v1 = 0;
    sum = 0;
    std::cout << "输入一组数, 求总和:" << std::endl;

    while(std::cin >> v1){
        sum += v1; 
    }
    // 输入时需要用文件结束符来结束输入, 或者是输入一个无效字符, 比如说这里输入一个字母就是无效的, istream就会视为错误, 只有这两种方式. 
    // 单单回车是没有用的.
    std::cout << "the sum of number is:" << sum << std::endl;

    // 8, 循环识字,
    int CurrVal = 0, val = 1;
    std::cout << "输入一组数据, 操作方法是识别这一组数据中连续相同的值, 输出值的大小和个数" << std::endl;

    if(std::cin >> CurrVal)
    {
        int times = 1;
        while(std::cin >> val)
        {
            if(CurrVal == val)
            {
                ++times;
            }
            else
            {
                std::cout << "Value:" << CurrVal << " times:" << times << std::endl;
                CurrVal = val;
                times = 1;
            }
        }
        std::cout << "Value:" << CurrVal << " times:" << times << std::endl;
    }

    return 0;
}