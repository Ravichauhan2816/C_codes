#include<stdio.h>
int main()
{ 
    int row, col,count;
    printf("enter row and columns :\n");
    scanf("%d%d",&row,&col );

    int matrix[row][col];

    printf(" enter the value in matrix\n");
    for( int i=0; i<row; i++)
    {
        for( int j=0; j<col;j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        
    }
    // logic let row=4,col=3
    for ( int i=0; i<row; i++)
    {
        for( int j=0; j<col; j++)
        {
            if ( matrix[i][j]%2==0)
            {
                count++;
            }

        }
    }
    printf(" there are %d even no. \n", count);

     return 0;
}

