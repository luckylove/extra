#include<iostream>
using namespace std;
int fun3(int n,int a)
{
    if(n>5)
    {
    a=a*2;
    n=n-3;
    fun3(n,a);
    }
    else
    {
        int x=a;
        a=a*2;
        a=a+(n-3)*x;
        return a;

    }

}
int fun2(int n)
{
    // check for 3,4and 5
    int a=0,b=0,c=0;
    a=fun3(n-3,3);
    if (n>8)
    b=fun3(n-4,4);
    if(n>10)
    c=fun3(n-5,5);

    if(a>b&&a>c)
        return a;
    else if(b>a&&b>c)
        return b;
    else
        return c;


}
int fun(int n)
{
    if(n<=6)
        return n;
    else
    {
        return fun2(n);
    }
}
int main()
{
    int i,j,k,b,c;
    int test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        b=fun(n);
        cout<<b<<endl;

    }
}
