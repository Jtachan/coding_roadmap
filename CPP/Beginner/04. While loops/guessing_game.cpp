/* Game where a random number among 1 and 100 is chosen.
 * The user has to guess the number. For every guess, the
 * program will anounce if the number is too high, too low
 * or it is the correct guess.
 *
 * This exercise practises the 'while' and 'do-while' operations.
 */

#include <cstdlib>  // For 'rand()' and 'srand()'
#include <ctime>    // For 'time()'
#include <iostream>

int main() {
    /* Seed random number generator.
     * Without the seed, the random number will always be the
     * same every time the program is execured.
     */
    srand(time(0));

    // Generate random number:
    int random_number = rand() % 100 + 1;
    int user_guess;
    bool correct_guess = false;

    std::cout << "I have selected a number among 1 and 100 "
                 "and you have to guess it."
              << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> user_guess;

        if (user_guess == random_number) {
            std::cout << "Congratulations! You've guessed the number!"
                      << std::endl;
            correct_guess = true;
        } else if (user_guess < random_number) {
            std::cout << "Too low!" << std::endl;
        } else {
            std::cout << "Too high!" << std::endl;
        }
    } while (!correct_guess);

    return 0;
}
