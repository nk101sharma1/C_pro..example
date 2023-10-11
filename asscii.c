#include <stdio.h>
#include<conio.h>
int main() {
   int i = 0;
   printf("Character  ASCII Value\n");    
   for (i = 65; i <=122; i++) {
      printf("%c\t   %d \n", i, i);
   } 
   return 0;
}