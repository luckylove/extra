#include<iostream>
using namespace std;
int main()
{
    int test,n,a,b,i,j,k,l;
    int s,sg,fg,d,t;
    double d1,d2,d3;
    cin>>test;
    while(test--)
    {
        cin>>s;
        cin>>sg;
        cin>>fg;
        cin>>d;
        cin>>t;
        d1=s+(50*3.6*d)/t;
        d2=d1-sg;
        d3=d1-fg;
        if(d2<0)
        {
            d2=-d2;
        }
        if(d3<0)
        {
            d3=-d3;
        }
                cout<<"d1 is"<<d1<<"d2 is"<<d2<<"d3 is "<<d3<<endl;

        if(d3>d2)
        {
            cout<<"SEBI"<<endl;
        }
        else if(d2>d3)
        {
            cout<<"FATHER"<<endl;
        }
        else
        {
            cout<<"DRAW"<<endl;
        }





    }
}
