#include<Stdio.h>
#include<conio.h>
int main()
{
  float r,res,res1;
  printf("Enter the radius of cricle  ");
  scanf("%f",&r);
  res=3.141*r*r;
  res1=2*3.141*r;
  printf("\n Area of circle = %.2f",res);
  printf("\n circumference of circle = %.2f",res1);
  return 0;

}