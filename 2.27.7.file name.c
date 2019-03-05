/* write a program to enter the no.and print its wording without using if or switch*/
# include<stdio.h>
int main()
{
    int i=0,j,a,n;
  char arr[][10]={"zero","one","two" , "three", "four" , "five" ,"six" ,"seven", "eight" ,"nine"};
  printf("Enter any number");
  scanf("%d",&a);
        int sh[10];
        while(a!=0)
        {
        n=a%10;
        sh[i]=n;
        a=a/10;
        i++;
        }
        j=i-1;
        for(j;j>=0;j--)
            printf("%s\n",arr[sh[j]]);
}





