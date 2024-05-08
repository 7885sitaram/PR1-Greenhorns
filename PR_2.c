// Write a C Program to find gross salary by adding % of HRA, DA, and TA of user choice.

#include<stdio.h>

int main(){

   float salary , HRA , DA , TA , result ;

   printf("Enter your Base Salary: ");
   scanf("%f", &salary); 

   printf("HRA: "); 
   scanf("%f", &HRA); 

   printf("DA: ");
   scanf("%f", &DA);  

   printf("TA: ");
   scanf("%f", &TA);

   HRA = salary*(HRA/100);
   DA = salary*(DA/100);
   TA = salary*(TA/100);

   result = salary + HRA + DA + TA;

   printf("The gross salary is %.2f", result);

   return 0;


}