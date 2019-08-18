#include<stdio.h>

int smallest(int a[],int k,int n);
void selection_sort(int a[], int n);

int main()
{
    int a[100],n,i;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    selection_sort(a,n);

    printf("The sorted array are as follow:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
void selection_sort(int a[],int n)
{
    int k,pos,temp;
    for(k=0;k<n;k++)
    {
        pos=smallest(a,k,n);
        temp=a[k];
        a[k]=a[pos];
        a[pos]=temp;

    }
}
int smallest(int a[],int k,int n)
{
    int small,i,pos=k;
    small=a[k];
    for(i=k+1;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            pos=i;
        }
    }
    return pos;
}
