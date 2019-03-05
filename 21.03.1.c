/* To check that whether the number is armstrong number or not*/
/*
# include <stdio.h>
# include <math.h>
 void main(){
    int a,b,c=0,n;
    printf( "Enter one number ");
    scanf("%d",&a);
    b=a;
    while (a>0){
        n=a%10;
        c = c + pow(n,3);
        a = a/10;}
    if (c==b)
    printf("armstrong number");
    else
        printf("not an armstrong number");
        getch();
}*/


  /* Write a program to check whether a number is perfect number or not*/
  # include <stdio.h>
  main(){
      int a=0,n,i,j;
      printf("Enter one number");   scanf("%d",&n);
      for ( i=1;i<=n/2;i++){
          if (n%i==0)
            a=a+i;
      }
      if ( a==n)
        printf("Perfect number");
      else
        printf("Not a perfect number");
  }


















