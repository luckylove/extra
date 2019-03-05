#include<iostream>
using namespace std;
int hcfof(long long int n,int a)
{
   int i;
   for(i=a;i>=1;i--)
   {
       if(n%i==0&&a%i==0)
       {
           return i;
       }
   }
}
int main()
{
   int b,c,test,i,j,k;


   long long int n;
   int a,hcf;
   cin>>test;
   while(test--)
   {
       cin>>n;
       // now we have to write a function
       a=2;
       //cout<<n<<"    " <<a;
       //cout<<n%a;
       while(n!=1)
       {
          // cout<<"ss";
           // we have to find out the common factor of both of them

          if(n%a==0)
          {
              n=n/a;
             // cout<<n<<endl;
          }
          else
          {
             // hcf=hcfof(n,a);
            //  n=n/hcf;
          }
         // if(n==1)
           // break;
          a++;
       }
       cout<<--a<<endl;
      // cout<<endl<<"a is "<<--a<<endl;
   }
}
