#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int list();
//void create();
void deposit();
void withdraw();
void createaccount();
void check();
int totalamount = 500;
int Amount, withd;
int totaldeposit = 0, totalwithdraw = 0;
//long long int number;
//char Name[50];

void main()
{
  list();

    while (1)
    {
    
    switch (list())
        {
       case 1:
            createaccount();
            break;

        case 2:
            deposit();
            totaldeposit += Amount;
            break;
        case 3:
            withdraw();
            if (withd <= totalamount)
                totalamount -= withd;
            break;
        case 4:
            check();
            break;
        case 5:
            exit(0);
        default:
        printf("\n invaild choice");
        }
        getch();
    }
    getch();
}
int list()
{
    int ch;
    printf("\n**Banking Management system:");
    printf("\n1- Create Account:");
    printf("\n2- Deposit:");
    printf("\n3- Withdraw:");
    printf("\n4- Check balance");
    printf("\n5- Exit:\n");
    printf("\nPlease enter the task number:");
    scanf("%d", &ch);
    return (ch);
}
//void create()
//{
//    printf("Enter account number 11 digits only : ");
//    scanf("%lld", &number);
//}
void deposit()
{
    printf("\nEnter a Amount deposit");
    scanf("%d", &Amount);
    totalamount += Amount;
}
void withdraw()
{
    printf("\nPlease Enter Amount you wish withdraw:");
    scanf("%d", &withd);
    if (withd <= totalamount)
        totalamount -= withd;
    else
        printf("\nless Amount withdraw is not possible:");
}
void check()
{
    printf("\nTotal Amount =%d", totalamount);
    printf("\nTotal Deposit Amount =%d", totaldeposit);
    printf("\nTotal Withdraw Amount =%d", totalwithdraw);
}
void createaccount()
{
    typedef struct 
    {
        long long int accountNumber;
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
        scanf("%lld", &account.accountNumber);
        while (!isValidAccountNumber(account.accountNumber))
        {
            printf("Invalid account number. Please enter an 11-digit account number only: ");
            scanf("%lld", &account.accountNumber);
        }

        printf("Enter account holder name: ");
        scanf(" %[^\n]s", account.accountHolderName); 

        return account;
    }


    void displayAccount(BankAccount account) 
    {
        printf("\nAccount Number: %lld\n", account.accountNumber);
        printf("Account Holder Name: %s\n", account.accountHolderName);
    }


    BankAccount account;    

    account = createAccount();

    printf("\n***** Welcome, %s. Your account is created *****\n\n", account.accountHolderName);

    displayAccount(account);

}
