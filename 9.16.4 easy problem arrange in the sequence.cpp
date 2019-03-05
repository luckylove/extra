// arranging the sequence
#include<iostream>
using namespace std;
int fun(long int n,long int a =1)
{
if(a>=n)
    {
  //  cout<<a/2;
    return a/2;
    }
fun(n,a*2);
}
int main()
{
    int i,j,k,b,c;
    int test;
    long int n,a;
    cin>>test;
    while(test--)
    {
        cin>>n;
        a=fun(n);
        cout<<a<<endl;
    }
}
