#include<iostream>
using namespace std;
void dosomething(int*arr,int a,int b, int x,int y,int k)
{
//now here write your recursive program
    if(x>a-1||y>b-1||x<0||y<0)
    {
        return;
    }

    cout<<*((arr+x*b)+(y+1))<<"    "<<*((arr+x*b)+y)<<"   " <<*((arr+x*b)+y-1)<<"   "<<*((arr+(x+1)*b)+y)<<"   "<<*((arr+(x-1)*b)+y);
    if( *((arr+x*b)+(y+1))==*((arr+x*b)+y))
    {
        cout<<"ss";
        dosomething((int*)arr,a,b,x,y+1,k);
    }
    if( *((arr+x*b)+y-1)==*((arr+x*b)+y))
    {
        cout<<"gg";
        dosomething((int*)arr,a,b,x,y-1,k);
    }
     if( *((arr+(x+1)*b)+y)==*((arr+x*b)+y))
    {
        cout<<"vv";
        dosomething((int*)arr,a,b,x+1,y,k);
    }
     if( *((arr+(x-1)*b)+y)==*((arr+x*b)+y))
    {
        cout<<"ee";
        dosomething((int*)arr,a,b,x-1,y,k);
           /* for(int i=0;i<a;i++)
        {
            for( int j=0;j<b;j++)
            {
                cout<<*(arr+i*b+j)<<" " ;
            }
        }*/
    }
    *(arr+x*b+y)=k;
   // cout<<*(arr+x*b+y)<<" " <<"x is "<<x<<"y is "<<y;

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
        cout<<"tt"<<k;
        dosomething((int*)arr,a,b,x,y,k);
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                cout<<arr[i][j]<<" " ;
            }
        }

    }
}
