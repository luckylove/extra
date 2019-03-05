// now we have to write a program in which a no of no's was there
// and a value k
// we have to check that whether we can form a pair of no. among the given no such that
// all the pairs are divisible by the number k
// first of all we have to take an input then
// form a pair then check whether it is divisible by k or not
// and return either True or False
// now lets start
# include<stdio.h>
int main()
{
    int i,k,j,l,n,m;
    int a,b,c,d;
    printf("Enter the no of no's you want to enter");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values one by one");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of k");
    scanf("%d",&k);
    printf("Now the value you entered is \n");
    {
        for(i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    int sum=0;
    int brr[n];
    // now comes to the main program
    // first of all make the pairs
    // pairs of 2
    // but their is a problem because we cannot check for the single pair may be it form pair with some other pair
    // we first find out that if n is odd pair not formed
    if(n%2!=0)
    {
        printf("False");
    }
    else
    {// if the sum of all the no. is not divisible by the k then then pairs is not divisible by k
        // so we first find out the sum
        for(i=0;i<n;i++)
        {
            sum =sum+arr[i];
        }
        if(sum%k!=0)
        {
            printf("Falsee");
        }
        else
        {//now in this case we have to divide all the no to k
            // and then check for the opposite cases that it their sum forms to be k with any other no
            // for this we can use an another array brr
            // to store the value of arr[]/k
            for(i=0;i<n;i++)
            {
                brr[i]=arr[i]%k;
            }
            for(i=0;i<n;i++)
            {
                if(brr[i]!=0)// here we check because of element is zero then it want k which is not there
                {
                    for(j=i;j<n;j++)
                    {
                        if(brr[j]==k-brr[i])// if this condition is possible then be may deselect the two value because their match is found
                            // so we call then zero
                        {
                            brr[i]=0;
                            brr[j]=0;
                            break;
                        }
                    }
                }
            }
            //now we can say that if the sum of brr does not eual to zero then ti may false else true
            sum=0;
            for(i=0;i<n;i++)
            {
                sum =sum+brr[i];
            }
            if(sum==0)
            {
                printf("True");
            }
            else
            {
                printf("Falseee");
            }

        }
    }
}
