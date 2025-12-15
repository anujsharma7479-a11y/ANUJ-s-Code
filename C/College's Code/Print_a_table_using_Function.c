#include<stdio.h>
void printTable(int n); //function definition

int main()
{ int n;
    printf(" Enter a number which you want to print table : ");
    scanf("%d",&n);
    printTable(n); // argument/actual parameter

return 0;
}
void printTable(int n){ // parameter/formal parameter
    for (int i = 1; i<=10; i++)
    {
        printf("%d\n",n*i);
    }
    
}
