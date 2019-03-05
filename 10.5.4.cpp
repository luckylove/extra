#include<iostream>
using namespace std;
int main()
{
    int i,j,k,a,b,c,test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        if(n&1)
        {
            cout<<"NO"<<endl;
        }
        else if(n==2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
