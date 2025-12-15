 #include<stdio.h>
int main()
{
    float r,V,A;
    const float PI=3.14,b=1.33;
    printf("Enter the Radius of the particle:-");
    scanf("%f",&r);
    V=b*PI*r*r*r;
    printf("1.Volume of the Sphere is= %f",V);
    A=4*PI*r*r;
    printf("\n 2.the area of the sphere is= %f ",A);
    return 0;



}
