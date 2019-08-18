#include<stdio.h>

int main()
{

    int a[]={2,3,7,1,8,4,6,9,5,0};
    int i,n,temp=0,pos=-1;

    printf("Enter the number you want to search\n");
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {
        if(a[i]==n)
        {
            temp=1;
            pos=i;
            printf("Search Successful, location = %d",pos);
            break;
        }
    }
    if(temp==0)
        printf("Search Unsuccessful");
    return 0;
}
