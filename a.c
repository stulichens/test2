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
      printf("%d*%d=%-3d",j,i,result); /*-3d��ʾ����룬ռ3λ*/
    }
    printf("\n"); /*ÿһ�к���*/
  }
  getch();
}
