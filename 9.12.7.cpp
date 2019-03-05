// we want to calculate the factorial and finding out the last non zero digit
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
const long int C=1000000007;

void swapp(int *A,int *B)
{
    int temp;
    temp=*A;
    *A=*B;
    *B=temp;
}
// to find out the sum of the no recursively
long int findsum(long int n)
{
      int arr[50];
    int i,b,c,j,r,l,p,o;
    int count=0;
   long int a=n;
    i=0;
    while (a!=0)
    {
        r=a%10;
        arr[i]=r;

        a=a/10;
        i++;
        count++;

    }

    for(i=0;i<count;i++)
    {
        printf("%d",arr[i]);
    }
    sort(arr,arr+count);
    cout<<endl;
        for(i=0;i<count;i++)
    {
        printf("%d",arr[i]);
    }
    for(i=count-1;i>=0;i--)
    {
        if(arr[i-1]<arr[i])
        {
          index=i-1;
        }
    }


}
   /* int index;
    for(int i=count-1;i>=0;i--)
    {
        if(arr[i-1]<arr[i])
        {
          index=i-1;
        }
    }
    // then we swap and then we sort remaning
    // now we have to swap it with the just greater no.
    int index1;
    a=arr[index+1];
    for(int i=index+2;i<s;i++)
    {
     if(a<arr[i]&&a>arr[index])
     {
         a=arr[i];
         index1=i;
     }
    }
}*/
int main()
{
    long int a;
    cin>>a;
    findsum(a);

}

