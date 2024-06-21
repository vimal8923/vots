#include <stdio.h>
#include <conio.h>
//#include <string.h>
#include <stdlib.h>
int list();
//void create();
void deposit();
void withdraw();
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
    printf("\n*******Banking Management system*******:");
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