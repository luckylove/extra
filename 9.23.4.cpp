// writing a program for the merge short

// simple merge short

// one  function we have to make to copy the string one to anther
// one function for the merging two sub array to one single array which has e
// elements equal to the sum of the elements of he two subarray
// and one is the recursive function to divide the array in the two halfs
// and then again divide the two subarray recursively
#include<iostream>
using namespace std;
void mergearray(int*arr,int f,int m,int l)
{
    // here ve have to take two temporary array to store the left and the write part of the array
    int n1=m-f+1;
    int n2=l-m;
    int temp1[n1];
    int temp2[n2];
    // now copy the elements in the temporary array;
    int j=f;
    int k=m+1;
    for(int i=0;i<n1;i++)
    {
        temp1[i]=arr[j];
        j++;
    }
    for(int i=0;i<n2;i++)
    {
        temp2[i]=arr[k];
        k++;
    }
    // now we have to again copy the content in the original array
    int i=0;
    j=0;
    k=f;// now here we are again coping the content from the temporary array to the given original array
                        while(i<n1&&j<n2)
                        {
                            if(temp1[i]>temp2[j])
                            {
                                arr[k]=temp2[j];
                                j++;
                                k++;
                            }
                            else
                            {
                                arr[k]=temp1[i];
                                i++;
                                k++;
                            }
                        }
                        while(i<n1)
                        {
                            arr[k]=temp1[i];
                            i++;
                            k++;
                        }
                        while(j<n2)
                        {
                            arr[k]=temp2[j];
                            j++;
                            k++;
                        }
}
void fundividemerge(int*arr,int f,int l)
{
    if(f<l)
    {
        int m=f+((l-f)/2);
        fundividemerge(arr,f,m);
        fundividemerge(arr,m+1,l);
        mergearray(arr,f,m,l);
    }
    // here i am  calling the same function again and again
}
void fundividemerge1(int*arr, int n)
{
    int first=0;
    int last=n-1;
    fundividemerge(arr,first,last);    // helper function
}
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
    int n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printarray(arr,n);
    // now we have to short it
    fundividemerge1(arr,n);
    cout<<endl<<endl;
    printarray(arr,n);

}
