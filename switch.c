#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
        int number;
l:
    printf("Enter the the value of x&y\n");
    scanf("%d%d",&x,&y);

    printf("press 1 to Add the number\n");
    printf("press 2 to sub.. the number\n"); 
    printf("press 3 to mul..the number\n");
    printf("press  4 to div..the number\n");
    printf("press 5 to exit.. the number\n");
 
     scanf("%d",&number);

     switch(number)
     {
        case 1:
        printf("Add=%d \n",x+y);
        break;
        case 2:
        printf("sub..=%d \n ",x-y);
        break;

        case 3:
        printf("multipe = %d \n ",x*y);
        break;

        case 4:
        printf("division= %d \n ",x/y);
        break;

        case 5:
        return 0;
        break;

        default:
        printf("plz try again");
     }
     goto l;

return 0;

}