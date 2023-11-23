//
// Created by Mia on 23/11/2023.
//

#include <iostream>

int main() {
    int a;
    int * b = &a;

    a = 7;
    *b = 10;

    std::cout << a;

    return 0;
}