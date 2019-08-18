#include<stdio.h>
void printArray(int a[],int start,int len);
void main()
{
    int a[20],i,n;
    printf("enter the size of element\n");
    scanf("%d",&n);
    printf("Enter the elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array are:\n");
    printArray(a,0,n);
    return 0;
}
void printArray(int a[],int start,int len)
{
    if(start>=len)
        return;
    printf("%d\n",a[start]);
    printArray(a,start+1,len);
}
