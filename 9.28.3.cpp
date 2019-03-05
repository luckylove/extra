// code blocks one more porblem to solve
#include<iostream>
using namespace std;
int main()
{
    int test,n,a,b,i,j,k,l;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        a=1;
        if(arr[0]!=1||arr[n-1]!=1)
        {
        cout<<"no"<<endl;
        }
        else{
        for(i=0,j=(n-1);(i<=n/2-1);i++,j--)
        {
            if(arr[i]!=arr[j]||arr[i]>7||arr[j]>7)
                {
                a=0;
                //cout<<"arr[i]    "<<arr[i]<<"arr[j] is"<<arr[j]<<endl;
                break;

            }
            if(arr[i+1]!=arr[i]&&arr[j-1]!=arr[j])
            {
                if(arr[i+1]!=arr[i]+1&&arr[j-1]!=arr[j]+1)
                    {
                   // cout<<"        ff  arr[i]    "<<arr[i]<<"arr[j] is"<<arr[j]<<endl;
                a=0;
                break;

            }
            }


        }
        if(a==0)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
        }
    }
}
