// write a program to to replace the color element of the image element by
// another color element
// by using the recursion

#include<iostream>
using namespace std;
void dosomething(int*arr,int a,int b, int x,int y,int k,int kk)
{
//now here write your recursive program
    if(x>a-1||y>b-1||x<0||y<0)
    {
        return;
    }
    *(arr+x*b+y)=k;

     if( *(arr+x*b+y+1)==kk)
    {
       // cout<<"ss";
        dosomething((int*)arr,a,b,x,y+1,k,kk);
    }
    if( *(arr+x*b+y-1)==kk)
    {
      //  cout<<"gg";
        dosomething((int*)arr,a,b,x,y-1,k,kk);
    }
     if( *(arr+(x+1)*b+y)==kk)
    {
      //  cout<<"vv";
        dosomething((int*)arr,a,b,x+1,y,k,kk);
    }
     if( *(arr+(x-1)*b+y)==kk)
    {
       // cout<<"ee";
        dosomething((int*)arr,a,b,x-1,y,k,kk);
     }



}
int main()
{
    int i,j,k,l,a,b,c,test;
    cin>>test;
    int x,y;
    while(test--)
    {
        cin>>a>>b;
        int arr[a][b];
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                cin>>arr[i][j];
            }
        }
        cin>>x>>y>>k;
        //cout<<"tt"<<k;
        dosomething((int*)arr,a,b,x,y,k,arr[x][y]);
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                cout<<arr[i][j]<<" " ;
            }
        }
        cout<<endl;

    }
}
