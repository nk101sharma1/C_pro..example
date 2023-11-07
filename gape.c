#include<Stdio.h>
#include<conio.h>
int main()
{
    int b=5265295,n=0;
    int a=b;
    while(b!=0)
    {
        b/=10;
        n++;
    }
    printf("%d",n);
    return 0;

}