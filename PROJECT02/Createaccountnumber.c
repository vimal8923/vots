#include <stdio.h>
int main()
{
    int task, exit = 1;

    char name[20];
    long long int account_no = 0;

    printf("\n\n****Banking Management System *****\n");
    printf("\n1- Create Account");
    printf("\n2- Deposite");
    printf("\n3- Withdraw");
    printf("\n4- Check Balance");
    printf("\n0- Exit\n");

    while (exit != 0)
    {
        printf("\nPlease Enter the task number: ");
        scanf("%d", &task);

        if (task == 1)
        {
        }
        if (account_no == 0)
        {

        create_account:
            printf("\nPlease enter 11 digit account number only: ");
            scanf("%lld", &account_no);
        }
        if (account_no > 10000000000 && account_no < 100000000000)
        {
            printf("Please enter your account holder name: ");
            scanf("%s", &name);
        }

        else
        {
            printf(" Error Please enter valid account no");
            goto create_account;
        }
    }
    return 0;
}