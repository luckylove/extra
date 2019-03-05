# include<stdio.h>
char* binary(unsigned long int  , char*);
int main()
{
    int a,b,c,d,e,i,j,k,l,count, count1,count2,test;
    printf("Enter the test cases");
    scanf("%d",&test);
    unsigned long int m,n;
    while(test--)
    {
        char arr1[1000],arr2[1000];
        char* pt1, pt2;
        printf("Enter the value of N and M");
        scanf("%lu%lu",&m,&n);
        printf("%d%d",m,n);
        pt1=binary(m,arr1);
       // pt2=binary(n,arr2);
        //printf("\n\t%s\t%s\n",arr1,arr2);
    }
}
char* binary(unsigned long int m,char* arr)
{
    int i=0;
    int r;
    unsigned long int ans=0;
    int n;
    n=m;
    int r1;
    while(m!=0)
    {
        r=m%2;
        r1=n%2;
        m=m/2;
       // if(r1==0)
        //    ans=1;
        ans=ans*10+r;
        arr[i]=r;
        i++;


    }
    arr[i]='\0';
    printf("\t\t\t%d",ans);
    return arr;
}
