# include<stdio.h>
# include<string.h>
# include<limits.h>
int main()
{
    int i,j,k,test,count1,count2;
    unsigned long  int  count;
    int a,b,c,e,d,n,m;
    const unsigned long int div=1000000007;
    unsigned long long  int f;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&n,&k);
        count=0;
        for(i=0;i<n;i++)
        {
            a=i+1;
            if(a%2==0)
                b=a/2;
            else
            b= ( a/2 )+1;

            //printf("\t\t%d\t\t",b);
            f=1;
            for(d=k;d>k-b;d--)
            {
                f=((f%div)*(d%div))%div;
            }
            //printf("%llu\n",f);
           // printf("\t%d",(fact(k)/(fact(b)*fact(k-b)))*fact(b));
            count=((count%div)+(f%div))%div ;//(fact(k)/(fact(b)*fact(k-b)))*fact(b);
           // printf("\n%lu\n",count);
        }
        printf("%lu\n",count);
    }
}
