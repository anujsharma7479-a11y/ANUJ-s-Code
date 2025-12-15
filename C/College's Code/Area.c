#include<stdio.h>
// Area of a Square , Rectanle , Circle using function
float squareArea(float side); 
float rectangleArea(float a , float b);//Function declertion
float circleArea(float rad);

int main()
{  float  side = 7, a = 6.5 , b = 8.8 , rad = 1.2;
    printf("Area of a square is : %f\n ", squareArea(side));
    printf("Area of a rectangle is : %f\n ", rectangleArea(a,b));
    printf("Area of a circle is : %f\n ", circleArea(rad));


return 0;
}
float squareArea(float side){
    return side * side ;
}
float rectangleArea(float a , float b){
    return a * b;
}
float circleArea(float rad){
    return 3.14 * rad * rad;
}
