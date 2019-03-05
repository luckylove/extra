#include"circle.h"
circle::circle()
{
    radius =1;
}
circle::circle(double newRadius)
{
    radius=newRadius;
}
double circle::getArea()
{
    return radius*radius*3.14159;
}
double Circle::getRadius()
{
    return radius;
}
void circle::setRadius(double newRadius)
{
    radius=(newRadius>=0) ? newRadius :0 ;
}
