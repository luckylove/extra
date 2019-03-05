#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c,d,e,f,i,j,k,m,n,q,flag;
    int x,y;
    int temp;
    char store;
    int clock,anti;
    int small;
    int sum;
    int countt;
    cin>>test;
    while(test--)
    {
        cin>>n>>q;
        char arr[n];
        cin>>arr;
        n=strlen(arr);
        while(q--)
        {
            cin>>x>>y;
            // we have to travel clockwise and anticlockwise and then we need to
            // print the minimum
            if(x==y)
            {
                cout<<0<<endl;

            }
            else if(abs(x-y)==1)
            {
                if(arr[x-1]==arr[y-1])
                {
                    cout<<0<<endl;
                }
                else
                {
                    cout<<1<<endl;
                }
            }
            else
            {
                // their is atleast difference of 1 in the values of x and y
               if(x>y)
                {
                    temp=x;
                    x=y;
                    y=temp;
                }
                // now x is smaller
                // and y is greater
                //clockwise
                clock=0;
                anti=0;
               // cout<<"x is "<<x<<endl;
               // cout<<"uy is"<<y<<endl;
                for(i=x;i<=y-1;i++)
                {
                  if(arr[i]!=arr[i-1])
                  {
                     // cout<<" is is"<<i<<"arr[i] is "<<arr[i]<<endl;
                      clock++;
                  }
                }
                anti=0;

                store=arr[y-1];
               // cout<<"here store is "<<store<<endl;
                for(i=y%n;x!=i%n;i++)
                {
                    //cout<<" is is "<<i<<endl;
                    if(arr[i%n]!=store)
                    {
                        anti++;
                    }
                    store=arr[i%n];
                }
                if(arr[x-1]!=store)
                {
                    anti++;
                }




            /*
                for(i=y;i<n-1;i++)
                {
                  if(arr[i]!=arr[i-1])
                  {
                      anti++;
                  }
                }
                store=arr[n-1];
                for(i=0;i<=x-1;i++)
                {
                    if(i!=0)
                    {
                        if(arr[i]!=arr[i-1])
                        {
                            anti++;
                        }
                    }
                    else
                    {
                        if(arr[i]!=store)
                        {
                            anti++;
                        }
                    }
                }
                */
               // cout<<"clock is "<<clock<<endl;
              //  cout<<"anti is "<<anti<<endl;
                if(anti<clock)
                {
                    cout<<anti<<endl;

                }
                else
                {
                    cout<<clock<<endl;
                }
            }


        }


    }
}
