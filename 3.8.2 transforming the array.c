// write a program to transform the array
// zero is considered as the invalid characters
// now lets take the input form the user
# include<stdio.h>
int main()
{
    int a ,b,c,d,i,j,k,l;
    int n;
    printf("Enter the no.. of elements you want to enter");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // first of all i want to transform then go to swap for the zeros
    // transform only when the consecutive elements are valid
    // to check for this
    for(j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {
            k=j+1;
            while(k<n)
            {
                if(arr[k]!=0)
                {
                    if(arr[k]==arr[j])
                    {
                    arr[k]=0;
                    arr[j]=arr[j]*2;
                    break;
                    }
                    else
                        break;
                }
                else
                    k++;
            }
          }
          j++;
    }
        for(i=0;i<n;i++)
        {
            printf("    %d",arr[i]);
        }
        printf("\n\n");
        // now we want to print all the zeros in the end of the all the lines
        for(l=0;l<n;l++)
        {
            if(arr[l]==0)
            {
                k=l+1;
                while(k<n)
                {
                    if(arr[k]>0)
                    {
                        a=arr[k];
                        arr[k]=arr[l];
                        arr[l]=a;
                        break;
                    }
                    k++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("    %d",arr[i]);
        }













}
