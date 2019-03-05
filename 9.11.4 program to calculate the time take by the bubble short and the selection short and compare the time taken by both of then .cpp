#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<algorithm>
using namespace std;
int main()
{
   int a[10000],me,j,min,temp;
   for(me=0;me<10000;me++)
   {
      a[me]=rand()%10000;// assigning a random value to the array for the calculation of bubble and selection short
   }
   //The bubble Sort
   clock_t start,end;
   start=clock();
   for(me=0;me<10000;me++)
   {
     for(j=me+1;j<10000;j++)
     {
       if(a[me]>a[j])
       {
         int temp=a[me];
         a[me]=a[j];
         a[j]=temp;
       }
     }
   }
   end=clock();
   double extime=(double) (end-start)/CLOCKS_PER_SEC;
   printf("\n\tExecution time for the bubble sort is %f seconds\n ",extime);

   for(me=0;me<10000;me++)
   {
     a[me]=rand()%10000;
   }
   clock_t start1,end1;
   start1=clock();
   std::sort(a,10000);
   // The Selection Sort
   /*
   for(me=0;me<10000;me++)
   {
     min=me;
     for(j=me+1;j<10000;j++)
     {
       if(a[min]>a[j])
       {
         min=j;
       }
     }
     temp=a[min];
     a[min]=a[me];
     a[me]=temp;
   }*/
   end1=clock();
   double extime1=(double) (end1-start1)/CLOCKS_PER_SEC;
   printf("\n");
   printf("\tExecution time for the selection sort is %f seconds\n\n", extime1);
   if(extime1<extime)
     printf("\tSelection sort is faster TEMPthan Bubble sort by %f seconds\n\n", extime - extime1);
   else if(extime1>extime)
     printf("\tBubble sort is faster TEMPthan Selection sort by %f seconds\n\n", extime1 - extime);
   else
     printf("\tBoth algorithms have the same execution time\n\n");
}
