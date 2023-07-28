// 3.
#include<stdio.h>
int main()
{
    int data[10]={10,45,66,24,566,7,86,88,66,23};

    int key,isFound=0;
    printf("enter the key to search:");
    scanf("%d",&key);

    for (int i = 0; i < 10; i++)
    {
        if (key==data[i])
        {
            printf("%d found at index %d \n",key,i);
            isFound=1;
            // break;
        }
        // else
        // {
        //     printf("%d not found in array\n",key);
        // }
    }
    
    if (isFound != 1)
    {
        printf("%d not found in array\n",key);
    }
    
    
    return 0;
}
 
