#include <stdio.h>
// function declaration
void printHello();
void goodbye();

int main()//Function call
{   printHello();
    goodbye();
    
    return 0;
}
// function definition
void printHello(){
    printf("Hello!\n");
}
void goodbye(){
    printf("Good Bye:)");
}