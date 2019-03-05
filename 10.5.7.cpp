#include<iostream>
using namespace std;
int main()
{
    int N=3;
    int i,j,k;
    for(i=N;i>=0;i--)
    {
        for(j=N-i;j>=0;j--)
        {
        cout<<" i is    "<<i<<" j is    "<<j<<"   k is      "<<N-i-j<<endl;
        }
    }
}
