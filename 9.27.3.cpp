// some other problem on code block but won't work for full test cases

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test,n,i,j,k,a,b,c;
    int sum;
    cin>>test;
    int  crr[26];
    char arr[50000];
    int brr[26];
    while(test--)
    {
        sum=0;
        for(i=0;i<26;i++)
        {
            crr[i]=0;
        }
        for(i=0;i<26;i++)
        {
            cin>>brr[i];
        }
        cin>>arr;
        //cout<<endl<<arr;
        for(i=0;i<26;i++)
        {
            cout<<brr[i];
        }
       // cout<<endl;
        for(i=0;i<strlen(arr);i++)
        {
            crr[arr[i]-97]=1;
        }
            // ascii value of a is 97

       // for(i=0;i<26;i++)
       // {
       //     cout<<crr[i];
       // }
        for(i=0;i<26;i++)
        {
            if(crr[i]!=1)
            {
              sum=sum+brr[i];
            }
        }
        cout<<sum<<endl;

    }
}
