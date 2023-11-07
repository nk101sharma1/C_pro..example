#include<Stdio.h>
#include<conio.h>
   int main()
{
//   int var[5];  
//   int i;

//   printf("Enter elements \n ");

//   for(i=0;i<5;i++)
//   {
//     scanf("%d",&var[i]);
//   }

//   printf("first varible and last variable  = %d",var[0]+var[4]);



int var;
printf("enter the value");
scanf("%d",&var);
 int res1=var%10;
 while(var >=10 )
 {
    var=var/10;
 }

 printf("first and last = %d",var+res1);
  return 0;
}


