// Create a C++ class for a bank account following the given specifications.
// You need to complete the 'Account' class in this 'account.h' file.
// The 'Account' class should include the following:
// 1. A private member variable 'balance' of type double to store the account balance.
// 2. Public constructors:
//    a. A default constructor that initializes 'balance' to 0.
//    b. A parameterized constructor that takes an initial balance as an argument.
// 3. Public member functions:
//    a. Getter function 'getBalance' to return the current balance.
//    b. Setter function 'setBalance' to set the balance to a new value.
//    c. Function 'deposit' that takes an amount and adds it to the balance.
//    d. Function 'withdraw' that takes an amount and subtracts it from the balance.
// 4. A destructor that displays a message like "Account with balance <balance_value> is being destroyed."

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    // Private member variable to store the balance.
    double balance;

public:
    // Default constructor.
    // Initialize 'balance' to 0.
    // TODO: Implement the default constructor.
    Account(){
        double balance=0;
    }

    // Parameterized constructor.
    // Initialize 'balance' with the provided 'initialBalance'.
    // TODO: Implement the parameterized constructor.
    Account(double initalBalance){
        double balance= initalBalance;  
    }

    // Getter function to return the current balance.
    // TODO: Implement the 'getBalance' function.
    double getBalance(){
        return balance;
    }


    // Setter function to set the balance to a new value.
    // TODO: Implement the 'setBalance' function.
    void setBalance(double newBalance){
        balance= newBalance;
    }

    // Function to deposit an amount into the account.
    // TODO: Implement the 'deposit' function.
    void deposit(double amount){
        balance += amount;

    }

    // Function to withdraw an amount from the account.
    // TODO: Implement the 'withdraw' function.
     void withdraw(double amount);
      if (amount <= balance)
      {
        balance-= amount;
      }
       
     else {
        std::cout<<"Insufficient funds for withdrawal"<<"\n";
     }

    // Destructor.
    // Display a message indicating the account is being destroyed.
    // TODO: Implement the destructor.
    ~Account(){
    std::cout << "Account with balance" << balance << "\n";
    }
    
};


#endif // ACCOUNT_H
