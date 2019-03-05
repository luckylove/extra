#include <stdio.h>
void printarr(int *arr, int n,int i)
{
    if(i<n/2)
    {
    printf("%d %d ",arr[i],arr[i+n/2]);
    printarr(arr,n,++i);
    }
    printf("shubham");
}
int main() {
	int i,n,test,j;
	//printf("Enter the test cases");
	scanf("%d",&test);
	while(test--)
	{
	   // printf("Enter the value of n");
	    scanf("%d",&n);
	    int arr[n];
	   // printf("Enter the elemtnet of the array one by one");
	    i=0;
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&arr[j]);
	    }
	    printarr(arr,n,i);
        if(n/2!=0)
    {
        printf("%d ",arr[n-1]);
    }
	    printf("\n");
	}
	return 0;
}
