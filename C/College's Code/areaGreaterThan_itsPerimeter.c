#include<stdio.h>

int main() {
    int x,y,Area,Perimeter;
    printf("Enter breadth and length of the rectangle respectively = ");
    scanf("%d %d",&x,&y);
    if (y<=0)
    {
        printf("invaid input");
    }else if (x<=0)
    {
        printf("invaid input");
    }else{
        Area=x*y;
        Perimeter=2*(x+y);
    }
    printf("Area = %d\n",Area);
    printf("Perimeter = %d\n",Perimeter);
    if (Area>Perimeter)
    {
        printf("YES! Area is greater than its Perimeter");
    }else{
        printf("NO! Area is not greater than its Perimeter");
    }
    return 0;
}