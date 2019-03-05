#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,b,m,i,j,k,a,c;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    sort(arr,arr+n);
    /*for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"   ";
    }*/
    int countt=1;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            countt++;
        }
    }
  //  cout<<" countt is "<<countt<<endl;
    int brr[countt];
    j=0;
    int counttt=1;
    for(i=0;i<n;i++)
    {
        //counttt=1;
        if(arr[i]==arr[i+1])
        {
            counttt++;
        }
        else
        {
            brr[j]=counttt;
            j++;
                counttt=1;
        }
    }
    /*for(i=0;i<countt;i++)
    {
        cout<<brr[i]<<"   ";
    }
    */
    j=0;
    i=m;
    while(i>=0)
    {

        if(brr[j]<=i)
        {
            i=i-brr[j];
            brr[j]=0;
            j++;
        }
        else
        {
            break;
        }
    }
    /*
    for(i=0;i<countt;i++)
    {
        cout<<brr[i]<<"  ";
    }
    */
    int no=0;
    for(i=0;i<countt;i++)
    {
        if(brr[i]!=0)
        {
            no++;
        }
    }
   // cout<<"no is ";
    cout<<no<<endl;

}
