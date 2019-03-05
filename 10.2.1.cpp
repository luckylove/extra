// codechef problem
#include<iostream>
using namespace std;
int main()
{
    int test,n,i,j,k,l,a,b;
    cin>>test;
    int check;
    while(test--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        check=0;
        // now the checking part
        if(n&1)
        {
          // n is odd
          if(arr[0]!=1||arr[n-1]!=1)
          {
              cout<<"no"<<endl;
          }
          else
          {
              for(i=1;i<(n/2)+1;i++)
              {
                  if(arr[i]!=arr[i-1]+1)
                  {
                      check=1;
                      cout<<"no"<<endl;
                      break;
                  }
              }
              if(check!=1)
              {
                  for(i=n/2;i<n-1;i++)
                  {
                      if(arr[i+1]!=arr[i]-1)
                      {
                          check=1;
                          cout<<"no"<<endl;
                          break;
                      }
                  }
              }
        if(check==0)
          {
              cout<<"yes"<<endl;
          }
          }

        }
        else
        {
           {
          // n is even
          if(arr[0]!=1||arr[n-1]!=1||arr[n/2 -1]!=arr[n/2])
          {
              cout<<"no"<<endl;
          }
          else
          {
          cout<<"no"<<endl;
          }

        }
        }
    }
}
