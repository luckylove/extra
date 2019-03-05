#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int t1;
	for(t1=0;t1<t;t1++)
	{
		int N;
		scanf("%d",&N);
		int k;
		scanf("%d",&k);
		int j=0;unsigned long long int count=k;
		unsigned long long int temp=1;int j1;int l=1000000000;
		for(j1=2;j1<=N;j1+=2)
		{
			j=j1/2-1;
			temp=temp%l;
			temp=temp*(k-j);
			count=(temp%l+count%l)%l;

		}

		temp=1;
		for(j1=3;j1<=N;j1+=2)
		{
			j=j1/2-1;
			temp=temp%l;
			temp=temp*(k-1-j);
			count=((temp*k)%l+count%l)%l;
		}
		printf("%lld\n",count);
	}

}
