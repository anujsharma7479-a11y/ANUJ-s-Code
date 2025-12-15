#include<stdio.h>
int main()
{
int age = 22;
int *ptr = &age;

//printf("%p\n",&age); //hexadecimal address of age
printf("%u\n",&age); //nommal address of age

printf("%u\n",ptr); //value in ptr block

printf("%u",&ptr); // address of ptr

return 0;
}