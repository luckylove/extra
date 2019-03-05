#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test,a,b,c,d,e,f,i,j,k,m,n,q,x,y,l,r,value,countt;
   int perimeter,maxperimeter,n1;
   cin>>n>>q;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int brr[n];
   while(q--)
   {
       cin>>a;
       if(a==1)
       {
           cin>>x;
           cin>>y;
           arr[x-1]=y;
       }
       else
       {
           cin>>l>>r;
           j=0;
           for(i=l-1;i<r;i++)
           {
               brr[j]=arr[i];
               j++;
           }
           n1=j;
           sort(brr,brr+n1);
           //for(i=0;i<n1;i++)
           //{
          //     cout<<brr[i]<<endl;
           //}
            maxperimeter=0;
            //cout<<"n1 is "<<n1<<endl;

            if(n1>=3)
            {
             for(i=n1-1;i>=2;i--)
                {
                   if(brr[i]<brr[i-1]+brr[i-2])
                    {
                       // cout<<"ss"<<endl;
                        maxperimeter=brr[i]+brr[i-1]+brr[i-2];
                        break;
                    }
                }
            }

            cout<<maxperimeter<<endl;



       }
   }

}


