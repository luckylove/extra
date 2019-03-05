# include<stdio.h>
int main()
{
    // first of all we have to take one integer
    // here in program we only find the kth smallest number
    int k;
    long int n,a;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the number kth");
    scanf("%d",&k);
    //first of all we have to arrange the digits in ascending order
    // means we have to  find out the smallest no..
// to store the no smallest no i think we have to take an array
   int arr[50];
    int i,b,c,j,r,l,p,o;
    int count=0;
    a=n;
    i=0;
    while (a!=0)
    {
        r=a%10;
        arr[i]=r;

        a=a/10;
        i++;
        count++;

    }

    for(i=0;i<count;i++)
    {
        printf("%d",arr[i]);
    }
    // now we have to short the array accordingly to find the smallest no....
    // in order to short the array now we are using replacement form
    // this short technique is known as bubble short
    for(i=0;i<count;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(arr[i]>arr[j])
            {
                b=arr[i];
                arr[i]=arr[j];
                arr[j]=b;
            }
        }
    }
    printf("\n\n");
     for(i=0;i<count;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
//by now the array is converted into accending order
//now we have to arrange in such a form so that we can find the kth smallest no..

   // for(l=0;l<k;l++)
    {
      for(i=count-1;i>=0;i--)
      {
          if(arr[i-1]<arr[i])
            break;
      }
      // at that time arr[i] is the smallest no.. form the right
      // now we have to find out the just greatest no. form arr[i-1] towards arr[count-1]
      printf("%d\n",i);
      p=arr[i];
      for(o=count-1;o>=i;o--)
      {
          if(arr[o]<p)
            p=arr[o];
      }
      printf("%d\n\n\n",p);
      // to find out the index value of p
      for(o=count-1;o>=i;o--)
      {
          if(arr[o]==p)
            break;
      }
      printf("%d\n\n",o);
      //now we have to replace p and a[i-1]
      c=arr[i];
      arr[i]=arr[o];
      arr[o]=c;
      //now we have to short the remaining
      for(i=o;i<count;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(arr[i]>arr[j])
            {
                b=arr[i];
                arr[i]=arr[j];
                arr[j]=b;
            }
        }
    }
     for(i=0;i<count;i++)
    {
        printf("%d",arr[i]);
    }



    }













}
