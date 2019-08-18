#include<stdio.h>
int main()
{
    int a[100],i,temp=0,n,j;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);

    printf("Enter the elements\n");
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
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
      }
    }
    }
    printf("The sorted array are as follows:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
