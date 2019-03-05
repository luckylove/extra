// now our task is to find out the kth smallest elements form the unshorted array
// the same question we have done for the shorted array'
 # include<stdio.h>
 int main()
 {
     int a,b,c,d,i,j,k,l,n;
     printf("Enter the no of elements you want to enter");
     scanf("%d",&n);
     printf("Enter the values one by one in unshorted form");
     int arr[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     printf("Now enter the value of kth smallest integer you want to find out");
     scanf("%d",&k);
     printf("Now the value you entered is \n");
     for(i=0;i<n;i++)
     {
         printf("%d\t",arr[i]);
     }
     // now we have to find out the n kth smallest term without shorting the array
     // first of all we find out the first smallest term
     a=arr[0];
     b=0;
     for(j=0;j<n;j++)
            {

            for(i=0;i<n;i++)
                     {
                         if(a>arr[i]&&arr[i]>b)
                         {
                             a=arr[i];
                         }
                     }
                     // now we have to find out the frequency of it
                     // let call that sabse chota no be b
                     b=a;
                     int count=0;
                     for(i=0;i<n;i++)
                     {
                         if(arr[i]==a)
                         {
                             count++;
                         }
                     }
                     // now we call give a to the largest value of this array so that one more cycle is takes place
                     for(i=0;i<n;i++)
                     {
                         if(a<arr[i])
                         {
                             a=arr[i];
                         }
                     }
                     // check for k
                     if(k>count)
                     {
                    k=k-count;
                    // now we call all the no to be zero so that they will not cause any problem
                     }
                     else{
                        printf("kth smallest digit is %d",b);
                        break;}
                 }
 }
