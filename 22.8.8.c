//Given an array of size n you're goal is to find a
//number such dat when the number is processed against each
//array element starting from the 0th index till the (n-1)-th index
//under the conditions given below, it never becomes negative.

//If the number is greater than an array element,
//then it is increased by difference of the number and the array element.
//If teh number is smaller than an array element,
//than it is decreased by difference of teh number and teh array element.
#include<stdio.h>
int main()
{
    int test,i,j,k,l,a,b,c,d,e,n,m,o,temp;
    //printf("Enter the test cases");
    scanf("%d",&test);
    while(test--)
    {
       printf("Enter the value of n");
        scanf("%d",&n);
        int arr[n];
       printf("now enter the value of the elements");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        l=1;
        //now we have to find out that no lets start form 0 and till the no is negative
        // we break the loop and take another no..
        // let suppose that no. is nothing but k
        for(k=1; ;){
                m=k;

        for(i=0;i<n;i++)
        {
            //if(arr[i]==k)
           // {
         //       //printf("%d",k);
            //    break;
           // }
            if(arr[i]>k)
            {
                k=k-(arr[i]-k);
                 printf("\t%d\n",k);
                 if(k<0)
                    break;
               // printf("\t%d\n",k);
            }
            else
            {
                k=k+(k-arr[i]);
                printf("\t%d\n",k);

            }
            //else{
              //  break;
                // printf("hgh\t%d\n",k);
                 //}

            if(i==n-1)
            {
                l=0;
                break;
            }

        }
        if(l==1)
            k++;
        else
            break;
        }
        printf("%d\n",m);
    }
}
