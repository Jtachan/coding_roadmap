/* This program looks onto the if-else block logic. */

#include <iostream>

int main() {
    int grade;

    // It is assumed the given number is always valid:
    std::cout << "Enter your grade mark (number among 0 and 100): ";
    std::cin >> grade;

    if (grade >= 90) {
        std::cout << "Your grade is A" << std::endl;
    } else if (grade >= 80) {
        std::cout << "Your grade is B" << std::endl;
    } else if (grade >= 70) {
        std::cout << "Your grade is C" << std::endl;
    } else if (grade >= 60) {
        std::cout << "Your grade is D" << std::endl;
    } else if (grade >= 50) {
        std::cout << "Your grade is E" << std::endl;
    } else {
        std::cout << "Your grade is F" << std::endl;
    }
    return 0;
}
