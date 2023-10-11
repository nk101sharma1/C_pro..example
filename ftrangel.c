//wap in three size of a tragle indentify type of the trange
//read cordinates of x and y indentify the code range in which the point lines
#include<Stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of A , B and C \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && a==c)
    {
        printf("Equlateral Triangle");
    }
    else if(a==b && b!=c  && a!=c)
    {
        printf("it is a isosceles triangel");

    }
    else 
    printf("It is a scalene traingel ");
return 0;
}