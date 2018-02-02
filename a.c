#include "stdio.h"
#include "conio.h"
#define n 5
main()
{
  int i,j,result;
  printf("\n");
  for (i=1;i<n;i++)
  {
    for(j=1;j<n;j++)
    if (j<=i)
    {
      result=i*j;
      printf("%d*%d=%-3d",j,i,result); /*-3d表示左对齐，占3位*/
    }
    printf("\n"); /*每一行后换行*/
  }
  getch();
}
