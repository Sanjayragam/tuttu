#include<stdio.h>
int main()
{
int n,a[20],key;
scanf("%d",&n);
for(int i=0;i<n;++i)
scanf("%d",&a[i]);
for(int i=1;i<n;++i)
{
key=a[i];
int j;
for(j=i-1;key<a[j]&&j>=0;--j)
a[j+1]=a[j];
a[j+1]=key;
for(int k=0;k<n;++k)
printf("%d ",a[k]);
printf("\n");
}}