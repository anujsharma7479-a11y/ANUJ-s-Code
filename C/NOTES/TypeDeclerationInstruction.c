#include<stdio.h>
int main()
{// Type Decleration Instruction
    int age=24;
    int old_age=age;
    int new_age=old_age+2;
    printf("new age is %d \n",new_age);

    int rupee=80,dollar;
    printf("Enter amount in dollar:");
    scanf("%d",&dollar);
    printf("Amount in rupee is: %d",rupee*dollar);

    /*Order of decleration is important..... 
    
    wrong decleration order-
    float pi=3.14;
    float area=pi*radii*radii;
    radii=3;
    */
   
   //valid decleration
   int age1,age2,age3;
   age1=age2=age3=24;

   //invalid decleration(for this case define the a1,a2)
   //int a1=a2=a3=24;


    return 0;

}