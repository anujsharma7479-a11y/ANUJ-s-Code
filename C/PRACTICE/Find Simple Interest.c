#include<stdio.h>
int main()
{
    float SI,R,T,P;
    printf("1.Enter the Time Period:-");
    scanf("%f",&T);
    printf("\n2.Enter the Rate of Interest:-");
    scanf("%f",&R);
    printf("\n3.Enter the principle:-");
    scanf("%f",&P);
    SI=(P*R*T)/100;
    printf("\nSimple Interest is = %f",SI);
    return 0;

}
