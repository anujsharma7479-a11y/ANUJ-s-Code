#include<stdio.h>
#include<math.h>
int main()
{//Arithmatic instruction
    int a=1,b=2,c=3;
    int power=pow(b,c);
    //valid 
    a=b+c;
    
    /*invalid
    b+c=a;*/
    
    printf("%d\n",c%b); //(% is remainder)
    printf("%d\n",-c%b);
    printf("power is %d\n",power);

    //Type conversion
    printf("sum of 2 & 3 is %d\n",2+3);
    printf("sum of 2 & 3.0 is %f\n",2+3.0);
    printf("sum of 2.0 & 3.0 is %f\n",2.0+3.0);

    //ASSOCIATIVITY
    printf("output %d",5+2/2*3);
    return 0;
}