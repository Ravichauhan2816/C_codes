#include<stdio.h>
int main()
{
    int num,i,cube=0;
  printf("entre the no.");
  scanf("%d",&num);
  for (i=1; i<= num;i++)
  {
    cube=i*i*i;
    printf("number is: %d and cube of the %d is: %d\n",i,i,cube);

  } 
   return 0;
}