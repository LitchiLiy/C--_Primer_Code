#include <iostream>

int main(){
    // 1

    /*
        这是一个嵌套的注释
        /* 
        如果嵌套了会提示这个错误: expected unqualified-id before '/' token
        需要标明的是,单边的注释不会引起嵌套错误, 这个注释符号被视为单独的两个符号
    */

    // 2
    std::cout << "/*" << std::endl; 
    std::cout << "*/" << std::endl;
    // std::cout << /*"*/"*/ << std::endl; 
    std::cout << /*"*/ " /* " /* " */  << std::endl;

    /*
        1. 首先这种注释方式可以在代码段中间注释, 不会影响代码跑动
        2. 齐次单独的/*符号被视为两个独立的符号, 而不会特定视为注释
        3. 第三条是不合法的, 第三条不合法的理由是缺少另一个 " 部分
    */
        

    return 0;
}