
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,b,j,k,l,i,m;
    int temp;
    cout<<"Write the number of elements in an array"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"Write the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Write an elements to insert"<<endl;
    cin>>b;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if(arr[n-1]>b)
    {
       for(i=n-1;i>=0;i--)
       {
           if(arr[i]>b)
           {
               arr[i+1]=arr[i];
           }
           else
           {
               break;
           }
       }
       if(i==0)
       {
           arr[0]=b;
       }
       else
       {
           arr[i+1]=b;
       }
    }
    else
    {
       arr[n]=b;
    }
   cout<<endl;


    cout<<"The shorted array we get is "<<endl;
    for(i=0;i<n+1;i++)
    {
        cout<<arr[i]<<"  ";

    }
}

