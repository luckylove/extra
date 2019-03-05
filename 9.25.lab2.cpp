// write a program to swap private data of the class
// using friend function
#include<iostream>
using namespace std;
class S
{
    int x;
    int y;
public:
    S(int a, int b)
    {
      x=a;
      y=b;
    }
    S(void)
    {
        x=5;
        y=10;
    }
    friend swapdata(S&);
    void printdata(void)
    {
        cout<<"x is "<<x<<endl;
        cout<<"y is "<<y<<endl;
    }
};
swapdata(S& A)
{
    int temp=A.x;
    A.x=A.y;
    A.y=temp;

}
int main()
{
    S d1(25,30);
    d1.printdata();
    swapdata(d1);
    d1.printdata();
}
