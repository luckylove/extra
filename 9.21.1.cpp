#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test,n,a,b,i,j,k,l;
    char arr[100];
    cin>>test;
    while(test--)
    {
        a=0;
        cin>>arr;
        for(i=0;i<strlen(arr);i++)
        {
            for(j=i+1;j<strlen(arr)-1;j++)
            {
                if(arr[i]==arr[j])
                {
                    a=1;
                    break;
                }

            }
            if(a==1)
            {
                for(k=i+1;k<strlen(arr)-j;k++)
                {
                   for(l=j+1;l<strlen(arr);l++)
                   {
                    //   cout<<"ss";
                     //  cout<<"l is "<<   l   <<"k is"<<  k  <<"arr l is "<<   arr[l]   <<"arr k is "<<   arr[k]   <<endl;
                       if(arr[l]==arr[k])
                       {
                        //                          cout<<"l is "<<   l   <<"k is"<<  k  <<"arr l is "<<   arr[l]   <<"arr k is "<<   arr[k]   <<endl;

                        a=2;
                        break;
                       }
                   }
                   if(a==2)
                    break;
                }
                if(a==2)
                    break;
            }

        }
        //cout<<"a is"<<a;
        if(a==2)
            cout<<"yes";
        else
            cout<<"no";

    }
}
