#include<iostream>
#include<algorithm>
using namespace std;
// mila and gila problem
bool funcheck(int*arr,int m,int diff,int no=1)
{
    // we have to examine that can the sum of a sumarray be diff
    // then possible else not possible
    if(no==m)
        return false;
    int j,i,a,sum;
   // cout<<"shubham";
    for(j=0;j<m-no;j++)
    {
        sum=0;
        for(i=j,a=0;a<no;i++,a++)
        {
            sum=sum+arr[i];
            if(sum>diff)
                break;
        }
        //cout<<"sum is "<<sum<<endl;
        if(sum==diff)
        {
            return true;
        }
    }
     return funcheck(arr,m,diff,no+1);
}
int main()
{
    int i,j,k,coin,coins;
    int test,m,n;
    int sum,diff;
    cin>>test;
    while(test--)
    {
        cin>>m>>n;
       int  arr[m];
        for(i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        // we have to give coins till both of them have the same coins
        sum=0;
        for(i=0;i<m;i++)
        {
            sum=sum+arr[i];
        }
        diff=sum-n;
      // cout<<"diff is "<<diff<<endl;
        sort(arr,arr+m);
         if(diff==0){
            cout<<1;
        cout<<endl;}

        else{
        if(diff%2!=0){
            cout<<0;
            cout<<endl;}
        else
        {
            diff=diff/2;
       //  cout<<"diff/2 is "<< diff<<endl;
           if(funcheck(arr,m,diff)==true){
            cout<<1;
            cout<<endl;}
        }}

    }

}
