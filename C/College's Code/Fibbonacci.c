#include<stdio.h>
int fib(int n);

int main()
{ int n;
    // printf("Enter position of Fib : ");
    // scanf("%d",&n);
    // printf( "Number on that position is : %d" , fib(n));
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printf( "fibbonacci series :");
    for (int i = 0; i<n; i++)
    {
        printf(" %d ",fib(i));
    }
    
return 0;
}
int fib(int n){
if (n == 0)
{
    return 0;
}if (n == 1)
{
    return 1;
}
int fibNM2 = fib(n-2);
int fibNM1 = fib(n-1);
int fibN = fibNM2 + fibNM1;
// printf("fibbonacci of %d is : %d\n ",n,fibN);
return fibN;
}