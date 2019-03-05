# include<stdio.h>
int main()
{
    // sorting the elements of an array on the basis of frequency of occouring
    // first of all we have to find out the frequency of individual elements
    // then we have to arrange them in accending order
    // if having same frequency then we have to arrange in incresing order
    // first of all take an array
    int a,b,c,d,e,f,g,k,i,j,n;
    int dcount,count,temp,dtemp,ddtemp;
    int test;
    printf("Enter the test cases");
    scanf("%d",&test);
    long int sh[130][test];
    int gu[test];
    f=0;
    g=0;
    for(e=0;e<test;e++)
{

    printf("Enter the no of elements");
    scanf("%d",&n);
    gu[f]=n;
    f++;
    int arr[n];
    int brr[n];
    int crr[n];

    printf("Enter the elements of an array one by one");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
       // first of all we have to short the array in ascending  order
                 for(i=0;i<n;i++)
                 {
                     for(j=i;j<n;j++)
                     {
                         if(arr[i]>arr[j])
                         {
                             temp =arr[i];
                             arr[i]=arr[j];
                             arr[j]=temp;
                             }
                     }
                 }// now the shorted array we get is
                 printf("\n");
                  for(i=0;i<n;i++)
                    {
                        printf("\t%d",arr[i]);
                    }
                    a=arr[0];
                    k=0;
                    dcount=0;
                    for(i=0;i<n;)
                    {
                        count=1;
                        for(j=i+1;j<n;j++)
                        {
                            if(arr[j]==arr[i])
                            {
                                count++;
                            }
                            else
                                break;
                        }
                        crr[k]=count;
                        brr[k]=i;
                        i=i+count;
                        k++;
                        dcount++;
                    }
                    // the two array which we get is
                    printf("\n");
                    for(k=0;k<dcount;k++)
                    {
                        printf("%d\t",brr[k]);
                    }
                    printf("\n");
                    for(k=0;k<dcount;k++)
                    {
                        printf("%d\t",crr[k]);
                    }
                    // now we have to short the array in the same order
                    // means we have to short the frequency array crr[] and according to which we have to short brr[]
                for(i=0;i<dcount;i++)
                 {
                     for(j=i;j<dcount;j++)
                     {
                         if(crr[i]<crr[j])
                         {
                             temp =crr[i];
                             dtemp =brr[i];
                             crr[i]=crr[j];
                             brr[i]=brr[j];
                             crr[j]=temp;
                             brr[j]=dtemp;
                             }
                     }
                 }
                  printf("\n");
                    for(k=0;k<dcount;k++)
                    {
                        printf("%d\t",brr[k]);
                    }
                    printf("\n");
                    for(k=0;k<dcount;k++)
                    {
                        printf("%d\t",crr[k]);
                    }
                     printf("\n\n\n\n");
                     for(k=0;k<dcount;k++)
                     {
                         temp=crr[k];
                         if(crr[k+1]!=crr[k])
                         {
                             for(i=0;i<temp;i++)
                             {
                                 printf("%d",arr[brr[k]]);
                                 sh[g][e]=arr[brr[k]];
                                 g++;
                             }
                         }
                         else
                         {
                             count=1;
                             for(b=k;b<dcount-1;b++)
                             {
                              if(crr[b+1]==crr[b])
                              {
                                count++;
                              }
                              else
                                break;
                             }
                            // printf("\n%d\t\t\t",count);
                             //now we have to use count to again print brr in shorted form

                             for(c=0;c<count;c++)
                             {
                                 for(d=c+1;d<count;d++)
                                 {
                                     if(arr[brr[k+c]]>arr[brr[k+d]])
                                        {
                                        ddtemp=arr[brr[k+c]];
                                     arr[brr[k+c]]=arr[brr[k+d]];
                                     arr[brr[k+d]]=ddtemp;
                                     }
                                 }
                             }
                            // printf("\n\n\n");
                             for(j=0;j<count;j++)
                             {

                             for(i=0;i<crr[k];i++)
                             {
                                 printf("%d",arr[brr[k+j]]);
                                 sh[g][e]=arr[brr[k+j]];
                                 g++;
                             }
                             }
                             k=k+count-1;

                         }
                     }printf("\n\n%d",e);
}
printf("\n\n");
for(d=0;d<test;d++)
{
    printf("\t\t\t%d",gu[d]);
}
for(e=0;e<test;e++)
{
    for(d=0;d<gu[e];d++)
    {
        printf("\t%d",sh[d][e]);
    }
    printf("\n");
}
}

