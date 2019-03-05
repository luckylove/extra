#include<stdio.h>
#include<math.h>
# include<string.h>
int main()
{
    int a,c,d;
    char b[10];
    b[0]=0;
   // printf("Enter the value of any integer");
    scanf("%d",&a);
    getchar();
    //printf("enter the value of any integer");
    scanf("%[^\n]d",&b);
    //printf("%s\n",b);
    if(b[0]=='\0'){
     c=pow(a,2);
     printf("%d",c);
    // printf("ss");
    }
    else
    {
   d=atoi(b);
    //printf(" d is %d\n",d);
    c=pow(a,d);
    printf("%d",c);
    }
}
