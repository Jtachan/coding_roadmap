#include <iostream>
#include "7-functions.h"

int square(int num) {
    return num * num;
}

void greet() {
    std::cout << "Hello, welcome to the program!" << std::endl;
}

int main() {
    greet();

    int value = 5;
    int result = square(value);

    std::cout << "The square of " << value << " is " << result << std::endl;
    return 0;
}
