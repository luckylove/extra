#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test,a,b,c,d,e,f,i,j,k,m,n,q,x,y,l,r,value,countt;
   int perimeter,maxperimeter;
   cin>>n>>q;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
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
           maxperimeter=0;
           if(r-l>=2&&n>=3)
           {
        for(i=l-1;i<r-2;i++)
           {
             for(j=i+1;j<r-1;j++)
             {
               for(k=j+1;k<r;k++)
               {
                  // cout<<"arr[i] is"<<arr[i]<<endl;
                  // cout<<"arr[j] is"<<arr[j]<<endl;
                  // cout<<"arr[k] is"<<arr[k]<<endl;

                   if((arr[i]+arr[j]>=arr[k])&&(arr[i]+arr[k]>=arr[j])&&(arr[j]+arr[k]>=arr[i]))
                   {
                      // cout<<"aa"<<endl;
                       if(maxperimeter<(arr[i]+arr[j]+arr[k]))
                       {
                           maxperimeter=arr[i]+arr[j]+arr[k];
                       }
                   }
               }
             }
           }

           cout<<maxperimeter<<endl;
           }
           else
           {
               cout<<"0"<<endl;
           }
       }
   }

}

