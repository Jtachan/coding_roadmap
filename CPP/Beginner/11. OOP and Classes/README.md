# Exercise 11: Implement a Simple BankAccount Class
## Objective
Create a BankAccount class that represents a simple bank account with basic operations like depositing money, withdrawing money, and checking the balance.

## Task

- Class Definition: Create a class named BankAccount with the following private members:
  - std::string account_holder (the name of the account holder)
  - int account_number (the account number)
  - double balance (the current balance)
- Constructor: Define a constructor that initializes the account holder’s name, account number, and starting balance.
- Public Methods:
  - void deposit(double amount): Adds money to the account.
  - void withdraw(double amount): Subtracts money from the account if there are sufficient funds.
  - double get_balance() const: Returns the current balance.
  - std::string get_account_holder() const: Returns the name of the account holder.
  - int get_account_number() const: Returns the account number.
- Error Handling: Ensure that the withdrawal method does not allow the balance to go negative. If the withdrawal amount exceeds the current balance, print an error message.

In the main function, create an instance of the BankAccount class.
Simulate some transactions like depositing money, withdrawing money, and printing the account balance after each transaction.

## Expected result
```
Account Holder: John Doe
Account Number: 123456
Initial Balance: $500.00

Depositing $150.00...
Current Balance: $650.00

Withdrawing $100.00...
Current Balance: $550.00

Attempting to withdraw $600.00...
Insufficient funds! Current Balance: $550.00
```

## Hints
- Use const for methods that do not modify the state of the object.
- Consider how to encapsulate the account data properly, exposing only the necessary methods to interact with the class.

# C++ theory
