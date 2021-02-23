#include<stdio.h>
  
int main()
{
    int a[20],i,x,n;
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("%d",i);
    else
        printf("-1");
  
    return 0;
}