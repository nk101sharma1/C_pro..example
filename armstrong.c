#include<stdio.h>
#include<conio.h>
int main(){
    int x,sum=0,r;
    printf("Enter the value of x \n");
    scanf("%d",&x);
    int temp=x;
 while(x>0)
    {
     r=x%10;
        sum = sum+(r*r*r);
        x=x/10;
    }
    if(sum==temp)
    {
        printf("%d is armstrong number",temp);
    }
    else 
    printf("%d is not a armstrong number",temp);
return 0;
}