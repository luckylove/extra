
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,b,j,k,l,i,m;
    cout<<"Write the number of elements in an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Write the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Write an elements to search"<<endl;
    cin>>b;
    cout<<"The element you entered is   "<<b<<"  is found at position   ";
    a=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==b)
        {
            a=1;
            cout<<i+1<<endl;
        }
    }
    if(a==0)
    {
        cout<<endl<<"     Oops the element you entered is not their in the array"<<endl;
    }
}
