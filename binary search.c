#include<stdio.h>
int main()
{

int a[]={0,1,4,6,11,13,34,45,55,67,78};
int n,beg=0,end=10,mid=0,pos=-1,temp=0;
printf("Enter the number you want to search\n");
scanf("%d",&n);

while(beg<=end)
{
   mid=(beg+end)/2;

   if(a[mid]==n){
    temp=1;
    pos=mid;
    printf("Value present at location= %d",pos);
    break;
   }
   else if(a[mid]>n)
    end=mid-1;
   else
    beg=mid+1;
}
if(beg>end && temp==0)
    printf("Not present in  the list");

return 0;
}
