#include<Stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,s1,area;
    printf("Enter the value of there side \n ");
    scanf("%d%d%d",&a,&b,&c);
     s = (a+b+c)/3;
     s1=s*(s-a)*(s-b)*(s-c);
     area = sqrt(s1);
    printf("Area of trangle = %.2f",area);
    return 0;
}
