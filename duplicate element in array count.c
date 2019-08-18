#include<stdio.h>
int main()
{
    int a[100],i,size,j,count=0;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    printf("Enter the elements in an array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("The duplicate elements are:-\n%d",count);
    return 0;

}
