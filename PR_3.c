//  Write a C Program to find the third angle of a right triangle if two other angles are given.

#include<stdio.h>

int main(){

    int a , b , c , result , total = 180 , ch;

    printf("Enter your condition\n ");

    printf("Find Angle 3\n");
    printf("Find Angle 2 \n");
    printf("Find Angle 1 \n");

    printf("Enter your condition ");
    scanf("%d", &ch);

    if (ch == 1)
    {
        printf("Enter Angle 1: ");
        scanf("%d", &a);

        printf("Enter Angle 2: ");
        scanf("%d", &b);

        result = total - a - b ;
        printf("Third angle : %d", result);
    }

    
      if (ch == 2)
    {
        printf("Enter Angle 1: ");
        scanf("%d", &a);

        printf("Enter Angle 3: ");
        scanf("%d", &c);

        result = total - a - c ;
        printf("Second angle : %d", result);
    }

    if(ch == 3){

    
        printf("Enter Angle 2: ");
        scanf("%d", &b);

        printf("Enter Angle 3: ");
        scanf("%d", &c);

        result = total - b - c ;
        printf("First angle : %d", result);
    
    }


    return 0;
    
}