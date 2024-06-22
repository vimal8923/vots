#include<stdio.h>



int main ()
{
    int task, exit=1; 
    int deposite,withdraw;

    char name[20];   
    long long int account_no=0;
    int balance;


    printf("\n\n***********Project-2     Banking Management System ************\n");
    printf("\n1- Create Account");
    printf("\n2- Deposite");
    printf("\n3- Withdraw");
    printf("\n4- Check Balance");
    printf("\n0- Exit\n");

    

    while (exit!=0)
    {
        printf("\nPlease Enter the task number: ");
        scanf("%d",&task);

        if (task==1)
        {
                if (account_no==0)
                {

                    create_account:
                        printf("\nPlease enter 11 digit account number only: ");
                        scanf("%lld", &account_no);

                    if (account_no > 10000000000 && account_no <100000000000)
                    {
                        printf("Please enter your account holder name: ");
                       scanf("%s", &name);
                                        
                                        input_balance:
                                        printf("Please enter balance (Opening account would be 500 minimum): ");
                                        scanf("%d", &balance);

                                        if (balance>=500)
                                        {
                                            printf("\n\n*****Thank you to join india bank***** \nyour account details:\n");
                                            printf("Account Number: %lld\n",account_no);
                                            printf("Account Holder Name: %s\n", name);
                                            printf("Account Balance: %d\n\n", balance);

                                        }
                                        else{
                                            goto input_balance;
                                        }
                                        
                    }    
                                
                    else
                        {
                            printf("Please enter valid account no");
                            goto create_account;
                        }   
                }          
                else
                {
                    int press;
                    printf("You have already account\n");
                    printf("press--1 for new account \npress--2 for account information \npress--0 for exit\n");
                    printf("press--");
                    scanf("%d",&press);
                    if (press==1)
                    {
                         goto create_account;
                    }

                    else if (press==2)
                    {
                        printf("Account Number: %lld\n",account_no);
                        printf("Account Holder Name: %s\n", name);
                        printf("Account Balance: %d\n\n", balance);
                    }
                    else if (press==0)
                    {
                        printf("Your access is previous account\n");
                    }
                    
                    
                    

                }                   
        }

        else if (task==2)
        {
                
            if (account_no > 10000000000 && account_no <100000000000)
            {
                depositemoney:
                    printf("\nPlease enter deposite balance: ");
                    scanf("%d", &deposite);

                if (deposite>=100)
                {
                    balance+=deposite;
                    printf("\n***Thanks for using us***\n%d Rupeees has credited in Your account.\n", deposite);
                }
                else if(deposite<100 && deposite!=0)
                {
                    printf("Please deposite balance more than 100 (press--0 for exit): ");
                    goto depositemoney;
                }
                else
                {
                    printf("You left");
                }
            }
            else
            {
                printf("Sorry! Please create account first....\n");
            }
        
                
        }

        else if (task==3)
        {
            if (account_no > 10000000000 && account_no <100000000000)
            { 
                printf("Enter withdraw ammount: ");
                scanf("%d", &withdraw);
                if (balance>withdraw)
                {
                    balance-=withdraw;
                    printf("%d rupees debited in your bank account\n",withdraw);
                }
                else
                {
                    printf("Insufficient Balance in your account\n");
                }

            }
            else
            {
                printf("Sorry! Please create account first....\n");
            }
        }

        else if (task==4)
        {    if (account_no > 10000000000 && account_no <100000000000)
            {
                printf("Your account Balance is: %d\n", balance);
            }
            else
            {
                printf("Sorry! Please create account first....\n");
            }

        }
        else if (task==0)
        {
            exit = task;
        }

        else
        {
            printf("\nOhh! Please Enter valid task no\n");
            
        }
    }

    printf("You have left");

    return 0;
}