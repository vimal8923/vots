#include<stdio.h>
int list();
void main()
{ 
list();  
}
int list()
{
    int ch;
    printf("\n1- Create Account:");
    printf("\n2- Deposit:");
    printf("\n3- Withdraw:");
    printf("\n4- Check balance");
    printf("\n5- Exit:\n");
    printf("\nPlease enter the task number:");
    scanf("%d", &ch);
    return (ch);
}