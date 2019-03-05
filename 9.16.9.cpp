#include<iostream>
using namespace std;
void checkno(long int n1,long int n2, int n)
{
    if(n1!=n2)
    {
        int j=1,k=10,l=1,i;
        for(i=0;i<n-1;i++)
        {
            if(i==0) {  l=1;  }
            else  { l=l*10;  }
            j=j*10;
            k=k*10;
            if((n1%j-n1%l)/l<=(n1%k-n1%j)/j)
            {
               // cout<<"n1 is    "<<n1<<"(n1%k-n1%j)/j     "<<(n1%k-n1%j)/j<<"(n1%j-n1%l)%l    " <<(n1%j-n1%l)/l<<endl;
                break;
            }
            if(i==n-2)
            {
                cout<<n1<<" "<<"n-2 is "<<n-2<<endl;
            }

        }
        checkno(n1+1,n2,n);
    }
    else
        return ;
}

void printno( int n)
{
    int n1,n2;
    n1=1;
    n2=1;
    for(int i=0;i<n-1;i++)
    {
        n1=n1*10;
        n2=n2*10;
    }
    n2=n2*10;
    n2=n2-1;
    //cout<<"n1 is   "<<n1<<"     n2 is "<<n2<<endl;
   // cout<<n1<<" ";
    checkno(n1,n2,n);

}
using namespace std;
int main()
{
    int a,b,c,i,j;
    int test;
    long int  n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        printno(n);
        cout<<endl;
    }
}
