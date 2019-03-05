/* c program to find the frequency of the characters in the string*/
# include<stdio.h>
int main()
{
    char sh[100];
    char gu;
    printf("Enter the value of the string");
    gets(sh);
    printf("Enter the character whose frequency of occourance you want  to find out");
    scanf("%c",&gu);

    int i=0;
    int j=0;

    while (sh[i]!='\0')
    {
      if ( sh[i]==gu)
            j++;
      i++;
    }
    printf("%d",j);
}
