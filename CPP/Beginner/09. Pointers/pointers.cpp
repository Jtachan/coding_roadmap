/* Exercise to get familiar with pointers.
 *
 * BASICS
 *   - Declaration: Understand how to declare and reference pointers.
 *   - Dereferencing: Access the value a pointer references to.
 *   - Arithmetics: Incrementing pointers and how it affects the memory.
 *   - Functions: Parsing pointers to functions and manipulating them.
 *
 * REQUIREMENTS
 *   - Referencing pointers to variables. Reading their value and the variables'
 * values.
 *   - Using pointer arithmetic to manipualte values.
 *   - Work with arrays and pointers.
 *   - Use pointers to swap values.
 */

#include <iostream>

// Function to swap values.
void swap(int* a, int& b) {
    int temp = *a;
    *a = b;
    b = temp;
}

int main() {
    // Basics of pointers
    int x = 10;
    int* p = &x;

    std::cout << "\n1. Basics\n ********** \n"
              << "Value of 'x': " << x << '\n'
              << "Pointer 'p' pointing to 'x': " << p << '\n'
              << "Value at pointer 'p' (dereferencing): " << *p << std::endl;

    // Arithmetics
    (*p)++;
    std::cout << "\n2. Arithmetics\n ********** \n"
              << "Value at 'x' after incrementing the value via pointer 'p': "
              << x << std::endl;

    // Arrays
    int arr[5] = {1, 2, 3, 4, 5};
    int* arrPtr = arr;

    std::cout << "\n3. Arrays operations\n ********** \n"
              << "Array elements accessed via pointer arithmetics:" << '\n';
    for (int i = 0; i < 5; i++) {
        // Accessing arr[i] via pointer:
        std::cout << *(arrPtr + i) << " ";
    }
    std::cout << std::endl;

    // Swapping values
    int a = 5, b = 10;
    std::cout << "\n4. Pointers with functions\n ********** \n"
              << "Before swap: a=" << a << ", b=" << b << std::endl;

    swap(&a, b);  // Passing the memory addresses of 'a' and 'b'.
    std::cout << "After swap: a=" << a << ", b=" << b << std::endl;

    return 0;
}
