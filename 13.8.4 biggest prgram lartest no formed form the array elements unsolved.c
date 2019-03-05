// writing a program to find the largest no formed form the elements of an array
// array having numbers containing multiple digits
// hence first of all we have to consider the first digit
// if the first digit was same we can go for the next digit and so. on
// for this we can do by using test cases
// and try to do it by the defining a function
//  so lets start
# include<stdio.h>
int great(int*,int);


int main()
{
int a,b,c,d,e,f,k,i,j,n,l;
int dcount,count,temp,dtemp,ddtemp;
int test;
//printf("Enter the no of test cases");
scanf("%d",&test);
for(k=0;k<test;k++)
{
    //taking the values as an input

    //printf("Enter the no. of elements you want to enter and then enter the number");
    scanf("%d",&n);
    int arr[n];
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    //printf("The array you entered is ");
    //for(j=0;j<n;j++)
    //{
    //    printf("\t%d",arr[j]);
    //}
    //call the function find the greatest number
    c=great(arr,n);



}
}
int great(int* arr, int n)
{
    int temp, power1,power2,d1,d2,k,count1,count2;
    int i,j,e,f,g,h,rem1,rem2,l;
    // short element by element
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            // comparing the first digit
            if(arr[i]<10&&arr[j]<10)
            {
                if(arr[i]<arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }


             //   printf("\t\t\t%d\t\t\t%d",arr[i],arr[j]);
//
          //  printf("\n");

            if(arr[i]>9||arr[j]>9)
            {
                // finding the first digit
                e=arr[i];
                g=arr[i];
                f=arr[j];
                h=arr[j];
            count1=0;
            count2=0;
            power1=1;
            power2=1;
            while(e!=0)
                {
                    rem1=e%10;
                    count1++;
                    e=e/10;

                }
             //  printf("%d",count1);
                while(f!=0)
                {
                    rem2=f%10;
                    count2++;
                    f=f/10;
                }
              //  printf("%d",count2);
              //  printf("%d",power1);
               // printf("%d",power2);
               power1=pow(10,count1);
               power2=pow(10,count2);
                                           /*while(count1>0)
                                            {
                                                power1=power1*10;
                                                count1--;
                                            }
                                            while(count2>0)
                                            {
                                                power2=power2*10;
                                                count2--;
                                            }*/


                             //            printf("ss\n");
              //  printf("ss%d",power1);
              // printf("ss%d",power2);

                // checking the first digit
                d1=(g-(g%(power1/10)))/(power1/10);
                d2=(h-(h%(power2/10)))/(power2/10);
               // printf("\t%d%d",d1,d2);
                while(d1==d2)
                {

                  power1=power1/10;
                  power2=power2/10;
                  d1=(g%power1-(g%(power1/10)))/(power1/10);
                d2=(h%power2-(h%(power2/10)))/(power2/10);
                }
               // printf("\t%d%d",d1,d2);
                //printf("\n");

                if(d1<d2)

                 {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }




            }
        }
    }

   // printf("The array we get is\n");
    for(k=0;k<n;k++)
    {
        printf("%d",arr[k]);
    }
}



