[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/vkJeenRs)
# Bank Account Class Exercise

This programming exercise is designed to help you practice creating a C++ class for a bank account. The exercise involves creating an `Account` class with various functionalities, including setting and getting the balance, depositing and withdrawing funds, and testing the class with a `main` function.

## Instructions

1. Open the `account.h` file. This file contains the class definition for the `Account` class. Your task is to implement the class by filling in the TODO comments in the file. Follow the specifications provided in the comments.

2. Once you have implemented the `Account` class, compile the program by running the `lab2exercise1.cpp` file 

3. The program will test the `Account` class using the provided `main` function. It will perform various operations on two accounts and display the results.

## Sample Input and Output

Here's a sample input and output based on the comments in the solution:

```plaintext
Account 1 balance: 0
Account 2 balance: 1000
Account 1 balance after deposit: 500
Account 2 balance after withdrawal: 800
Account 1 balance after setting a new balance: 3000
Insufficient funds!
Account with balance 3000 is being destroyed.
Account with balance 800 is being destroyed.
```

In the sample output above:

- The initial balances of Account 1 and Account 2 are displayed.
- After depositing $500 into Account 1, its balance is updated.
- After withdrawing $200 from Account 2, its balance is updated.
- Account 1's balance is set to $3000 using the `setBalance` function.
- An attempt to withdraw $1500 from Account 2 results in an "Insufficient funds!" message.
- The destructor messages indicate that both accounts are being destroyed when the program exits.

## Task

Complete the `lab2exercise1.cpp` class in `account.h` and ensure that the program produces the expected output as shown in the sample above.
