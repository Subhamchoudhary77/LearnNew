#include<stdio.h>
int main()
{
    int a[100],freq[100],size,i,j,count;
    printf("Enter the size of an element\n");
    scanf("%d",&size);
    printf("Enter the elements of an array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        freq[i]=-1;
    }
    for(i=0;i<size;i++){
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j]){
            count++;
            freq[j]=0;
        }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }
        printf("Unique elements are as follows:-\n");
        for(i=0;i<size;i++){
        if(freq[i]==1){
            printf("%d\n",a[i]);
        }
        }



}
