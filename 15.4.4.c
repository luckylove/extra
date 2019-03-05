# include<stdio.h>
int main()
{
    char s[16];
    printf(" Enter the no of your credit card and i will tell you whether it is valid or not");
    scanf("%s",s);
    int i=0;
    int sum1=0,sum2=0,sum;
    while (s[i]!='\0')
    {
        sum1=sum1+2*s[i];
        i=i+2;
    }
    printf("%d\n",sum1);
    i=1;

    while (s[i]!='\0')
    {
        sum2=sum2+s[i];
        i=i+2;
    }
    printf("%d\n",sum2);
    sum=sum1+sum2;
    printf("%d",sum);
    if(sum/10==0)
        printf("valid no");
        else
        printf("invalid no");
}
