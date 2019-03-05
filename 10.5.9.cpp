#include<iostream>
using namespace std;
int main()
{
    int i,j,k,b,c,n,test;
    int x;
    long long int a,temp;
    int r;
    cin>>test;
    while(test--)
    {
        cin>>x;
        cin>>n;
       // int arr[10];
        ////for(i=0;i<10;i++)
        //{
        //    arr[i]=0;
       // }
        a=1;
        for(i=1;i<=n;i++)
        {
           a=a*x;
           temp=a;

         // cout<<"a a is "<<a<<endl;
           while(temp!=0)
           {
               r=temp%10;
               temp=temp/10;
              // arr[r]+=1;
           }
           //cout<<"   "<<r<<"   ";
           cout<<r;
           cout<< a%10 ;

        }
        //for(i=0;i<10;i++)
        //{
        //    cout<<arr[i]<<" ";
        //}
        cout<<endl;
    }
}
