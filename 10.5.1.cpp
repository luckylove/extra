#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 int a,b,c,i,j,k,test,n;
 char arr[100000];
 cin>>arr;
 //cout<<arr;
 int countt=0;
 //cout<<strlen(arr);
 for(i=0;i<strlen(arr);i++)
 {
     //cout<<"ss";
     if(arr[i]=='r')
     {
         //cout<<"gg";
         a=0;
         // now check for the other
         for(j=i+1;j<strlen(arr);j++)
         {
             //cout<<"cc";
             if(arr[j]==arr[i])
             {
                 countt++;
                 a++;
             }
             else
             {
                 break;
             }
         }
         i=i+a;

     }
 }
 cout<<countt<<endl;

}
