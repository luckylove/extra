//Given an array A of size N, find all combination of
//four elements in teh array whose sum is equal to a

// given value K. For example,

//if teh given array is {10, 2, 3, 4, 5, 9, 7, 8} and
// K = 23, one of teh quadruple is “3 5 7 8” (3 + 5 + 7 + 8 = 23).
// if no pair exist print -1

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int test,n,i,j,k,l,m,a,b,c;
    cin>>test;
    while(test--)
    {
        cin>>n>>b;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        /*for(i=0;i<n;i++)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl<<endl;
        */
        a=0;
        for(i=0;i<n-3;i++)
        {
        if(i==0||arr[i]!=arr[i-1])
            {
                for(j=i+1;j<n-2;j++)
                {
                    if(j==i+1||arr[j]!=arr[j-1])
                    {
                        for(k=j+1;k<n-1;k++)
                        {
                            if(k==j+1||arr[k]!=arr[k-1])
                            {
                                for(l=k+1;l<n;l++)
                                {
                                    if(l==k+1||arr[l]!=arr[l-1])
                                    {
                                         if(arr[i]+arr[j]+arr[k]+arr[l]==b)
                                        {
                                            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<" "<<"$";

                                           a=1;
                                           // cout<<endl;
                                            //cout<<"i j k and l is "<<i<<"   "<<j<<"  "<<k<<"  "<<l;
                                        }
                                    }
                                }
                            }
                        }
                     }
                  }
               }
        }
        if(a==0)
            cout<<-1;
        cout<<endl;
    }

}
