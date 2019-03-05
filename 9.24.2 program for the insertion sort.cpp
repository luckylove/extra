// program to demostrate the  insertion sort

#include<iostream>
using namespace std;
void insertionsort(int*arr,int n)
{
    int i,j,k;
    int yes;
    int index;
    int temp;
    for(i=1;i<n;i++)
    {
        yes=0;
        for(j=0;j<i;j++)
        {
            if(arr[j]>arr[i])
            {
                index=j;
                yes=1;
                break;
            }
        }
        if(yes==1)
        {
        temp=arr[i];
        for(j=i;j>index;j--){
            arr[j]=arr[j-1];}
        arr[index]=temp;
        }
    }
}
int main()
{
    int n,a,b,i,j,k;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionsort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
