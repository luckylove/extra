#include<stdio.h>
int main()
{

    int i,a,b,c,d,e,f,g,j,k,l,n;
    int test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        f=0;
        for(i=1; ;i++)
        {
            f=f+i;
            if(f>=n)
                {
                break;
                }
        }
        g=f-i;
        printf("%d%d\n",f,g);
        if(f==g+i)
            printf("%d",i);
        else
        {
            k=i;
            h=f-g;
            for(j=1;j<=i;j++)
            {

            }

        }

    }

}
