
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,b,j,k,l,i,m;
    int first ,last, middle, temp;
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
    cout<<" The shorted array we get is "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    first=0;
    last=n-1;
    middle=(first+last)/2;
    a=0;
    while(first<last)
    {
   // cout<<"first is    "<< first<<"last is    "<<last<<"middle is    "<<middle <<endl;

        if(arr[middle]<b)
        {
            first=middle+1;
            middle=(first+last)/2;
        }
        else if(arr[middle]>b)
        {
            last=middle;
            middle=(first+last)/2;
        }
        else
        {
            a=1;
            cout<<"the element is found at    "<<middle+1<<endl;
            break;
        }
    }
    if(a==0)
    {
        cout<<"  Oops the element is not found in the array you entered  "<<endl;
    }
    //
}

