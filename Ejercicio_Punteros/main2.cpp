//
// Created by Mia on 23/11/2023.
//

#include <iostream>

int main() {
    int Magia[] = {1,2,3,4,5};
    int* ptr = Magia;

    for (int i = 0; i < 5; i++) {
        std::cout << *ptr;
        ptr++;
    }
    return 0;
}
