#include<stdio.h>
int main()
{int a[20],n,small,swap;
scanf("%d",&n);
for(int i=0;i<n;++i)
scanf("%d",&a[i]);
for(int i=0;i<n-1;++i)
{small=i;
for(int j=i+1;j<n;++j)
{
if(a[j]<a[small])
small=j;
}
if(small!=i)
{
swap=a[small];
a[small]=a[i];
a[i]=swap;
}
for(int k=0;k<n;++k)
printf("%d ",a[k]);
printf("\n");
}
}