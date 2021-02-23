#include<stdio.h>
int partition(int a[],int left,int right)
{
  int swap,start=left,end=right,pivot=a[start];
  while(start<end)
    {
     while(a[start]<=pivot)
       ++start;
       while(a[end]>pivot)
       --end;
       if(start<end)
         {
           swap=a[end];
           a[end]=a[start];
           a[start]=swap;
         }
    }
  swap=a[end];
  a[end]=a[left];
  a[left]=swap;
  return end;
}
void quick_sort(int a[],int left,int right)
{
    if(left<right)
      {
        int pivot_index=partition(a,left,right);
        for(int i=left;i<=right;++i)
        printf("%d ",a[i]);
        printf("\n");
        quick_sort(a,left,pivot_index-1);
        quick_sort(a,pivot_index+1,right);
     }
}
int main()
{
   int a[20],n,left,right;
   printf("enter no. of elements\n");
   scanf("%d",&n);
   printf("enter elements\n");
   for(int i=0;i<n;++i)
     scanf("%d",&a[i]);
     left=0;
     right=n-1;
     quick_sort(a,left,right);
for(int i=0;i<n;++i)
printf("%d ",a[i]);
}