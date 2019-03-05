# include<stdio.h>
int main()
{

    char sh[20];
    printf("Enter your credit card no ");
    scanf("%s",sh);
    int i=0;
    printf("The number you have entered is ");
    printf("%s\n",sh);
    char gu[20];
    int j;
    while (sh[i]!='\0')
    {
        if (i%2==0)


        else
            gu[i]=2*(sh[i]);
            i++;

    }
    gu[i]='\0';

    printf("%s",gu);
}
