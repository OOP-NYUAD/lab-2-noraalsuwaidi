#include <iostream>
#include "account.h"

int main() {
    // Create an Account object using the default constructor.
    Account account1;

    // Create another Account object with an initial balance of $1000.
    Account account2(1000.0);

    // Test the 'getBalance' function to retrieve the balance of both accounts and print them.
    std::cout << "Account 1 balance: " << account1.getBalance() << std::endl;
    std::cout << "Account 2 balance: " << account2.getBalance() << std::endl;

    // Deposit $500 into the first account.
    account1.deposit(500.0);

    // Withdraw $200 from the second account.
    account2.withdraw(200.0);

    // Test the 'getBalance' function again to check the updated balances and print them.
    std::cout << "Account 1 balance after deposit: " << account1.getBalance() << std::endl;
    std::cout << "Account 2 balance after withdrawal: " << account2.getBalance() << std::endl;

    // Set a new balance of $3000 for the first account using the 'setBalance' function.
    account1.setBalance(3000.0);

    // Test the 'getBalance' function for the first account after setting the new balance.
    std::cout << "Account 1 balance after setting a new balance: " << account1.getBalance() << std::endl;

    // Test the 'withdraw' function for the second account, attempting to withdraw an amount greater than the balance.
    account2.withdraw(1500.0);

    // Test the destructor for both accounts.
    return 0;
}
