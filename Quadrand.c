#include<Stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter the value of x & y \n");
    scanf("%d%d",&x,&y);
      
      if( x>0 && y>0 )
      {
        printf("It is first co-ordinate");

      }
    else if(x<0 && y>0)
     {
        printf("It is second co-ordinate");
     }
     else if(x<0 && y<0)
     {
        printf("it is third co-ordinate:");
     }
     else if(x>0 && y<0)
     {
        printf("It is fourth co-ordinate:");
     }
     
     else if(x==0 && y==0)
     {
      printf("It is origin :");
     }

}