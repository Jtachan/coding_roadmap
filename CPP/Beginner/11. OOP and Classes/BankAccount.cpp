/**
 * Classes and Object-Oriented Programming (OOP)
 * Create a BankAccount class that represents a simple bank account with basic
 * operations like depositing money, withdrawing money, and checking the
 * balance.
 *
 * REQUIREMENTS
 *   - The class 'BankAccount' must have the following private members:
 *      * std::string account_holder (the name of the account holder)
 *      * int account_number (the account number)
 *      * double balance (the current balance)
 */

#include "BankAccount.h"

#include <iostream>
#include <string>

BankAccount::BankAccount(const std::string& holder, int number,
                         double initial_balance)
    : account_holder(holder),
      account_number(number),
      balance(initial_balance) {}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    } else {
        std::cerr << "Deposit amount must be positive." << std::endl;
    }
}

void BankAccount::withdraw(double amount) {
    if (amount > 0) {
        if ((balance > 0) && (amount <= balance)) {
            balance -= amount;
        } else {
            std::cerr << "Insuficient funds." << std::endl;
        }
    } else {
        std::cerr << "Withdrawl amount must be positive." << std::endl;
    }
}

double BankAccount::get_balance() const { return balance; }

std::string BankAccount::get_account_holder() const { return account_holder; }

int BankAccount::get_account_number() const { return account_number; }
