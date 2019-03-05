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
          if(arr[i]!=1)
          {
              no3++;
              no2=0;
              // check for other
              for(j=n-1;j>i;j--)
              {
                  if(arr[j]==1)
                  {
                      no2=1;
                      no1++;
                     arr[j]=0;
                     break;
                  }
              }
              if(no2==1)
              {
                  arr[i]=1;
              }
          }
        }
       /* for(i=0;i<n;i++)
        {
            cout<<arr[i]<<"   ";
        }
        cout<<" no of count is "<<no1<<endl;
        // now we need to count the total no of zeros
        */
        /*
        no2=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                no2++;
            }
        }
        */
       // cout<<"no of count is "<<no3<<endl;
        total=no1*100+(no3-no1)*1100;
       // cout<<" the total amount to pay is "<<total<<endl;
       cout<<total<<endl;
    }
}
