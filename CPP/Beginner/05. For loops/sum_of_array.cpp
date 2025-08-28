/* Program to sum the numbers in an array.
 *
 * This exercise practises:
 *    - Definition & initialization of an array.
 *    - for-loops
 *    - Understanding of 'sizeof()'
 */
#include <iostream>

int main() {
    int result = 0;
    // Definition of an array with 10 ints
    int numbers[10];

    /* Dynamic find of how long the array is:
     * 'sizeof()' returns the number of bytes of an element.
     * Because the array has all elements of the same type, each
     * element has the same size.
     * Thus, the total number of elements is defined by the
     * total size in bytes of the array over the size of one element.
     */
    int arr_size = sizeof(numbers) / sizeof(numbers[0]);

    // Populate the array with the user input:
    std::cout << "Provide 10 numbers to be added:" << std::endl;
    for (int i = 0; i < arr_size; i++) {
        std::cin >> numbers[i];
    }

    // Next syntaxis is valid only from C++11
    for (int number : numbers) {
        // Sum all numbers
        result += number;
    }

    std::cout << "The sum of the numbers is " << result << std::endl;
}
