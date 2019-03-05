#include<iostream>
using namespace std;
int main()
{
    int test,n,i,j,k,l,m,a,b,c;
    cin>>test;
    while(test--)
    {
        cin>>n>>b;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        a=0;
        for(i=0;i<n-2;i++)
        {
            if(arr[i]<=b)
            {
                for(j=i+1;j<n-1;j++)
                {
                    if(arr[i]+arr[j]<=b)
                    {
                        for(k=j+1;k<n;k++)
                        {
                            if(arr[i]+arr[j]+arr[k]==b)
                            {
                                a=1;
                                break;

                            }
                        }
                        if(a==1)
                            break;
                    }
                }
                if(a==1)
                    break;
            }
        }
        if(a==1)
        cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
