"""Exercise to learn about classes."""


class BankAccount:
    """A bank account class."""

    def __init__(self, account_holder: str, account_number: str, initial_balance: int = 0):
        """Constructor of the BankAccount class.

        Parameters
        ----------
        account_holder : str
            Name of the person who owns the account.
        account_number : int
            Identifier of the account, composed of 6 digits and letters.
        initial_balance : int, default=0
            Initial balance of the account at the moment of creation.
        """
        self._account_holder = account_holder
        self._account_number = account_number
        self._balance = initial_balance

    def deposit(self, amount: float):
        """Method to deposit money into the account."""
        if amount < 0:
            raise ValueError("Deposit amount must be positive.")
        self._balance += amount
        print(f"Deposited {amount} to {self._account_holder}'s account.")

    def withdraw(self, amount: float):
        """Method to withdraw money from the account."""
        if amount < 0:
            raise ValueError("Withdrawal amount must be positive.")
        if amount > self._balance:
            raise ValueError("Not enough funds in the account.")
        self._balance -= amount
        print(f"Withdrawn {amount} from {self._account_holder}'s account.")

    def print_balance(self) -> float:
        """Printing the current balance."""
        print(f"Balance: {self._balance} €")

    @property
    def info(self) -> str:
        """Return a string with the account holder and number."""
        return f"{self._account_holder} - {self._account_number}"
