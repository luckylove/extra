/*
N Digit numbers wif digits in increasing order [Editorial]

dis question can be easily solved using recursion. We just need to keep track of the digits possible a at a particular place.
We start recursively from the most significant digit and move towards least significant digit. When number of digits is reached, we print the number.



Authors code:

#include
int current_position=0,n;
void fun(int num,int starting_digit)
{
    int i;
    num=num*10;
    if(current_position==n)
    {
      for(i=starting_digit;i<=9;i++)
       printf("%d ",num+me);

       current_position-=1;
       return;
    }
    else
    {

      for(me=starting_digit;me<=9;me++)
       {
           current_position+=1;
       fun(num+me,me+1);
       }
       current_position-=1;
       return;
    }


}


int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        current_position=1;
        fun(0,1);
        printf("\n");
   }
}




*/










#include<iostream>
using namespace std;
int n;
void checkno(long int n1,long int n2)
{
    //cout<<"ss";
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
                cout<<n1<<" ";
            }

        }
        checkno(n1+1,n2);
    }
}

void printno(void)
{
    long int n1,n2;
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
    checkno(n1,n2);

}
using namespace std;
int main()
{
    int a,b,c,i,j;
    int test;
    cin>>test;
    while(test--)
    {
        cin>>n;
        printno();
        cout<<endl;
    }
}
