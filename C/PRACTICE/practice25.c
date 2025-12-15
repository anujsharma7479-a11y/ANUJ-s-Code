#include <stdio.h>
void namaskar();//function declaration
void bonjour();

int main()
{   char ch;
    printf("Enter 'f' for french 'i' for indian : ");
    scanf("%c", &ch);

    if (ch =='f')
    {
        bonjour();//fumction call
    }
    else namaskar();
     return 0;
     
}//function definition
void namaskar(){
    printf("Namaskar\n");
}
void bonjour(){
    printf("Bonjour");
}