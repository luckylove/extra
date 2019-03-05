# include<stdio.h>
# include<string.h>
int main()
{
    int a,b,c,i,j,k,test,n,d,count;
    scanf("%d",&test);
    fflush(stdin);
    while(test--)
    {
        scanf("%d",&n);
        b=n;
        fflush(stdin);
        char str[b][50];
        char sh[10000];
        //gets(sh);
        scanf("%[^\n]s",sh);
        a=strlen(sh);
        printf("%d",a);
        k=0;
        j=0;
        for(i=0;i<a;i++)
        {
           if(sh[i]!=' ')
           {
               str[k][j]=sh[i];
               j++;

           }
           else
           {
               k++;
               j=0;
              // i++;
               str[k][j]=sh[i];

           }
        }
        for(i=0;i<b;i++)
        {
            printf("%s",str[i]);
        }
        d=0;
        for(i=0;i<b;i++)
        {
            count=1;
            for(j=i;j<b;j++)
            {
                c=strcmp(str[i],str[j]);
                if(c==0)
                {
                    count++;
                }
            }
            if(count==2)
            {
                d++;
            }
        }
        printf("\nTotal no of doubly repeated strings is    %d",d);






    }
}
