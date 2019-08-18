#include<stdio.h>
long amount=1000,deposit,withdraw;
int choice, pin, k;
char transaction ='y';
void main()
{
    while (pin != 1111)
    {
        printf("Enter Your Secret Pin Number\n");
        scanf("%d",&pin);
        if(pin !=1111)
            printf("Please Enter Valid Pin\n");
    }
    do
    {
        printf("********Welcome to ATM Services********\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Amount\n");
        printf("3. Deposit Cash\n");
        printf("4. Exit");
        printf("***********************************\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Your Balance is = %lu",amount);
            break;

        case 2:
            printf("Enter Amount To Withdraw\n");
            scanf("%lu",&withdraw);
            if(withdraw%100!=0)
            {
                printf("Enter The Amount In The Multiples Of 100");
            }
            else if (withdraw> amount)
            {
                printf("Insufficient Balance\n");
            }
            else
            {
                amount=amount-withdraw;
                printf("Please Collect Your Cash\n");
                printf("Your Current Balance is %lu",amount);
            }
            break;

        case 3:

            printf("Enter the amount to be deposit\n");
            scanf("%lu",&deposit);
            amount=amount+deposit;
            printf("Your Current Balance= %lu",amount);
            break;

        case 4:
            printf("Thank You for using our ATM services\n");
            break;

        default:
            printf("Invalid choice\n");

        }
        printf("\nDo You Wish to have Another Transaction?(y/n)\n");
        fflush(stdin);
        scanf("%c",&transaction);
        if(transaction=='n'|| transaction=='N')
            k=1;
    }
    while(!k);
        printf("Thanks for Using ATM services\n");
}
