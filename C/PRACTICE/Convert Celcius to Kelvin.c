#include<stdio.h>
int main()
{
    float C=0,K=0;
    printf("Enter the value in Celcius\n");
    scanf("%f",&C);
    K=273.15+C;
    printf("%f Celcius = %f Kelvin",C,K);
    return 0;
}
