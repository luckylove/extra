// WRITING A PROGRAM TO MERGE TWO SHROTED ARRRAR IN THE SHORTED ORDER
#include<iostream>
#include<algorithm>
using namespace std;
/*void sortelement(int*arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    return ;
}
*/

int main()
{
    int test,n1,n2,i,j,k,a,b,c;
    cin>>test;
    while(test--)
    {
        cin>>n1>>n2;
        int arr[n1],brr[n2];
        //int crr[n1+n2];
        for(i=0;i<n1;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<n2;i++)
        {
            cin>>brr[i];
        }
        sort(arr,arr+n1);
        sort(brr,brr+n2);
        /*for(i=0;i<n1;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        for(i=0;i<n2;i++)
        {
        cout<<brr[i]<<" ";
        }
            cout<<endl;
            */
        j=0;
        k=0;
        while(j<n1&&k<n2)
        {
            if(arr[j]<brr[k])
            {
                //crr[i]=arr[j];
                //cout<<crr[i]<<" ";
                cout<<arr[j]<<" ";
                j++;
            }
            else
            {
               // crr[i]=brr[k];
                //cout<<crr[i]<<" ";
                cout<<brr[k]<<" ";
                k++;
            }
        }
        while(j<n1){
            cout<<arr[j]<<" ";
            j++;}
        while(k<n2){
            cout<<brr[k]<<" ";
            k++;}
        cout<<endl;

    }
}
