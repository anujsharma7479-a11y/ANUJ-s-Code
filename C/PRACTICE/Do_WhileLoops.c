#include<stdio.h>
int main()
{  // Do-While loop
     int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int i=1;
    do
    {
        printf("%d \n",i);
        i++;
    } while (i<=n);

    // break statement
for (int i = 0; i <= 5; i++)
{
    if (i == 3)
    {
        break;
    }
    printf("%d\n", i);
}
printf("end");

//continue statement 
    for (int i = 0; i <=5; i++)
    {
        if (i==3)
        {
            continue; //to skip 3
        }printf("%d\n",i);
        
    }
    
    


    

    


    
    
}