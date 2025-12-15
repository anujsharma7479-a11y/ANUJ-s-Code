#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,r=0,sum=0,temp=0;
	printf("Enter a number=");
	scanf("%d",&a);
	temp=a;
	while(temp>0)
	{
		r=temp%10;
		sum=sum+(r*r*r);
		temp=temp/10;
	}
	if (sum==a)
	{
		printf("This is a armstrong no.");
	}
	else
	{
		printf("This is not a armstrong no.");
	}
	
}