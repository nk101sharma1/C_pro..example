// Wap to print table of any number 

// find the factorial of a number using while loop
// find the revece of any number using while loop 
// wap to find the sum of digit any numners
#include<Stdio.h>
int main()
{
    int n;
    int res=1;
    printf("enter the value of n");
    scanf("%d",&n);

    while(n>0)
    {
        res =res*n;
        n--;
    }
    printf("%d",res);
      
    return 0;
}
