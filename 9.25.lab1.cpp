// create a program to implement complex no
// and use all the three constructor for the program
#include<iostream>
using namespace std;
class complexx
{
    int x;
    int y;
public:
    complexx(void)
    {
        x=10;
        y=10;
    }
    complexx(int a)
    {
        x=a;
        y=a;
    }
    complexx(int a,int b)
    {
        x=a;
        y=b;
    }
    void printcomplexx(void)
    {
        cout<<"The complex no we get is "<<x <<" + i"<<y<<endl;
    }
};
int main()
{
    complexx c1;
    complexx c2(50);
    complexx c3(30,20);
    c1.printcomplexx();
    c2.printcomplexx();
    c3.printcomplexx();
}
