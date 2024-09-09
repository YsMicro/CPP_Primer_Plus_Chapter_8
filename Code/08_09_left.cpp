//
// Created by Vojago on 2024/9/9.
//
//left.cpp 有默认参数的字符串函数
#include <iostream>

const int ArSize = 80;

char *_09_left(const char *str, int n = 1);

[[maybe_unused]] int code_0809_left() {
    using namespace std;
    char sample[ArSize];
    cout << "输入文本：\n";
    cin.get(sample, ArSize);
    char *ps = _09_left(sample, 4);
    cout << ps << endl;
    delete[] ps;
    ps = _09_left(sample);
    cout << ps << endl;
    delete[] ps;
    return 0;
}

char *_09_left(const char *str, int n) {
    if (n < 0) {
        n = 0;
    }
    char *p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];
    while (i <= n)
        p[i++] = '\0';
    return p;
}
