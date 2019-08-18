#include<stdio.h>
int main()
{
    int ch;
    float num1,num2,result;
    printf("___________________Welcome to the Simple Calculator_____________\n");

    printf("Enter your choice\n");
    scanf("%d",&ch);

    printf("Enter two numbers\n");
    scanf("%f%f",&num1,&num2);

    switch(ch)
    {
    case 1:{
        printf("-----------Addition------------");
        result=num1+num2;
        printf("\n%f",result);}
        break;
    case 2:{
           printf("-------------Subtraction-------------");
          result=num1-num2;
          printf("\n%f",result);
          break;
    }
    case 3:
        {
        printf("--------------Multiplication-------------");
        result=num1*num2;
        printf("\n%f",result);
        break;
    }
    case 4:
        {
            printf("--------------Division--------------");
            result=(num1/num2);
            printf("\n%f",result);
            break;
        }
    default:
        printf("\nInvalid choice");

}
return 0;
}

