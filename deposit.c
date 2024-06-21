#include<stdio.h>
int main()
{

    int balance;
    printf("after pressing task 2: \n");
    
    
    depositemoney:
        printf("\nPlease enter deposite balance");
        scanf("%d", &balance);

    if (balance>=500)
    {
        printf("Thank you to join India bank");
    }
    else{
        printf("Please deposite balance more than 500");
        goto depositemoney;
    }

    return 0;
}