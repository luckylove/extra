#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c,d,h,e,f,i,j,n,m;
    long long int sum;
    long long int sum1;
    int kmax;
    int kmin;
    long long int k;
    int countt;
    int flag;
    cin>>test;
    while(test--)
    {
        cin>>n>>h;
        int arr[n];
        for(i=0;i<n;i++)
        {
          cin>>arr[i];
        }
        sum=accumulate(arr,arr+n,0);
        //cout<<(double)sum/h<<endl;
       // kmax=ceil((double)sum/h);
        kmin=floor((double)sum/h)+1;
       // cout<<"k msin"<<kmin<<endl;
       // cout<<"k max"<<kmax<<endl;

        for(i=kmin;;i++)
        {
            sum1=0;
            for(j=0;j<n;j++)
            {
                sum1=sum1+ceil((double)arr[j]/i);
                /*
               if(arr[j]%i==0)
                    sum1=sum1+arr[j]/i;
               else
                sum1=sum1+1+arr[j]/i;
                */
            }
            if(sum1==h)
                break;
                if(sum1<h)
                    break;
        }
        if(sum1<h)
            cout<<endl;
        else
        cout<<i<<endl;
       /*
        while(e!=h)
        {
           // cout<<"gg"<<endl;

            //cout<<"k si"<<k<<endl;
            //cout<<e<<endl;
            e=0;
            for(i=0;i<n;i++)
            {
                if(arr[i]%k==0)
                {
                    e=e+arr[i]/k;
                }
                else
                {
                    e=e+arr[i]/k   +  1;
                }

            }
            k++;
        }
        */
       // cout<<k-1<<endl;
       // sort(arr,arr+n);
       // k=*min_element(arr,arr+n);
      // sum=accumulate(arr,arr+n,0);
     //  k=sum/h;
       // by dis way we get sum value of k
       // what will be minimum by considering the sum
       // for the minimum case
       /*
       int brr[100001]={0};
       for(i=0;i<n;i++)
        {
          brr[arr[i]]++;
        }
        b=0;
        while(1)
        {
            countt=0;
            c=1;
            for(i=1;i<100001;i=i+k)
            {
                sum1=0;
              for(j=i;j<i+k&&j<100001;j++)
              {
                  sum1=sum1+brr[j];
              }
              countt=countt+sum1*c;
              c++;
            }
            if(countt==h)
            {
                b=1;
                break;
            }
            k++;
        }

        cout<<k<<endl;
        */
    }
}

