#include<stdio.h>
int main()
{ // SWITCH(INTEGER)
    /*int day;
    printf("enter number : ");
    scanf("%d", &day);
    switch (day)
    {
    case 1: printf("Monday");
        break;
    case 2: printf("Tuesday");
        break;
    case 3: printf("Wednesday");
        break;
    case 4: printf("Thursday");
        break;
    case 5: printf("friday");
        break;
    case 6: printf("Saterday");
        break;
    case 7: printf("Sunday");
        break;
    default:printf(" invalid data");
        break;
    }*/

 // SWITCH (CHARACTER)
  char day;

  printf("Enter a day (M, t, W, T, F, S, or U): ");
  scanf("%c", &day);

  switch (day) {
    case 'M':
     { printf("Monday\n");}
      break;
    case 't':
      {printf("Tuesday\n");}
      break;
    case 'W':
      printf("Wednesday\n");
      break;
    case 'T':
      printf("Thursday\n");
      break;
    case 'F':
      printf("Friday\n");
      break;
    case 'S':
      printf("Saturday\n");
      break;
    case 'U':
      printf("Sunday\n");
      break;
    default:
      printf("Invalid input\n");
  }

  return 0;

}