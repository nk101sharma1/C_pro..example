#include<Stdio.h>
#include<math.h>
int main()
{

    // anually
    // float p,r,t;
    // float si,ci;
    // printf("Enter the value of princple, rate , time \n");
    // scanf("%f%f%f",&p,&r,&t);
    // printf("p= %f\n r=%f \n t=%f \n",p,r,t);
    // si=(p*r*t)/100;
    // printf("simeple interst = %2f",si);
    // ci=pow((1+r/100),t);
    // printf("\n compund interst =%2f",ci);


   // semi anully
    float p,r,t;
    float si,ci;
    printf("Enter the value of princple, rate , time \n");
    scanf("%f%f%f",&p,&r,&time);
    printf("p= %f\n r=%f \n t=%f \n",p,r,time);
    si=(p*(r/2)*t*t)/100;
    printf("simeple interst = %.2f",si);
    ci=pow(1+r/2*100,2*t);
   printf("\n compund interst =%.2f",ci);

    




}