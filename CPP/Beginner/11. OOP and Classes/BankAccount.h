#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
   private:
    std::string account_holder;
    int account_number;
    double balance;

   public:
    // Constructor
    BankAccount(const std::string& holder, int number, double initial_balance);

    // Public methods
    void deposit(double amount);
    void withdraw(double amount);
    double get_balance() const;
    std::string get_account_holder() const;
    int get_account_number() const;
};

#endif