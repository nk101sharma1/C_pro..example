#include<Stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Entet the value of n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        sum +=n;

    }
    printf("Sum of %d natural number %d",n,sum);
    return 0;
}