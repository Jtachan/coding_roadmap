#include <iostream>

int main() {
    // Dinamically allocate an array of 10 integers:
    int* array = new int[10];

    // Fill the array with values from 1 to 10:
    for (int i = 0; i < 10; i++) {
        array[i] = i + 1;
    }

    // Print the content of the array:
    std::cout << "Array content:\n";
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Delete the allocated array:
    delete[] array;

    // Attempt to access the array values:
    /**
     * Warning: This is unsafe and can lead to undefined beahvior.
     * Some possible outcomes are:
     *  - See the old values (if the memory has not been reused by the system).
     *  - Get garbage values.
     * This might lead in some ocations to leading a crash on the program.
     */
    std::cout << "Attempting to access the array after deletion: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Best practise: setting the array to a null pointer:
    array = nullptr;

    std::cout << "Attempting to access the array after assigning to a null "
                 "pointer:\n"
              << array << std::endl;

    return 0;
}
