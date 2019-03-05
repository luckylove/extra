#include<iostream>
using namespace std;
// performing binary search by using recursion
// by the use of the helper function
// the function we used for the recursion
int binarysearch1(int *arr, int e, int low, int high)   //    the definition of the helper function
{
    //cout<<"gg"<<"high is "<<high<<"low is "<<low;
    if(high>=low){
    int middle;
    middle=(high+low)/2;
    cout<<"high is "<<high<<"middle is "<<middle<<"low is "<<low<<endl;
    if(arr[middle]>e)
    {
        binarysearch1(arr,e,low,middle-1);
    }
    else if(arr[middle]==e)
    {
        return middle+1;
    }
    else
    {
        binarysearch1(arr,e,middle+1,high);
    }
    }
    //else
    return -1;

    //return -1;
}
int binarysearch(int*arr, int n, int e)
{
    int high ;
    int low;
    low=0;
    high=n-1;
    //cout<<"ss"<<endl;
    return binarysearch1(arr,e,low,high);//   this is the helper function called by increasing the parameters
}
int main()
{
    int i,j,a,b;
    int n,m;
    int e,ans;
    //printf("Enter the no of elements you want to enter");
    cin>>n;
    //scanf("%d",&n);
    int arr[n];
    cout<<"Enter the elements one by one"<<endl;
   // printf("Enter the no one by one ");
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
       // scanf("%d",&arr[i]);
    }
    // now to do binary search we want one element
    cout<<"Enter the element you want to search"<<endl;
    //printf("Enter the element you want to search");
    cin>>e;
    //scanf("%d",&e);
    ans = binarysearch(arr,n,e);
    if(ans==-1)
        cout<<"This elements is not present in the array you entered"<<endl;
    else
    cout<<"the no you have entered is found at the position   "<<ans;
    //printf("the no you have entered is found at the position  %d  ",ans);
}
