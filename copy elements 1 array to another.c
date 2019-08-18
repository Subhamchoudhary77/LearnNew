#include<stdio.h>
void main()
{
    int a[20],b[20],n,i;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("The elements of first are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\nThe elements of copied array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
}
