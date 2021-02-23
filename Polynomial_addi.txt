#include<stdio.h>
void display(int m,int a[][20])
{
int i=0;
while(i<m-1 && a[1][i]!=0)
{
   printf("%dx^%d+",a[0][i],a[1][i]);
   ++i;
}
if(a[1][i]==0)
 printf("%d",a[0][i]);
 else
 printf("%dx^%d",a[0][i],a[1][i]);
 printf("\n");
}


int main()
{
int n1,n2,i,j,k;
printf("enter number of terms in polynomial 1\n");
scanf("%d",&n1);
printf("enter number of terms in polynomial 2\n");
scanf("%d",&n2);
int p1[2][20],p2[2][20],sum[2][20];
i=j=k=0;
printf("\nPOLYNOMIAL 1\n");
while(i<n1)
{
  printf("enter the coefficient of term:%d  ",i+1);
  scanf("%d",&p1[0][i]);
  printf("enter the degree of term:%d  ",i+1);
  scanf("%d",&p1[1][i]);
  ++i;
}
printf("\nPOLYNOMIAL 2\n");
while(j<n2)
{
  printf("enter the coefficient of term:%d  ",j+1);
  scanf("%d",&p2[0][j]);
  printf("enter the degree of term:%d  ",j+1);
  scanf("%d",&p2[1][j]);
  ++j;
}
display(n1,p1);
display(n2,p2);
i=j=0;

while(i<n1 && j<n2)
{
 if(p1[1][i]==p2[1][j])
 {sum[0][k]=p1[0][i]+p2[0][j];
  sum[1][k]=p1[1][i];
  ++i;
  ++j;
  ++k;
 }
 else if(p1[1][i]>p2[1][j])
 {sum[0][k]=p1[0][i];
 sum[1][k]=p1[1][i];
 ++i;
 ++k;
 }
 else
 {
 sum[0][k]=p2[0][j];
 sum[1][k]=p2[1][j];
 ++j;
 ++k;
 }
}
while(i<n1)
{
 sum[0][k]=p1[0][i];
 sum[1][k]=p1[1][i];
 ++i;
 ++k;
}
while(j<n2)
{
 sum[0][k]=p2[0][j];
 sum[1][k]=p2[1][j];
 ++j;
 ++k;
}
display(k,sum);


}