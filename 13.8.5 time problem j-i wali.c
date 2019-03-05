# include<stdio.h>
int main(){
    int a=0,j,i,n,t,test;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n-1;i++)
                for(j=i+1;j<n;j++){
                if(arr[i]<=arr[j]&&j-i>a)
                        a=j-i;
                        if(a==n-i)
                            break;}
    printf("%d\n",a);}
}
