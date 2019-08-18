#include<stdio.h>
int main()
{
    int a[100],i,j,temp=0,flag=0,n;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                flag=1;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted order are:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    return 0;
}
