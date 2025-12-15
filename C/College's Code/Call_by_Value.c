// A copy of variable value is passed to the function. it does not affect the original value in a function.
#include<stdio.h>
void swap (int a , int b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{ int x=10 , y = 20;

    swap(x,y);

    printf("After swap x=%d , y=%d :",x,y);
return 0;
}