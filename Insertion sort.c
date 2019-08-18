#include<stdio.h>
void insertion_sort(int a[],int n);
int main()
{
    int a[100],i,n;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    printf("The sorted array are:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
void insertion_sort(int a[], int n)
{
    int j,i,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while((j>=0) && (temp<a[j]))
              {
                  a[j+1]=a[j];
                  j=j-1;
              }
              a[j+1]=temp;
    }
}
