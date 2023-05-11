#include<stdio.h>

float getBase(float base)
{
    printf("Enter Base: ");
    scanf("%f", &base);
    return base;
}

float getHeight(float height)
{
    printf("Enter Height: ");
    scanf("%f", &height);
    return height;
}

float getAreaTriangle(float base, float height)
{
    float area= 0.5*base*height;
    return area;
}



int main()
{
    float base, height, area, a, b, h;

    b=getBase(base);

    h=getHeight(height);

    a=getAreaTriangle(b, h);

    printf("The base is: %.1f cm and height is: %.1f cm\n", b, h);

    printf("The area of the triangle is: %.1f", a);
}