/* output question of the exercise */
/*

# include<stdio.h>
int main()
{
    char s[]="Get organised! learn C!!";
    printf("%s\n",&s[2]);
    printf("%s\n",s);
    printf("%s\n",&s);
    printf("%c\n",s[2]);
    return 0;
}
*/
/* ques 3 output of the c programming of the chapater srings */
/*
# include<stdio.h>
int main()
{
    char s[]="No two viruses work similarly";
    int i=0;
    while(s[i]!='\0')
    {
        printf("%c%c\n",s[i],*(s+i));
        printf("%c%c\n",i[s],*(i+s));
        i++;
    }
    return 0;
}*/


/* ques 4*/
/* error run time error comes*/

# include<stdio.h>
int main()
{
    char s[]="Churchagate : no chruch no gate";
    char t[25];
    char *ss,*tt;
    ss=s;
    while(*ss!='\0')
        *tt++=*ss++;
    printf("%s\n",*ss);
    return 0;
}
