# include <iostream>

int main(){
    // 1
    int sum = 0, v1 = 1;
    while(v1 <= 10){
        sum += v1;
        ++v1;
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

    return 0;
}