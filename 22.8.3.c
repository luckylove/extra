#include<stdio.h>
int main()
{
    int test,a,b,c,d,e,i,j,m,n;
   // printf("Enter the test cases");
    scanf("%d",&test);
    while(test--)
    {
        a=b=c=d=e=0;
       // printf("Enter the value of n and m");
        scanf("%d%d",&n,&m);
        for(i=n-1,j=n+1; ;i--,j++)
        {
            if(n%m==0){ e=1;break;}
            if(i%m==0&&j%m==0){ a=i; b=j; break;}
            if(i%m==0){ a=i; break;}
            if(j%m==0){a=j; break;}
        }
        if(a<0){ a=-a; c=1;}
        if(b<0){ b=-b; d=1;}
        if(e==1) printf("%d",n);
        else{
        if(a>b){
            if(c==1)printf("%d",-a);
             else printf("%d",a);}
        else{
            if(d==1)printf("%d",-b);
            else printf("%d",b);}
           }
           printf("\n");
    }
}
