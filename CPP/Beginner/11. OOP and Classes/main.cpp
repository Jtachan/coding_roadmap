#include <iostream>

#include "BankAccount.h"

int main() {
    // Create a BankAccount object:
    BankAccount myAccount("John Doe", 123456, 500.00);

    // Display initial status:
    std::cout << "Account holder: " << myAccount.get_account_holder() << '\n'
              << "Account number: " << myAccount.get_account_number() << '\n'
              << "Initial Balance: $" << myAccount.get_balance() << std::endl;

    // Perform transactions:
    std::cout << "Deposit $150.25..." << std::endl;
    myAccount.deposit(150.25);
    std::cout << "Current balance: $" << myAccount.get_balance() << std::endl;

    std::cout << "Withdrawing $100.00..." << std::endl;
    myAccount.withdraw(100.0);
    std::cout << "Current balance: $" << myAccount.get_balance() << std::endl;

    std::cout << "Attempting to withdraw E800.00" << std::endl;
    myAccount.withdraw(800.0);

    return 0;
}
