# include<stdio.h>
int main()
{
    int i=0;
   // writing a program to print the no. of an array in alternating positive or negative order or sence
   // first of all we take an input form the user  in the array form
   int a;
   printf("Enter the no. of numbers you want to enter");
   scanf("%d",&a);
   int arr[a];
   // taking the input for the array
   printf("Enter the elements ");
   for(i=0;i<a;i++)
   {
       scanf("%d",&arr[i]);
   }
    for(i=0;i<a;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
   int c=0,d=0,e,f,j;
   while(d<a)
    {

                if(c==0)
                    {
                        if(arr[d]<0)
                        {
                            for(j=d+1;j<a;j++){
                                if(arr[j+1]>0)
                            {
                                f=arr[j+1];
                                arr[j+1]=arr[d];
                                arr[d]=f;
                                printf("%d\n\n\n",arr[d]);
                                for(i=0;i<a;i++)
                                {
                                printf("%d",arr[i]);
                                }
                                break;}

                            }
                        }
                        else{
                        printf("%d\n\t\n",arr[d]);}
                        c++;
                        d++;
                    }
                    if(c==1)
                    {
                      if(arr[d]>0)
                        {
                            for(j=d+1;j<a;j++){
                                if(arr[j+1]<0)
                            {
                                f=arr[j+1];
                                arr[j+1]=arr[d];
                                arr[d]=f;
                                 printf("%d\n\n\n",arr[d]);
                                 for(i=0;i<a;i++)
                                    {
                                    printf("%d",arr[i]);
                                        }
                                break;}

                            }
                        }
                        else{
                        printf("%d\n\t\n",arr[d]);}
                        c--;
                        d++;
                    }

    }
    for(i=0;i<a;i++)
    {
        printf("%d",arr[i]);
    }
}
