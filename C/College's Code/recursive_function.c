#include<stdio.h>
void printHW(count);

int main()
{ printHW(10);

return 0;
}
void printHW(count){
    if (count == 0)
    {
        return;
    }
    printf("Hello World\n");
    printHW(count - 1);
    
}