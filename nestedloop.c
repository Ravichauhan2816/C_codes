//  1.
// ********
// ********
// ********
// ********
// ********

// #include<stdio.h>
// #include<windows.h>
// int main()
// {
//     for (  int row =0; row <=5; row++)
//     {
//         for ( int column =0; column <8; column++ )
//         {
//         Sleep(1000);
//         printf("*");
//         }
       
//         printf("\n");
//         // Sleep(1000);
//     }
// return 0;
// }

// 2.
// *
// **
// ***
// ****
// *****

// #include<stdio.h>
// int main()
// {
//     for( int row =0; row <5; row++)
//     {
//         for ( int column=0; column <= row; column++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 3.
// *****
// ****
// ***
// **
// * 

// #include<stdio.h>
// int main()
// {
//     for (  int row =0; row <5; row++)
//     {
//         for( int column =4; column >=row; column--)
//         {
//             printf("*");
//         }
//           printf("\n"); 
//     }
   
//     return 0;
// }

// 4.
// 1
// 22
// 333
// 4444
// 55555
 
//   #include<stdio.h>
//   int main()
//   {
//     for (int )
//     return 0;
//   }



 // 5.
// 1
// 12
// 123
// 1234
// 12345

// #include<stdio.h>
// int main()
// {
//     for(int row = 1; row <=5; row++)
//     {
//         for ( int column =1; column <= row; column ++)
//         {
//             printf("%d", column);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// 6.
// 54321
// 4321
// 321
// 21
// 1

// #include<stdio.h>
// int main()
// {
//  for ( int i=1; i<=5; i++)
//  {
//     for( int j=6-i; j> 0; j--)
//     {
//     printf("%d",j);
//     }
//      printf("\n");
//  }   

//    return 0;
// }

// 7.
// 12345
// 1234
// 123
// 12
// 1

//  #include<stdio.h>
//  int main()
//  {
//     for ( int row =0; row <5; row++)
//     {
//         for( int column =1; column < 6-row; column++)
//         {
//             printf("%d", column);
//         }
//         printf("\n");
//     }
//      return 0;
//  }

// 8.
// A
// AB
// ABC
// ABCD
// ABCDE

// #include<stdio.h>
// int main()
// {
//     for(int row =0;row < 5; row++)
//     {
//         for( int column =65; column <= 65+row; column++)
//         {printf(" %c",column);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
           // SECOND SOLUTION.

// #include<stdio.h>
// int main()
// {
    
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%c",65+j);
//         }
//         printf("\n");
//     }
    

//     return 0;
// }
                    // AND.   
// A
// BB
// CCC
// DDDD
// EEEEE

// #include<stdio.h>
// int main()
// {
    
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%c",65+i);
//         }
//         printf("\n");        
//     }

//     return 0;
// }

// 10.
// *****
//  ****
//   ***
//    **
//     *

// #include<stdio.h>
// int main()
// {
//    for( int row =1; row <=5; row++ )
//    {
//     for ( int space =1; space < row; space++)
//     {
//         printf(" ", space);
//     }
//     for ( int star =5; star >=row; star--)
//     {
//         printf("*");
//     }
//     printf("\n");

//    }
   
//     return 0;
// }

// 11.
//     *
//    **
//   ***
//  ****
// *****

// #include<stdio.h>
// int main()
// {
//     for( int row =1; row <=5; row++)
//     {
//         for ( int space =5; space> row; space--)
//         {
//             printf(" ");
//         }
//         for ( int column =1; column <=row; column++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
    
//     return 0;
// }

// 12.

//      *
//     * *
//    * * *
//   * * * *
//  * * * * * 


// #include<stdio.h>
// int main()
// {
//     for( int row =0; row<=5; row++ )
//     {
//         for ( int space = 5; space >row; space--)
//         {
//             printf(" ");
//         }
//         for ( int star =1; star<=row; star++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
   
   
//     return 0;
// }

// 13.

//  * * * * *
//   * * * *
//    * * *
//     * *
//      *


// #include<stdio.h>
// int main()
// {
//    for( int row =0; row <5; row++)
//    {
//     for ( int space =1; space<= row; space++)
//     {
//         printf(" ");
//     }
//     for ( int star = 5; star> row; star--)
//     {
//         printf("* ");
//     }
//     printf("\n");
//    }
   
//     return 0;
// }

