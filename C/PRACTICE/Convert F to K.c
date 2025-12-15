#include<stdio.h>
int  main()
{
    float F,K;
    printf("ENTER THE VALUE IN FARENHEIT\n");
    scanf("%f",&F);
    K=(F+459.67)*5/9;
    printf("%f DEGREE F = %f K",F,K);
    return 0;

}
