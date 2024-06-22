#include <stdio.h>
#include <string.h>
void account();
void name();
void balance();
void print();
int main()
{
    int tasknumber;

    printf("\n*******Banking Management system******");
    printf("\n1- Create Account:");
    printf("\n2- Deposit:");
    printf("\n3- Withdraw:");
    printf("\n4- Check balance");
    printf("\n0- Exit:");
    while (1)
    {
        printf("\nplease enter the task number:");
        scanf("%d", &tasknumber);

        if (tasknumber == 1)
        {
        }
        else if (tasknumber == 2)
        {
        }
        else if (tasknumber == 3)
        {
        }
        else if (tasknumber == 4)
        {
        }
        else if (tasknumber == 0)
        {
            break;
        }
        else
        {
            printf("\nInvalid TaskNumber");
        }
    }

    return 0;
}
void account()
{
    char account[11];
    while (1)
    {

        printf("\nPlease Enter account number 11 digits only : ");
        scanf("%s", &account);
        if (strlen(account) == 11)
        {
            break;
        }
    }
}
void name()
{
    char name[10];
    printf("\nPlease Enter your name");
    scanf("%s", &name);
}
void balance()
{
    int amount;
    while (1)
    {

        printf("Please Enter Balance (Opening Amount would be 500 mininum) ");
        scanf("%d", &amount);
        if (amount >= 500)
        {
            break;
        }
    }
}
void print()
{
    printf("\n Thank You to Join India Bank");
    printf("\n Your account details are : ");
    printf("\n Account Number : %s",account);
    printf("\n Account Holdeer Name : %s", name);
 
}