wap find the gcd 
#include<Stdio.h>
int main()
{
    int i ,j=7,row;
    printf("entet the value of row ");
    scanf("%d",&row);
     while(row>0)
     {
        while(j>0)
        {
            printf("0b%d");
        }
        row--;

     }



    // for(i=0; i<=row; i++)
    // {
    //    for(j=0; j<i; j++)
    //    {
    //          printf("*");
    //    }
       
    //   printf("\n");
    // }
    
    // for(i=0; i<=row; i++)
    // {
    //     for(j=0; j<=(row-i)-1; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }



//       //  for(i=0; i<r; i++)
//   //  {
//   //   for(j=1;  j<=(2*(r-i)-1); j++)
//   //     printf(" ");
//   //   {
//   //       for(k=1; k<=((2*i)+1); k++)
//   //       printf("* ");
//   //   }76b 
//   //   printf("\n");
//     for(i=0; i<row; i++)
//     {  
//         for(j=1; j<=(row-i)-1; j++)
//            printf(" ");
//         for(int k=0; k<(2-1)*i+1; k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }    
    return 0;
}
