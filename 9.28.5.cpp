#include<iostream>
using namespace std;

int  gcd(int a, int b)
{
    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

// Function to return LCM of two numbers
long long int lcmofno(int a, int b)
{
    int get =gcd(a,b);
    return (a/get)*b;
}
int main()
{
    int test,n,a,b,i,j,k,l;
    long long int sum,lcm;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sum=lcmofno(arr[0],arr[1]);
        lcm=1;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(sum<arr[i]&&sum<arr[j])
                {
                    // do nothing
                }
                else
                {
                         if(arr[i]==arr[j])
                        {
                            lcm=arr[i];
                        }
                        else
                        {
                        lcm=lcmofno(arr[i],arr[j]);
                        }
                    if(lcm<sum)
                    {
                        sum=lcm;
                    }
                }
            }
        }
        cout<<sum<<endl;

    }

}
