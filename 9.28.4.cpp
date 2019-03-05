#include<iostream>
using namespace std;
 int encode(int x,int n)
 {

     cout<<" n is "<<n<<endl;
     cout<<"n<<1 is "<<(n<<1)<<endl;
      n=n<<(1<<(1<<(1<<1)));
    cout<<"n is  ix "<<n<<endl;;
     x=x|n;
     return x;

 }
int main()
{
    int a,b;
    a=1234;
    b=5678;
    int c=encode(a,b);
    cout<<c<<endl;
}
