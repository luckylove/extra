// replacing the word of the given string with some other word given by the user
# include<stdio.h>

# include<string.h>
int main()
{
    char gu[1000];
    char sh[1000];
    char ss[1000];
    int test, i,j,k,a,b,c,d;
    int count;
    //printf("Enter the test cases");
    scanf("%d",&test);
    //printf("\t%d\n",test);
    fflush(stdin);

   while(test--)
    {
         scanf("\n%[^\n]s",sh);
	    scanf("\n%s",gu);
	    scanf("\n%s",ss);
   // gets(sh);
         // we can also use
        //scanf("[^\n]",&sh);
        //scanf("[^\n]",&gu);
        //scanf("[^\n]",&ss);
    //gets(gu);
    //gets(ss);
       // puts(sh);
        //printf("\n");
       // puts(gu);
       // printf("\n");
       // puts(ss);
        i=0;
        j=0;
        a=0;

        while(gu[a]!='\0')
        {
            a++;
        }

        while(sh[i]!='\0')
            {
                k=i;
                j=0;
                while(gu[j]!='\0')
                {
                  if(sh[k]!=gu[j])
                        break;
                  k++;
                  j++;
                }
                if(gu[j]!='\0')
                {
                    printf("%c",sh[i]);
                    i++;
                }
               // printf("\n");
               if(gu[j]=='\0')
                {
                    printf("%s",ss);
                    i=i+a;
                }

            }
             fflush(stdin);
            printf("\n");
            }
}
