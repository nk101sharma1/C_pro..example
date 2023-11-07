// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int x,sum=0,r;
//     printf("Enter the value of x \n");
//     scanf("%d",&x);
//     int temp=x;
//  while(x>0)
//     {
//      r=x%10;
//         sum = sum+(r*r*r);
//         x=x/10;
//     }
//     if(sum==temp)
//     {
//         printf("%d is armstrong number",temp);
//     }
//     else 
//     printf("%d is not a armstrong number",temp);
// return 0;
// }

#include <stdio.h>
#include <math.h>

// int main() {
//     int num, originalNum, remainder, result = 0, n = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     originalNum = num;

//     while (originalNum != 0) {
//         originalNum /= 10;
//         ++n;
//     }

//     originalNum = num;

//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, n);
//         originalNum /= 10;
//     }

//     if (result == num)
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n");

//     return 0;
// }

// int main()

//  {
//              int  r = value;
//             int n,res;
//             while(r!=0)
//             {
//                 value/=10;
//                 n++;
//             }
//             r=value;
//             while(r!=0)
//             {
//                 r= value %10;
//                 res += pow(r,n);
//                 r/=10;
//             }
//             if(res==value)
//             {
//                 printf("It is armstrong number");
//             }
//             else 
//             printf("it is not a armastrong number");
//         }



// wap to find to biggenst fo three number only two if statement ;


int main(){
    int a,b,c;
    printf("enter the value of a,b&c\n");
    scanf("%d%d%d",&a,&b,&c);
   
    // if(a>b&&a>c)
    // {
    //     printf("%d is a bigest ",a);
    
    // }
    // else if(b>a&&b>c)
    // {
    //     printf("%d is a bigest ",b);
    
    // }
    // else 
    // printf("%d is a biggest ",c);

//   int max=a;
//    if(max<b)
//      max=b;
//     if(max<c)
//     max=c;
// printf("%d is bigest",max);
   
   
if(0)
{
    printf("hello");
}
else 
printf("hui");


    

return 0;

}


