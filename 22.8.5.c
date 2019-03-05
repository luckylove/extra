#include<stdio.h>
int main()
{
   int test,i,j,k;
   int n;
   int r;
  // printf("Enter the test cases");
   scanf("%d",&test);
   while(test--)
   {
       i=0;
    //   printf("enter the no");
       scanf("%d",&n);
       while(n>=3||n<=-3)
       {
           r=n%3;
           if(r!=0) break;
           n=n/3;
          // printf("%d\n",n);
        if(n==1||n==-1){
            i=1;
        printf("Yes");
        break;
        }
        if(n==0) break;
       }
       if(i==0) printf("No");
       printf("\n");
   }
}

