#include<stdio.h>
#include <string.h>


typedef struct {
     int accountNumber;
    char accountHolderName[50];
}


 BankAccount;


int isValidAccountNumber(long long int accountNumber)
 {
    return accountNumber >= 10000000000LL && accountNumber <= 99999999999LL;
}


BankAccount createAccount()
 {
    BankAccount account;

    printf("Enter account number 11 digits only : ");
    scanf("%d", &account.accountNumber);
    while (!isValidAccountNumber(account.accountNumber))
     {
        printf("Invalid account number. Please enter an 11-digit account number only: ");
        scanf("%d", &account.accountNumber);
    }

    printf("Enter account holder name: ");
    scanf("%s",&account.accountHolderName); 

    return account;
}


void displayAccount(BankAccount account) 
{
    printf("\nAccount Number: %d\n", account.accountNumber);
    printf("Account Holder Name: %s\n", account.accountHolderName);
}


int main()  
{
    BankAccount account;
 
    printf("*** Project Banking Management System ***\n");
    printf("Please enter task number  \n");
  
    account = createAccount();

    printf("\n***** Welcome, %s. Your account is created *****\n\n", account.accountHolderName);

    displayAccount(account);

    return 0;
}


