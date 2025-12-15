
#include<stdio.h>
int main()
{ // Write a program to find if a character entered by user is upper case or not
   char character;
   printf("Enter a character: ");
   scanf("%c",&character);
   if (character>='a' && character<='z')
   {
    printf("This is lower case");
   }else if (character>='A' && character<='Z')
   {
    printf("This is upper case ");
   }else{
    printf("invalid input");
   }
   return 0;
   
   
}

