#include <stdio.h>
int main()
{
    int num1, num2;
    printf("entre the valu of no.1,no.2:");
    scanf("%d%d", &num1, &num2);
    if (num1 == num2)
    {
        printf("both number are equal");
    }

    else
    {
        printf("both number are not equal");
    }
    return 0;
}