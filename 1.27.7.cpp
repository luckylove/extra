#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,n,c,d,b,t,m,i,j,k;
    int x,y;
    int pos;
    cin>>test;
    t=1;
    while(test--)
    {
        cin>>x;
        cin>>y;
        cin>>n;
        int arr[n];
        int brr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
        }
        sort(arr,arr+n);
        sort(brr,brr+n);
        int crr[n]={0};
        if(arr[n-1]*brr[0]<x*y||arr[0]*brr[n-1]<x*y)
        {
            cout<<"Case "<<t<<": 0"<<endl;
        }
        else
        {
            // then we need to check for every one and then find out the cases
            // now let us try to calculate the no of possibilities of the elements
            // we need to check for every arr value
            for(i=0;i<n;i++)
            {
                for(j=n-1;j>=0;j--)
                {
                    if(arr[i]*brr[j]>x*y)
                    {
                        crr[i]++;

                    }
                    else
                    {
                        break;
                    }
                }
            }
            // let us print all the values of the crr of our elements
            a=0;
            pos=1;
            for(i=0;i<n;i++)
            {
                pos=(pos*(arr[i]-i))%1000000007;
                if(crr[i]<i+1)
                {
                    a=1;
                    break;
                }
            }
            if(a==0)
            {
                cout<<"Case "<<t<<": "<<pos<<endl;
            }
            else
            {
                cout<<"Case "<<t<<": 0"<<endl;
            }
            t++;

        }

    }
}

