//problem related to factorial in which huge problem comes due to the size of the int andall.
# include<stdio.h>
long int fact(int,int,int);
long double fact1(int);
int main()
{
    int n,b,c,a;
    int i,j,k,l,m;
    int d,e,f;
    long long int count;
    int test;
    //printf("Enter the test cases");
    scanf("%d",&test);
    while(test--)
    {

                //printf("Enter the values of all");
                scanf("%d",&n);
                scanf("%d%d%d",&a,&b,&c);
                m=n-a-b-c;
                count=0;
                for(i=0;i<=m;i++)
                {
                    for(j=0;j<=m-i;j++)
                    {
                        d=a+i;
                        e=b+j;
                        f=c+m-i-j;
                      // printf("\t%d\t%d\t%d\t%f\t%f\t%f\t%f\t%f\t%d\n",d,e,f,fact1(d),fact1(e),fact1(f),fact1(d+e+f),fact1(18),fact(d,e,f));
                       // printf("\t%d",fact(d,e,f));
                        count=count+fact(d,e,f);

                    }
                }
                printf("\n%lld\n",count);
    }
}
long int fact(int d,int e,int f)
{
   long int ans;
   ans= (fact1(d+e+f))/(fact1(d)*fact1(e)*fact1(f));
   return ans;
}
long double fact1(int value)
{
    int i;
    long double ans=1;
    for(i=1;i<=value;i++)
    {
        ans = ans*i;
    }
    return ans;
}
