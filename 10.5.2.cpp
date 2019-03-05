#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,i,j,k,n,m;
    int countt;
     int test;
         cin>>n;
         int arr[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         sort(arr,arr+n);
         //cout<<"gg";
         cin>>m;
         int brr[m];
         for(i=0;i<m;i++)
         {
             cin>>brr[i];

         }
        // sort(brr,brr+m);
           // cout<<countt<<endl;
        // }
         //cout<<"ss";
        countt=0;
         for(i=0;i<m;i++)
         {
            if(arr[j]<brr[i])
            {
                countt++;
                j++;
            }
            else
            {
                i++;
                cout<<countt<<endl;
            }

         }
         cout<<countt<<endl;
}

int BinarySearching(int arr[], int maxx, int element)
{
      int low = 0, high = maxx - 1, middle;
      while(low <= high)
      {
            middle = (low + high) / 2;
            if(element > arr[middle])
                  low = middle + 1;
            else if(element < arr[middle])
                  high = middle - 1;
            else
                  return middle;
      }
      return -1;
}



}
