#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account {
private:
    // Private member variable to store the balance.
    double balance;

public:
    // Default constructor.
    // Initialize 'balance' to 0.
    Account() {
        balance = 0;
    }

    // Parameterized constructor.
    // Initialize 'balance' with the provided 'initialBalance'.
    Account(double initialBalance) {
        balance = initialBalance;
    }

    // Getter function to return the current balance.
    double getBalance() {
        return balance;
    }

    // Setter function to set the balance to a new value.
    void setBalance(double newBalance) {
        balance = newBalance;
    }

    // Function to deposit an amount into the account.
    void deposit(double amount) {
        balance += amount;
    }

    // Function to withdraw an amount from the account.
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds !" << "\n";
        }
    }

    // Destructor.
    // Display a message indicating the account is being destroyed.
    ~Account() {
        std::cout << "Account with balance " << balance << " is being destroyed." << "\n";
    }
};

int main() {
    Account account1;  // Default constructor, balance = 0
    Account account2(1000);  // Parameterized constructor, balance = 1000

    std::cout << "Account 1 balance: " << account1.getBalance() << std::endl;
    std::cout << "Account 2 balance: " << account2.getBalance() << std::endl;

    account1.deposit(500);
    account2.withdraw(200);

    std::cout << "Account 1 balance after deposit: " << account1.getBalance() << std::endl;
    std::cout << "Account 2 balance after withdrawal: " << account2.getBalance() << std::endl;

    account1.setBalance(3000);

    // Attempt to withdraw more than the balance
    account1.withdraw(4000);

    return 0;

#endif // ACCOUNT_H



}