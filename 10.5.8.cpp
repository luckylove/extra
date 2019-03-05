#include<iostream>
using namespace std;
int main()
{
    int a,n,c,b,i,j,k,l,test,m;
    int r;
    cin>>test;
    int x,y;
    int temp;
    while(test--)
    {
        cin>>n;
        cin>>x;
        cin>>r;
        int arr[n];
        int brr[2*r];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<2*r;i++)
        {
            cin>>brr[i];
        }

        for(i=0;i<2*r;)
        {
           temp=arr[brr[i+1]];
           for(j=brr[i+1];j>brr[i];j--)
           {
               arr[j]=arr[j-1];
           }
           arr[brr[i]]=temp;

           // sample printing
           /*for(k=0;k<n;k++)
           {
               cout<<arr[k]<<"   ";
           }
           */
           i=i+2;
        }
        cout<<arr[x]<<endl;
    }
}
