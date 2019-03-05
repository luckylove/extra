// insersion short in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,b,j,k,l,i,m;
    cout<<"Write the number of elements in an array"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"Write the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Write an elements to insert and position"<<endl;
    cin>>b;
    cin>>m;
    for(i=n-1;i>=m-1;i--)
    {
       arr[i+1]=arr[i];
    }
    arr[m-1]=b;
    cout<<"Now the array we get is "<<endl;
    for(i=0;i<n+1;i++)
    {
        cout<<arr[i]<<"    ";
    }
    cout<<endl;
    //
}
