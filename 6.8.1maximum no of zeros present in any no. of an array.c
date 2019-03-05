// writing a program to find out the maximum no of zero digits in the number form
//the array
// array is taken as an input and then
// each no is tested for the no of zero digits in it
// then the maximum no of zeros is the answer
// if their is no zero in any elements then print -1
// this is the whole moto of the program
// now lets start
# include<stdio.h>
int main()
{
    int a,b,c,d,e,i,k,j,l,n;
    printf("Enter the no. of elements in the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Now the array you entered is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
    // now we have to find out the no. of zeros present in the elements of the array one by one
    d=0;
    for(i=0;i<n;i++)
                {
                c=0;
                a=arr[i];
                while(a!=0)
                {
                    b=a%10;
                    if(b==0)
                    {
                        c++;
                    }
                    a=a/10;
                }
                if(d<c)
                {
                    d=c;
                }
                }
        if(d==0)
        {
            printf("their is no zero present in any of the digit");
        }
        else
        {
            printf("Maximum no of zeros present in all the no is ");
            printf("%d",d);
        }






}
