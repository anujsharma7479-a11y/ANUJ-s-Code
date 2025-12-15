// Here we pass the address of a variable to a function , so the function can modify the original variable.
#include<stdio.h>
void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b=temp;
}

int main()
{ int x = 10 , y = 20;

    swap(%x,&y); //it changes original variable

    printf("After swap is : x=%d , y = %d",x,y);

return 0;
}