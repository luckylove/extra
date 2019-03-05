#include<iostream>
using namespace std;
int main()
{
    int test,i,j,k,a,b,c,d,e,n,f;
    int no1,no2,no3,total;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        no1=0;
        no3=0;
        for(i=0;i<n;i++)
        {
          if(arr[i]==1)
          {
              no1++;
          }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                no3=n-i;
                break;
            }
        }

       // cout<<"no of count is "<<no3<<endl;
       //cout<<"no i is    "<<no1<<"no 3 is  "<<no3<<endl;
        total=(n-no1)*1000+(no3)*100;
       // cout<<" the total amount to pay is "<<total<<endl;
       cout<<total<<endl;
    }
}

