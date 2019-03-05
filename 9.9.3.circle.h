#ifndef CIRCLE_HPP
#define CIRCLE_HPP
class circle
{
public:
    circle();
    circle(double);
    double getArea();
    double getRadius();
    void setRadius(double);
private:
    double radius;

};
#endif // CIRCLE_H
