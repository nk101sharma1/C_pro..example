#include<Stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b&c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is a biggest number ",a);
    }
    else if(b>a && b>c){
        printf("%d is biggest number ",b);

    }
    else 
    printf("%d is a biggest number ",c);
return 0;

}