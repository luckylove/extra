// program for the quick short

// by the method of the greeks for greeks




// quick short can be done in many  way
// by taking different different pivot
// either first element or last element or median or any randon element
//here i am doing it by taking first element as the pivot
#include<iostream>
using namespace std;
void printarray(int*arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int getpivot(int*arr,int first,int last)
{/*
    // we can do it by many ways but here i am doing by using he swaping
    // the first greater element with the first smaller elements
    int pivot=arr[first];
    int i=first+1;
    int j=last;
    int temp;
    // we will swap the elements till j>i
    while(j>i)
    {
        while(arr[i]<=pivot&&i<=j)
        {
            i++;
        }

        while(arr[j]>pivot&&i<=j)
        {
            j--;
        }
        // now we have to swap the data
        // swap is required only when we get one element one side which is less then pivot
        // and other side is greater than pivot element
        // but if j>i ho jye then we do not require to swap
         if(j>i)
        {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }


    }
       printarray(arr,last-first+1);
       cout<<endl;
       cout<<endl;

    // till here we get every elements is arranges according
    // now we have to arrange the last pivot element
    // here we get that j is <  i
    // means we have to replace the pivot ie arr[first] with arr[j]


    // we have to replace the pivot with only one such element which is smaller or equal to the pivot
    // but if arr[j]>pivot do j--
       while(j>first&&arr[j]>=pivot)
            j--;
            //now if j-- finally leads to j<first then the pivot element is its correct position i.e.
            // first position
        if(pivot>arr[j])
        {
            arr[first]=arr[j];
            arr[j]=pivot;
            return j;
        }
        else
        {
            return first;
        }
        */
        // now we are doing it by another way
        // initialize i to last+1
        int pivot=arr[first];
        int i=last+1;
        int j;
        for(j=last;j>=first;j--)
        {
            if(arr[j]>pivot)
            {
                i--;
                // swap i with arr[j] here in the first case it is same but later on it may comes different
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        // now we have to give correct position to the pivot so
        arr[first]=arr[i-1];
        arr[i-1]=pivot;
        return i-1;

}
void quicksortarray(int*arr,int first, int last)
{
    if(last>first)
    {
        int pivot=getpivot(arr,first,last);
        quicksortarray(arr,first,pivot-1);
        quicksortarray(arr,pivot+1,last);

    }
}
void quicksortarray1(int*arr,int n)
{
    quicksortarray(arr,0,n-1);    // helper function
}
int main()
{
   int a,b,c,n,i,j,k;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   printarray(arr,n);
   cout<<endl<<endl;
   quicksortarray1(arr,n);
   cout<<endl<<endl;


   cout<<"                 The array we get after shorting is"<<endl<<"         ";
   printarray(arr,n);
}

