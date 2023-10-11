#include<stdio.h>
#include<conio.h>
int main(){
   int x,i,res=0;
   printf("Enter the value of x \n");
   scanf("%d",&x);
   for(i=2; i<=(x/2); i++){
    if(x%i==0)
    {
        res++;
    }
   }
   if(res==0)
   {
    printf("%d is a prime number",x);
    }
   else 
   printf("%d is not a prime numer",x);
}