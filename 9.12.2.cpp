//Given three integers x,y and z you need to find the sum of all the numbers formed by
//having 4 atmost x times , having 5 atmost y times and having 6 atmost z times as a digit.

//Note : Output the sum modulo 10^9+7.




// problem number formation
// solved by shubham gupta 19
// hard problem
#include<iostream>
#include<algorithm>
using namespace std;
const long int C=1000000007;

void swapp(int *A,int *B)
{
    int temp;
    temp=*A;
    *A=*B;
    *B=temp;
}
long int getno(int *arr,int s)
{
    long int sum=0;
    for(int i=0;i<s;i++)
    {
        sum=((sum*10)%C+arr[i]%C)%C;
    }
    cout<<"the no we get is "<<sum<<endl;
    return sum;

}
long int sumsum(int*arr,int s, long int sum=0,bool a=false)
{
    // initially it is arranged in the shorted order
    // the base case is when the array is completely decreacing
    sum=(sum %C+getno(arr,s) %C)%C;
    for(int i=0;i<s;i++)
    {
        if(arr[i+1]>arr[i])
        {
            a=true;
        }
    }
    if(a==false)
        return sum;
    // now we have to call the same function with the correction in it
    int index;
    for(int i=s-1;i>0;i--)
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
    swapp(&arr[index1],&arr[index]);
      sort(arr+index,arr+s-1);
      sumsum(arr,s,sum);
}
long int providesum( int i ,int j,int k)
{
    int arr[i+j+k];
   int  d=0;
    for(int a=0;a<i;a++)
    {
        arr[d]=4;
        d++;
    }
    for(int a=0;a<j;a++)
    {
        arr[d]=5;
        d++;
    }
    for(int a=0;a<k;a++)
    {
        arr[d]=6;
        d++;
    }


   for(int a=0;a<i+j+k;a++)
   {
       cout<<arr[a]<<"   "  ;
   }
   cout<<"   "<<endl;


   long int su;
      su=sumsum(arr,i+j+k);
      cout<<"su is"<<su<<endl;

}
int main()
{
    int i,k,j,l,m,n;
    int test;
    long int sum;
    int a,b,c,d,e;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        for(i=0;i<=a;i++)
        {
            for(j=0;j<=b;j++)
            {
                for(k=0;k<=c;k++)
                {
                    if(i==0&&j==0&&k==0)
                    {
                    }
                    else
                    {
                       providesum(i,j,k);
                    }
                }
            }
        }

    }
}
