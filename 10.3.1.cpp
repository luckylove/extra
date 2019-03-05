#include<iostream>
using namespace std;
int main()
{
    int test,i,j,k,a,b,c,d,e,n,f;
    cin>>test;
    while(test--)
    {
        cin>>n;
        char arr[n][12];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
/*
        for(i=0;i<n;i++)
        {
            cout<<arr[i];
            cout<<endl;
        }*/

        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        //cout<<"     hhh    "<<strcmp(arr[0],"simple");
        for(i=0;i<n;i++)
        {
            // cout<<arr[i]<<"for i   "<<i<<endl;
            if(!strcmp(arr[i],"cakewalk"))
            {
               // cout<<"ss";
                a=1;
            }
            else if(!strcmp(arr[i],"simple"))
            {
                //cout<<"gg";
                b=1;
            }
            else if(!strcmp(arr[i],"easy"))
            {
               // cout<<"ll";
                c=1;
            }
            else if(!strcmp(arr[i],"easy-medium")||!strcmp(arr[i],"medium"))
            {
                //cout<<"kk";
                d=1;
            }

            if(!strcmp(arr[i],"medium-hard")||!strcmp(arr[i],"hard"))
            {
               // cout<<"ii";
                e=1;
            }


            if(a==1&&b==1&&c==1&&d==1&&e==1)
            {
                f=1;
                break;

            }
        }
        //cout<<a<<b<<c<<d<<e;
        if(f==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
