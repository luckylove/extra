#include<iostream>
#include<cmath>
#include<algorithm>
//#include<ctime>
// to find out the subset of the given set
using namespace std;
int subset(int* arr,int l ,int n,int*brr,int sum=0)
{
    static int i=0;
    // now we have to make 2 subcases
    // either to include the first element or not
    if(l>n)
    {
        //brr[a--]=sum;
        //cout<<"sum is "<<sum<<endl;
        brr[i]=sum;
        i++;
        return 0;
    }
        subset(arr,l+1,n,brr,sum+arr[l]);
        subset(arr,l+1,n,brr,sum);
}
int main()
{
 int r,c,k,test;
 int i,j,l,a,b,n;
cin>>test;
//clock_t a,b;
//a=clock();
while(test--)
{
    cin>>n;
    a=pow(2,n);
    //cout<<a;
    int arr[n];
    int brr[a];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    /*for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"    ";
    }
    for(i=0;i<a;i++)
    {
        brr[i]=0;
    }*/
    subset(arr,0,n-1,brr);
    sort(brr,brr+a);
    for(i=0;i<a;i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
}
//b=clock();
//cout<<     (double)(b-a)/CLOCKS_PER_SEC;
}

