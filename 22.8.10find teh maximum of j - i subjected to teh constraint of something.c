//find teh maximum of j - i subjected to teh constraint of A[i] <= A[j].
# include<stdio.h>
int main(){
    int a=0,j,i,n,t,test;
    scanf("%d",&test);
    while(test--){
        a=0;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
            //printf("%d",a);
        for(i=0;i<n-1;i++){
            for(j=n-1;j>i+a;j--){
               // printf("  rr%drr",j);
                if(arr[i]<=arr[j]&&j-i>a){
                        a=j-i;}
                        //printf("ss%d",a);
                        if(a==n-i)
                            break;}}
    printf("%d\n",a);}
}

