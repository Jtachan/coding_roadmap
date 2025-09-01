/* Here mathematic operations are performed over a value given by the user. */

#include <iostream>

int main() {
    float temp_f;
    float temp_c;

    // Without 'std::endl' the user writes right next to the sentence:
    std::cout << "Enter a temperature in fahrenheit: ";
    std::cin >> temp_f;

    temp_c = (temp_f - 32u) * 5.0f / 9.0f;
    std::cout << "Your temperature in celsius is " << temp_c << std::endl;

    return 0;
}
