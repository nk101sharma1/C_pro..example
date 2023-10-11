#include<stdio.h>
#include<conio.h>
int main()
{
    float r,h,area,vol;
  printf("Enter the radius and Hight of cylinder ");
  scanf("%f%f",&r,&h);
  vol= 3.141*r*r*h;
  area = 2*3.141*r*h+2*3.141*r*r;
  printf("surface are of cylinder  = %.2f",area);
  printf("\n volume of cylinder = %.2f",vol);
return 0;

  
    
}