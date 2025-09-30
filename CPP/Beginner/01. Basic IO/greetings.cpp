#include <iostream>
#include <string>

int main() {
    int age;
    std::string name;

    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "How old are you?" << std::endl;
    std::cin >> age;

    std::cout << "Hello, " << name << "! You are " << age << " years old."
              << std::endl;
    return 0;
}
