# include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k,l;
    int n,m;
    printf("Enter the no. of rows and column of the matrix");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    printf("Enter the elements of the matrix");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&arr[i][j]);
        printf("the matrix you have entered is \n");
        for(i=0;i<n;i++)
        {

        for(j=0;j<m;j++)
            printf("%10d",arr[i][j]);
            printf("\n");
        }
    printf("The matrix you have entered in spiral form is ");

    a=0;
    b=0;

    while ((a<=n-1-a)&&(b<=m-1-b))
    {


        for(i=b;i<m-b;i++)
            printf("%5d",arr[a][i]);
            printf("\n\n");
        for(j=1+a;j<n-a;j++)
            printf("%5d",arr[j][m-1-a]);
              printf("\n\n");
        for(i=m-2-b;i>=b;i--)
            printf("%5d",arr[n-1-b][i]);
              printf("\n\n");
        for(j=n-2-a;j>a;j--)
            printf("%5d",arr[j][b]);
              printf("\n\n");



          printf("\n\n");
            printf("\n\n");
                    a++;
                    b++;


    }

}
