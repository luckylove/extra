//Given an array arr[] of N elements and a number K.
// You're task is to count the number of integers from 1 to K
// which are divisible by atleast one of the elements of arr[].

/*Constraints:

1<=T<=100

1<=N<=12

1<=a[me]<=20

1<=K<=10^18

Example:     */
// here it is given that the value of the elements of an array is lies between one to 20
#include<iostream>
using namespace std;
bool funcheck(int*arr,int n,int k)
{
    if(n<0)
    {
        return false;
    }
    if(k%arr[n]==0)
    {
    return true;
    }
    funcheck(arr,n-1,k);
}
int getcount1(int*arr,int n,int k,int nono=0)   // helper function
{
    if(k==0)
    {
        return nono;
    }
    if(funcheck(arr,n,k)==true)
    {

        nono++;
    }
    getcount1(arr,n,k-1,nono);
}
int main()
{
   int i,k;
   int test,n,ans;
   cin>>test;
   while(test--)
   {
       cin>>n;
       int arr[n];
       for(i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       cin>>k;
       ans= getcount1(arr,n-1,k);
       cout<<ans<<endl;

   }
}
