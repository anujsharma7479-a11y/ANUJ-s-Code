#include<stdio.h>
int main()
{
    //RELATIONAL OPERATORS,1-TRUE,0-FALSE
    printf("1.%d\n",4==4);
    printf("%d\n",4>3);
    printf("%d\n",4<3);
    printf("%d\n",4<=4);
    printf("%d\n",4!=4);
    printf("%d\n\n",4!=3);

    //LOGICAL OPERATORS(AND-&&,OR-||,NOT-!)
    printf("2.%d\n",4==4 && 5==6);
    printf("%d\n",4>3 && 4<3);
    printf("%d\n\n",7>2 && 4>2);
    
    printf("3.%d\n",3<4 || 5>6 );
    printf("%d\n", 4>2 || 5>3);
    printf("%d\n\n",4<5 || 5<6);

    printf("4.%d\n", !(4<3 && 5>4));
    printf("%d\n\n", !(4<3 || 3<4));

    //ASSIGNMENT OPERATOR 
    int a=10;
    a+=10;//a=a+10
    printf("5.a+10= %d \n",a);
    a-=10;//a=a-10
    printf("a-10= %f \n",a);
    a*=10;//a=a*10
    printf("a*10= %d \n",a);
    a/=10;//a=a/10
    printf("a/10= %d \n",a);
    a%=10;//a=a%10
    printf("a%10= %d \n",a);
    




    return 0;
}