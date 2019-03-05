#include <stdio.h>
int findsum(int n)
{
    int i=((n+1)*(n))/2 ;
    int summ=1;
    int j;
    for(j=0;j<n;j++)
    {
        summ=summ*i;
        i--;
    }
    printf("%d    %d\n\n",summ,i);
    return summ;
}

 int  recursion(int n)
 {
     int i,j,k,l;
     int sum;
     if(n>=1)
     sum=findsum(n)+recursion(n-1)+sum;
     else if(n==1)
     sum=0;
     else
     return 0;

     return sum;
 }


int main() {
	//code


	int a,b,c,i,j,k,test,n;
	scanf("%d",&test);
	while(test--)
	{
	    scanf("%d",&n);
	    printf("%d",recursion(n));
	    printf("\n");
	}
	return 0;
}
