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
    cout<<"Write the position of the element to delete"<<endl;
    cin>>b;
    for(i=b-1;i<n-1;i++)
    {
       arr[i]=arr[i+1];
    }
    cout<<"Now the array we get is "<<endl;
    for(i=0;i<n-1;i++)
    {
        cout<<arr[i]<<"    ";
    }
    cout<<endl;
}

