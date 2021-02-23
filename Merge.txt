#include<stdio.h>
void merge(int a[],int left,int middle,int right)
{
   int i=left,j=middle+1,k=0,n=right-left+1,b[n];
   while(i<=middle && j<=right)
     {
       if(a[i]<=a[j])
         {
            b[k]=a[i];
            ++i;
         }
      else
         {
           b[k]=a[j];
           ++j;
         }
       ++k;
    }
  if(i>middle)
    { 
       while(j<=right)
         {
            b[k]=a[j];
            ++j;
            ++k;
         }
    }
 else
   { 
     while(i<=middle)
        { 
          b[k]=a[i];
          ++k;
          ++i;
         }
    }
 for(i=0;i<n;++i)
 a[left+i]=b[i];
}

int merge_sort(int a[],int left,int right)
   
 {
   if(left<right)
    {
       int middle=(left+right)/2;
       merge_sort(a,left,middle);
       merge_sort(a,middle+1,right);
       merge(a,left,middle,right);
       for(int i=left;i<=right;++i)
       printf("%d ",a[i]);
       printf("\n");
    }
 }

int main()
 { 
    int a[20],n,left,right;
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(int i=0;i<n;++i)
    scanf("%d",&a[i]);
    left=0;
    right=n-1;
    merge_sort(a,left,right);
  }