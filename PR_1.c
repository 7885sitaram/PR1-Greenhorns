// Write a Program to convert temperature from degrees Celsius to Fahrenheit

#include<stdio.h>

int main(){

   float C , result , F;

   printf("The temperature in Celcius: ");
   scanf("%f", &C);

    F = ( C * 9/5 ) + 32 ;

    printf("The temperature in Fahrenheit %.2f" , F);

    return 0;

}