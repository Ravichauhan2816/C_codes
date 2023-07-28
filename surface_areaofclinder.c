#include<stdio.h>
int main()
{
    // surface area of volume = 2*pi*r(r+h)
    float radius,height, pi=3.14,result;
    printf("entre the radius,height :");
    scanf("%f%f",&radius,&height);
    result=2*pi*radius*(radius+height );
    printf("the surface area of cylinder %f /n",result);
    printf("the surface area of cylinder%.3f /n",result);

    return 0;

    }
    
