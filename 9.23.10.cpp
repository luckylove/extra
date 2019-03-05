#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int test,n1,n2,n,i,j,k,l,m,a,b,c;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        cin>>n;
        int arr[n];
        double ans[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            ans[i]=(arr[i])*(arr[i])*a  +  (arr[i])*b  + c;
        }
        sort(ans,ans+n);
        for(i=0;i<n;i++)
        {
            cout<<ans[i]/1<<" ";
        }
        cout<<endl;
}
}
