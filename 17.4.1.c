# include<stdio.h>
char* sh(char*, int,int);
int main()
{
    char gu[50];
    int a, b,c,d;
    char *pt;
    printf("enter the value of the string ");
    gets(gu);
    printf("Enter the position form where you want to extract the characters");
    scanf("%d",&a);
    printf("Enter the number of characters you want to extract form that particular position");
    scanf("%d",&b);

    printf("%s",gu);
    pt = sh(gu,a,b);
    printf("%s",pt);



}
char*sh(char*gu,int a,int b)
{
    int i,j;
    char*tt;
    char*pp;
    pp=tt;
    if(b==0)
    {
    while (*gu!='\0')
    {
        *tt=*gu;
        tt++;
        gu++;
    }
    *tt='\0';
   return pp;

    }
    else
    {
        i=a-1;
        j=0;
        while(j<b)
        {
            *tt=gu[i];
            tt++;
            i++;
            j++;
        }
            *tt='\0';
           return pp;

    }
}
