#include<Stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printaf("Enter the value of a&b");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping\n");
    printf("A=%d and B=%d",a,b);
    return 0;
    

}