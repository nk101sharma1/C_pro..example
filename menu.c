
// perform the following user choice 

#include<Stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int value,ch;
    l:
    printf("\n Enter the value \n");
    scanf("%d",&value);

    printf("\nPress 1 to find a factorial !\n");
    printf("Press 2 to check even or odd !\n");
    printf("Press 3 to  check prime number !\n");
    printf("Press 4 to  Agmstrom number !\n");
    printf("Exit 5\n");
    printf("press 6 to check sigle digit or  \n");
    printf("\n press 7 to to print fabonaci_series");
    
    printf("------------------------------------- \n");
    printf("Enter you choice : ");
    scanf("%d",&ch);
    
     
    switch(ch)
    {
        case 1:
        {
            long long int res=1;
            for(int i=1; i<=value; i++)
            {
              res*=i;   
            }
            printf("%d",res);
        }
        break;

        case 2:
            if(value%2 == 0)
            {
                printf("%d it is a even number ",value);
                
            }
            else
            printf("%d it is a odd number ",value);
        break;

        case 3:
            {
                 int count=0;
                 int n=value/2;
                for(int i=2; i<=n; i++)
                {
                    if(n%i==0);
                    {
                        count++;
                    }
                }
                if(count==0)
                {
                    printf("it is Prime number:");

                }
                else
                printf("it is not a prime number:");
                
            }
    break;

    case 4:
         {
             int r=value;
            int n,res;
            while(value!=0)
            {
                value/=10;
                n++;
            }
            while(r!=0)
            {
                r%=10;
                res += pow(r,n);
                r/=10;
            }
            if(res==r)
            {
                printf("It is armstrong number");
            }
            else 
            printf("it is not a armastrong number");
        }
    break;

    case 5:
    exit(1);
    break;
    case 6:
          {
            if(value%10==value)
            {
                printf("%d is a single digit",value);
            }
            else
            printf("%d is not a single digit",value);
          }
    case 7:
        {
            int a=0,b=1,c=0;
            int n=value,i;
            printf("%d\t%d",a,b);

            for(i=3; i<=n; i++)
            {
                c=a+b;
                a=b;
                b=c;
                printf("\t %d",c);
            }

        }
    default:
        printf("invalid inpu........\n plz try again");
        break;
    }
    
   goto l;


return 0;

}