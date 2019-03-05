// writing a program for the recursive sequence
#include<iostream>
using namespace std;
long long int dorecursion1(int n,int i,int j)//let the value of i is incremented forever and j is the no of terms covered and the last temp of j is n
{
    long long int term=1;
    if(j<=n)
    {
        for(int k=i;k<i+j;k++)
        {
            term=term*k;
        }
        i=i+j;
      //  cout<<"term is "<<term;
        return term+dorecursion1(n,i,++j);
    }
    else return 0;

    // form here we call n-1;

}
long long int dorecursion(int n)
{
    // lets us call the helper function form here
    int i=1;
    int j=1;
    return dorecursion1(n,i,j);
}
int main()
{
    int a,b,i,j;
    int test,n;
    cin>>test;
    long long int sum;
    while(test--)
    {
        cin>>n;
        // now call the recursion function
        // for the sum
        sum=dorecursion(n);
        cout<<sum<<endl;

    }
}
