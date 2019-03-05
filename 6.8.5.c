/*Given an array of size n containing positive integers n and a number k,
Teh absolute difference between values at indices i and j is |a[i] – a[j]|.
There are n*(n-1)/2 such pairs and you has to print teh kth smallest
 absolute difference among all these pairs.*/
 // here we simply first of  all find the difference between the elements of the array
 // we store the elements into separate array having n*(n-1)/2 elements
 // then we short the array we get
 // and print its kth smallest digit
 # include<stdio.h>
 int main()
 {
     int a,b,c,d,i,j,k,l,n;
     printf("Enter the no of elements you want to enter");
     scanf("%d",&n);
     printf("Enter the values one by one");
     int arr[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     printf("Now enter the value of kth smallest integer you want to find out");
     scanf("%d",&a);
     printf("Now the value you entered is \n");
     for(i=0;i<n;i++)
     {
         printf("%d\t",arr[i]);
     }
     int count=0;
    int brr[(n*(n-1))/2];
    k=0;
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
            if(arr[i]-arr[j]>0)
                brr[k]=arr[i]-arr[j];
            else
                brr[k]=arr[j]-arr[i];
            k++;
         }
     }
     printf("\nthe array brr you get is\n");
     for(k=0;k<(n*(n-1))/2;k++)
     {
         printf("%d\t",brr[k]);
     }
     // now we have to short the array brr
     // we use bubble short
     int temp;
     for(k=0;k<(n*(n-1))/2;k++)
     {
         for(l=k;l<(n*(n-1))/2;l++)
         {
           if(brr[l]<brr[k])
           {
               temp=brr[l];
               brr[l]=brr[k];
               brr[k]=temp;
           }
         }
     }
     printf("\nthe array brr you get is\n");
     for(k=0;k<(n*(n-1))/2;k++)
     {
         printf("%d\t",brr[k]);
     }
     printf("\n\nNow the kthe smallest integer which you want is %d   ---   ",brr[a-1]);




 }
