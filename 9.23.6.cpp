// here we are calculating the time taken by the bubble short


// here the problem come is that we are giving the inputs very less that the
// time taken only for the short is 0 seconds
// if we increase the input then the time also increace accordingly




#include<iostream>
#include<ctime>
using namespace std;
void printarray(int*arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    // first of all take an array as an input
    int i,j,k,l,a,b,c,d;
     clock_t s,e;
    int n;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    s=clock();
    printarray(arr,n);
   //  s=clock();
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    // now we have to short it
  //  fundividemerge1(arr,n);
    e=clock();
    cout<<"e is "<<e<<endl;
    cout<<"s is "<<s<<endl;
    cout<<"The time taken by the sort is "<<((double)(e-s)/CLOCKS_PER_SEC);
    cout<<endl<<endl;
    printarray(arr,n);

}
