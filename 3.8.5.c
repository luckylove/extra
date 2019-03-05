// to print the content of the two shorted array in single merged array
// by using the only the two arrays in which one array in merged in another
// one array is so big that it has the capacity to hold the elements of both the array
# include<stdio.h>
int main()
{
    int n,m,a,b,c,i,j,k;
    printf("Enter the no of elements in the array one and second");
    scanf("%d%d",&n,&m);
    int arr[n+m],brr[m];
    printf("Enter the elements of the first array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the elements of the second array");
    for(i=0;i<m;i++)
    scanf("%d",&brr[i]);
    printf("\n");
    for(i=0;i<n;i++)
    printf("   %d",arr[i]);
    printf("\n");
    for(i=0;i<m;i++)
    printf("   %d",brr[i]);
    // now first of all short both the array
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
    printf("\n");
    for(i=0;i<n;i++)
    printf("   %d",arr[i]);
     for(i=0;i<m;i++)
        for(j=i+1;j<m;j++)
            if(brr[i]>brr[j])
            {
                a=brr[i];
                brr[i]=brr[j];
                brr[j]=a;
            }
    printf("\n");
    for(i=0;i<m;i++)
    printf("   %d",brr[i]);
    // now we have to merge both the array





    i=0;
    j=0;
    k=0;
    while(k<m+n)
    {
    if(arr[i]<=brr[j])
    {
        abr[k]=arr[i];
        i++;
        k++;
    }
    if(arr[i]>brr[j])
    {
        abr[k]=brr[j];
        j++;
        k++;
    }
    }
    printf("\n\n\n");
     for(i=0;i<m+n;i++)
     printf("   %d",abr[i]);
}

