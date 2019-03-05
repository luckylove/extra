#include<bits/stdc++.h>
using namespace std;
int calculategcd(int a, int b)
{
	if (a == 0)
		return b;
	return calculategcd(b%a, a);
}
int main()
{
   int test,a,b,c,d,e,f,i,j,k,m,n,q,x,y,l,r,value,countt;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cin>>q;
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
           cin>>l>>r>>value;
           countt=0;
           for(i=l-1;i<r;i++)
           {
             if(arr[i]%2!=0||value%2!=0)
             {
                 if(calculategcd(arr[i],value)==1)
                    countt++;
             }
           }
           cout<<countt<<endl;
       }
   }

}
