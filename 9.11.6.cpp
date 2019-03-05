#include<iostream>
#include<ctime>
using namespace std;
int findpath(int r,int c)
{
    if(r==1||c==1)
        return 1;
    return findpath(r-1,c)+findpath(r,c-1);// reduces to two submatrix
}
int main()
{
 int r,c,k,test;
cin>>test;
clock_t a,b;
a=clock();
while(test--)
{
    cin>>r>>c;
    k=findpath(r,c);
    cout<<k<<endl;
}
b=clock();
cout<<     (double)(b-a)/CLOCKS_PER_SEC;
}
