#include<iostream>
using namespace std;
int main()
{
    int a,b,k,i,j,n;
    cin>>n;
    int arr[2*n+1];
    for(i=0;i<(2*n +1);i++)
    {
        cin>>arr[i];
    }
    a=0;
    for(i=0;i<(2*n +1);i++)
    {
        a=a^arr[i];
    }
    cout<<a<<endl;
}
