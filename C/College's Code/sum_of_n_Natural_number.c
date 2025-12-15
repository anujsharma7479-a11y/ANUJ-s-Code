#include<stdio.h>
// sum of n Natural number
int sum(int n);

int main()
{
printf("sum is : %d ",sum(6));
return 0;
}
int sum(int n){
if (n==1)
{
    return 1;
}

int sumNM1 = sum(n-1);
int sumN = sum(n-1) + n;
return sumN;
}