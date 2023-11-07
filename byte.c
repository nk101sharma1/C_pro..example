#include<Stdio.h>
#include<Conio.h>
int main()
{
    char input[10];
    printf("Enter the any date type");
    gets(input);
    // printf("%s",input);
    int size= sizeof(input);
    printf("%s = %d byte",input,size);
    return 0;
} 