// to arrange the even no. of and array at even position and odd no. at the odd position
// if no is remaining of the same type they are printed as it is
// lets start
# include<stdio.h>
int main()
{
    int a,b,c,i,k,j,n;
    printf("Enter the no. of numbers you want to enter ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the no. one by one");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The no . you have entered is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    // to arrange in the order
    // lets take one more array of the same order
    int brr[n];

    int even=0;
    int odd=0;
    // first of all we have to find out the no. of even and odd no. in total in the array
    // so for this we can do
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    // now we have to find out which is greater
    // which helps us to find the no. of points the loops going as even odd even odd
    // let it be num
    int num;
    num=(even<odd?even:odd);

    printf("\n%d\n",num);
           j=0;
           k=1;
            for(i=0;i<n&&(j<num*2||k<num*2);i++)
            {
                if(arr[i]%2==0)//check for the even
                {
                    brr[j]=arr[i];
                    j=j+2;
                }
                else
                {
                brr[k]=arr[i];
                k=k+2;
                }
            }// till now the filling is done of equal no of even and odd numbers
            // but if the even or odd no are greater then till the less number whether even or odd the no are arranged in alternate fasion but after that
            // so we first find the no which is greater
            // and by how much
            // then if even no are greater then it means till the no of odd number present the filling are done in alternate order
            //and the extra even no is remaining so we have to arrange them
            // for this we start with the back side and the extra even no are assigned to new array form the back side
            // similarly we done for the odd no if odd no. are greater than the even no/
        j=n-1;
        int count;
        if(even>odd)
        {
            count=even-num;
            printf("\n%d\n\n\n",count);
            for(i=n-1;i>=0&&count>0;i--)//even-num/2 even no. is still remaining in the array which is unfixed
            {
                if(arr[i]%2==0)
                {
                    brr[j]=arr[i];
                    j--;
                    count--;
                }
            }
        }
        if(odd>even)
        {
            count=odd-num;
               printf("\n%d",count);
            for(i=n-1;i>=0&&count>0;i--)//even-num/2 even no. is still remaining in the array which is unfixed
            {
                if(arr[i]%2!=0)
                {
                    brr[j]=arr[i];
                    j--;
                    count--;
                }
            }
        }



            printf("\n");
            for(i=0;i<n;i++)
            {
                printf("%d\t",brr[i]);
            }


}
