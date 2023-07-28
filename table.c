#include<stdio.h>
int main()
{
    int num,i ,m;
    printf("entre the value:");
    scanf("%d",&num);
    for (i=1; i<=10; i++)
    {
        m=num*i;
        printf("%d x %d = %d\n",num,i,m);
    }
     return 0;
}