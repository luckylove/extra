// second program on the code blocks but won't run at all
// i dont know why
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
                    //cout<<"i is "<<i<<"j is "<<j;
                    break;   // means till now we get the first common character

                }

            }
            if(a==1)
            {
                for(k=i+1;k<j;k++)
                {
                    if(arr[k]>arr[i])
                    {
                        for(l=j+1;l<strlen(arr);l++)
                       {
                           if(arr[l]>arr[j])
                           {
                             // cout<<"l is "<<   l   <<"k is"<<  k  <<"arr l is "<<   arr[l]   <<"arr k is "<<   arr[k]   <<endl;
                               if(arr[l]==arr[k])
                               {
                                //                          cout<<"l is "<<   l   <<"k is"<<  k  <<"arr l is "<<   arr[l]   <<"arr k is "<<   arr[k]   <<endl;

                                a=2;
                                break;
                               }
                           }
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
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }
}
/*
4
likecs
venivedivici
bhuvan
codechef
*/
//     LIKECS01
