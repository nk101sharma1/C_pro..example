#include<Stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,c=0;
    int n=9,i;
    printf("%d\t%d",a,b);

for(i=3; i<=n; i++)
{
    c=a+b;
    a=b;
    b=c;
    printf("\t %d",c);
}

return 0;
}