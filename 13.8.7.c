// write a program to change the string according to the condition given
// if first letter is capital letter then change to capital letter string
// else check to small letters string
# include<stdio.h>
# include<string.h>
int main()
{
    int test,i,j,k,l;
    scanf("%d",&test);
    while(test--)
    {
        char st1[10000];
        //printf("Enter one string");
        fflush(stdin);
        scanf("%[^\n]s",st1);
        i=0;
        if(st1[i]<=90&&st1[i]>=65)
        {
            // means the first letter is capital letter
            for(j=0;j<strlen(st1);j++)
            {
                if(st1[j]>=97&&st1[j]<=122)
                {
                    st1[j]=st1[j]-32;
                }
            }
        }
        else
        {
            // means the first letter is small letter
             for(j=0;j<strlen(st1);j++)
            {
                if(st1[j]>65&&st1[j]<=90)
                {
                    st1[j]=st1[j]+32;
                }
            }

        }
        printf("%s",st1);
        printf("\n");

    }
}
