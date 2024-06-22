#include <stdio.h>
int main()
{
    int balance;
    int deposite;

depositemoney:
    printf("\nPlease enter deposite balance: ");
    scanf("%d", &deposite);

    if (deposite >= 100)
    {
        balance += deposite;
        printf("\n**Thanks for using us**\n%d Rupeees has credited in Your account.\n", deposite);
    }
    else if (deposite < 100 && deposite != 0)
    {
        printf("Please deposite balance more than 100 (press--0 for exit): ");
        goto depositemoney;
    }
    else
    {
        printf("You left");
    }

    return 0;
}