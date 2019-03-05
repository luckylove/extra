#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test,a,b,c,i,j,k,l,n,m;
    int numa,numb;
    cin>>test;
    while(test--)
    {
        cin>>n>>a>>b;
        int arr[n];
        numa=0;
        numb=0;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==a)
            {
                numa++;
            }

            if(arr[i]==b)
            {
                numb++;
            }
        }

        cout<<std::fixed<<((double)(numa*numb))/(n*n)<<endl;;

    }
}
