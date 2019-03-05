// TO find out the last non zero digit of the factorial of any digit
// by using recursion
#include<iostream>
using namespace std;
int factorial(int a)
{
    if(a==1)
        return 1;
    else{
       int y=factorial(a-1);
       cout<<"y is "<<y<<endl;
       if(y%10!=0)
        {
            cout<<"a*(y%10) 1 is "<<a*(y%10);
          return a*(y%10);
        }
          else
         { y=y/10;
         cout<<"a*(y%10) 2 is "<<a*(y%10);
           return a*(y%10);
         }
    }
}
int main()
{
    int a,b,c,d,i,j,k;
    int test;
    int n;
    int ans;
    cin>>test;
    while(test--)
    {
        cin>>n;
        ans =factorial(n);
        cout<<ans<<endl;


    }
}
