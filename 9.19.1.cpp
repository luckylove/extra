#include<iostream>
using namespace std;
const long int M=1000000007;
void findsumh(int*arr,int n,int*brr,int a=1,int b=1)
{
    cout<<"a is "<<a<<"b is "<<b;

    if(a<=n-1)
    {
       // cout<<"a is "<<a<<"b is "<<b;
        brr[b]=arr[a];
        cout<<"gg";
        findsumh(arr,n,brr,++a,++b);
  //  }
  //  if(a<=n-1)
   // {
       cout<<"hh";
       cout<<"arr[a-1] is      "<<arr[a-1];
       cout<<"brr[0] ia        "<<brr[0];
       cout<<"brr[b-1]         is "<<brr[b-1];
        for(int i=0;i<b-1;i++)
        {
            brr[i+1]=brr[i];
        }
        brr[0]=arr[a-1];


               cout<<"brr[0] ia        "<<brr[0];

        findsumh(arr,n,brr,++a,b);
    }
    else{
    for(int i=0;i<b;i++)
    {
        cout<<brr[i]<<"    ";
    }
    cout<<endl;
    return;}

}
void findsum(int*arr,int n)
{
    int brr[n];
    brr[0]=arr[0];
    cout<<"ss"<<brr[0]<<"ss";
    // form here call a helper function
     findsumh(arr,n,brr);
     return;
}
int main()
{
    int b,c,test,n;
    long int ans;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n+1];
        for(int i=0;i<=n;i++)
        {
            cin>>arr[i];
        }
        findsum(arr,n+1);

    }
}
