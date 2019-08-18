#include<stdio.h>
#include<stdlib.h>
int menu()
{
    int ch;
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice\n");
    scanf("%d",&ch);
    return(ch);
}
int main(){
    float num1,num2,result;
    while(1){
    printf("\nEnter two numbers\n");
    scanf("%f%f",&num1,&num2);
    switch(menu())
    {
    case 1:{
        result=num1+num2;
        printf("\n%f",result);}
        break;
    case 2:{
          result=num1-num2;
          printf("\n%f",result);
          break;
    }
    case 3:
        {
        result=num1*num2;
        printf("\n%f",result);
        break;
    }
    case 4:
        {
            result=(num1/num2);
            printf("\n%f",result);
            break;
        }
    case 5:
        exit(0);
    default:
        printf("Invalid choice\n");
}
}
return 0;
}
