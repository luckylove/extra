#include<iostream>
#include"circle.h"
using namespace std;
int main()
{
    circle circle1;
    circle circle2(5.0);
    cout<<"The area of the circle of radius "<<circle1.getRadius()<<"is"<<circle1.getArea()<<endl;
    cout<<"the area of the circle of radius"<<circle2.getRadius()<<"is"<<circle2.getArea()<<endl;
    circle2.setRadius(100);
    cout<<"the area of the circle of radius "<<circle2.getRadius()<<"is"<<circle2.getArea()<<endl;
    return 0;
}
