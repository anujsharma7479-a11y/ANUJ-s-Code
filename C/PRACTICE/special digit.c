#include<stdio.h>
#include<conio.h>
main()
{
	int a=0,temp=0,r=0,sum=0;
	printf("Enter a number ");
	scanf("%d",& a);
	temp=a*a;
    while (temp>0)
    {
    	r=temp%100;
    	sum=sum+r;
    	temp=temp/100;
    }
    if (sum==a)
    {
    	printf("This is a special digit");
	}
	else
	{
		printf("This is not a special digit ");
	}

}