// let see it later prblem beautiful string
#include<iostream>
using namespace std;
int main()
{
    int test,n,a,b,c,ans,i,j,k,l,temp;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        // it either contains -1 or not
        // if it contains only 1 then
        // first case it only contains 1 and 0
        a=0;
        c=0;
        ans=1;
        for(i=0;i<n;i++)
        {
            if(arr[i]==-1)
            {
                c=1;
            }
        }
        if(c==0)
        {

            for(i=0;i<n;i++)
            {
                if(arr[i]!=0&&arr[i]!=1)
                {
                  //  cout<<"GG";
                    a++;
                }
                if(a>1)
                {
                    ans=0;
                 //   cout<<"ss";
                    break;
                }
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(arr[i]!=1&&arr[i]!=0&&arr[i]!=-1&&a==0)
                {
                    temp=arr[i];
                    a++;
                }
                // check for other temp
                if(a==1&&arr[i+1]==temp)
                {
                    ans =0;
                    a++;
                    break;
                }
                if(arr[i]!=0&&arr[i]!=1&&arr[i]!=-1&&arr[i]!=-temp&&a==1)
                    {
                        ans=0;
                        break;
                    }
            }

        }
        if(ans==0)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;

    }
}
