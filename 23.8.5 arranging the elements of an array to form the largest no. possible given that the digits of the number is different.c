// program to print the elements of the array  to form the largest no. possible
// the problem with this code is that the no. of digits in different no is different and ..
//and we have to short it according to the digits
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,j,i,k,l;
    int m,n,temp,temp1,power1,power2,test,a1,b1;
    int ansa,ansb;
    //printf("Enter the test cases");
    scanf("%d",&test);
    while(test--)
    {
       // printf("Enter the no. of no. you want to enter");
        scanf("%d",&n);
       // printf("Now enter the no. one by one");
        int arr[n];
        for(i=0;i<n;i++)
        {
         scanf("%d",&arr[i]);
        }
       // for(i=0;i<n;i++)
       // {
       //  printf("%d",arr[i]);
       // }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                // one by one we have to check
                a=a1=arr[i];
                b=b1=arr[j];
                power1=power2=1;
                l=m=0;
               // printf("TT");
                while(a1!=0)
                {
                    l++;
                    a1=a1/10;
                }
                while(b1!=0)
                {
                    m++;
                    b1=b1/10;
                }
                //printf("TT");
                while(l>0)
                {
                    power1=power1*10;
                    l--;
                }
                while(m>0)
                {
                    power2=power2*10;
                    m--;
                }
               // printf("TT");
                ansa=a*power2+b;
                ansb=b*power1+a;
               // printf("%dT%d\n",ansa,ansb);
                if(ansa<ansb)
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }


            }
        }
          for(i=0;i<n;i++)
          {
           printf("%d",arr[i]);
           }
           printf("\n");
    }
}
