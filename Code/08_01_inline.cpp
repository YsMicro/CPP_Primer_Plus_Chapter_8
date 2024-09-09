//
// Created by Vojago on 2024/9/9.
//
//inline.cpp 使用一个内联函数

#include <iostream>

//定义内联函数
inline double square(double x) {
    return x * x;
}

[[maybe_unused]] int code_0801_inline() {
    using namespace std;
    double a, b;
    double c = 13.0;
    a = square(5.0);
    b = square(4.5 + 7.5);
    cout << "a = " << a << " , b = " << b << "\n";
    cout << "c = " << c;
    cout << " , c squared = " << square(c++) << "\n";
    cout << "现在 c = " << c << "\n";
    return 0;
}
