/* error why
# include<stdio.h>
int main()
{
    char name[100];
    char shubham[100];
    char gupta[100];
    printf("Enter the elements of he string");
    scanf("%[^\n]s    %[^\n]s    %[^\n]s",name,shubham,gupta);
    printf( "%s%s%s",name,shubham,gupta);
    }
*/
/*
# include<stdio.h>
int main()
{
    char name[100];
    char shubham[100];
    char gupta[100];
    printf("Enter the elements of he string");
    scanf("%[^\n]s",name);
    scanf("%[^\n]s",shubham);
    scanf("%[^\n]s",gupta);
    printf( "%s\n%s\ns",name,shubham,gupta);
    }




    */









    # include<stdio.h>
    int main()
    {

        char st1[100]= "love";
        char st2[100]="shuuugguugg";
        char *p2;
        char *p;
        char *p1="shubham";
        p2=st1;

        p=p1;
        p1="gud";
        printf("%s\n",p);
        printf("%s\n",p1);
          printf("%s\n",st1);
         printf("%s\n",st2);
          printf("%s\n",p2);
    }
