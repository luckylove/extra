// selection short using recursion
#include<iostream>
using namespace std;
void dodoshort(int*arr,int n)
{
    if(n>=1)
    {
    int large=arr[0];
    int indexoflarge=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
            indexoflarge=i;
        }
    }
    int temp=large;
    arr[indexoflarge]=arr[n];
    arr[n]=large;
    dodoshort(arr,n-1);
    }
}
void doshort(int* arr,int n)
{
    //now we are shorting this form the last to the first
    // for this we have to provide the index of the last and
    // then short the element form first to last then replace the largest element to the
    // last element and then make last = last -1
    // do this till last =1
    // is last ==0
    // end the recursion
    dodoshort(arr,n-1);//n-1 is the last element
}
int main()
{
    int a,b,n,c,d,e,f;
    cout<<"Enter the no of elements you want to enter"<<endl;
    cin>>n;
    cout<<"enter the elements one by one"<<endl;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // now pass the argument the function name doshort
    doshort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
