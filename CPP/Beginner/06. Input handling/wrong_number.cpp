/* This program asks for a number from the user.
 * The program will complain if an invalid input is given.
 *
 * This exercise practises:
 *  - Handling invalid input types.
 *  - Loop breaking and infinite loops.
 */

#include <iostream>
#include <limits>  // For numeric limits

int main() {
    unsigned int user_input;

    while (true) {
        // Get the user input:
        std::cout << "Enter an integer among 1 and 100: ";
        std::cin >> user_input;

        // Condition to break the loop.
        // std::cin.good() checks if the input is valid.
        if (std::cin.good() && user_input >= 1 && user_input <= 100) {
            break;
        }

        // Clear the error flag if the input is invalid:
        std::cin.clear();
        /* Discard the invalid input:
         *  - std::ingore() ignores or discards a value
         *  - std::numeric_limits<std::streamsize>::max() defines a numeric
         *    limit of the maximum stream size.
         *  - All characteres are ignored until the special character '\n'
         *    is found.
         */
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "You provided an invalid input" << std::endl;
    }

    std::cout << "You provided the valid input: " << user_input << std::endl;
    return 0;
}
