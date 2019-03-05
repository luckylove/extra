#include<iostream>
using namespace std;
int main()
{
    int i,k,test,m,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        k=0;
        m=arr[0];
        for(i=0;i<n;i++)
        {
            if(arr[i]<m)
            {
                m=arr[i];
                k=i;
            }
        }
        cout<<k+1<<endl;

    }

}
