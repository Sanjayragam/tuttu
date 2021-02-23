#include <stdio.h>
void main()
{
  int a[100][100],r,c,k=1;
  printf("enter the number of rows");
  scanf("%d",&r);
  printf("enter the number of columns");
  scanf("%d",&c);
  printf("enter the elements\n");
  for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
  scanf("%d",&a[i][j]);

  struct matrix
  {
    int row;
    int col;
    int val;
  }b[100];
  
  b[0].row=r;
  b[0].col=c;
  
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      if(a[i][j]!=0)
      {
        b[k].row=i;
        b[k].col=j;
        b[k].val=a[i][j];
        k++;
      }
    }
  }
  b[0].val=k-1;
  
  for(int i=0;i<k;i++)
  {
    printf("%d %d %d \n",b[i].row,b[i].col,b[i].val);
  }
}