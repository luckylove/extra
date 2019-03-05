/*

# include<stdio.h>
# include<string.h>
int main()
{
    char *str1="United";
    char *str2="Front";
    char *str3;
    str3=strcat(str1,str2);
    str3++;
    *str3='\0';
    printf("%s\n",*str3);
    return 0;
}
*/
/* question no b of the error of the string in which in place of %d we write %s and arr in place of a particular elements */
/* error comes*/
# include<stdio.h>
int main()
{
    int arr[]={'A','B','C','D'};
    int i;
    for(i=0;i<=3;i++)
        printf("%s\n",arr);
        printf("\n");
        return 0;

}
