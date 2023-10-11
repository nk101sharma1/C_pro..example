#include<Stdio.h>
#include<conio.h>
#include<math.h>    
int main()
{
    int a; 
    float area, perimeter;
    printf("Enter the value of side");
    scanf("%d",&a);
     area= ((3*sqrt(3))/2 )*a*a;
    perimeter =a*6;
    printf("\n area of hexagon =%.2f",area);
  printf("\n perimetet of hexagon = %.2f",perimeter);

//   float squre = sqrt(3);
//    printf("\n %.2f",squre);
    return 0;
}