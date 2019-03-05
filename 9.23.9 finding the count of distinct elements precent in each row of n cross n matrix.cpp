// a n cross n matrix is given a we have to find out count of all the dintinct elemtent in the
// any element which is present in all the rows of the matrix and print the count
#include<iostream>
using namespace std;



int main()
{
    int test,n1,n2,n,i,j,k,l,m,a,b,c;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        // now we have to find out the elements by elements
        // i think 3 for loops we have to use
        // and also we have to check whether the element we are using for something somethink
        // is its first time or it is repeated
       int tocount=0;
       int c=0;
       int d=0;
       // first of all take the first elements of the first row
       for(l=0;l<n;l++)
       {
          // arr[0][l];
           for(m=0;m<l;m++)
           {
               if(arr[0][m]==arr[0][l])   // it means this element is repeated we check for this element perviously
               {
                   c=1;
                 break;
               }
           }
           if(c!=1)
           {
            // now we have to check for the remaining rows
            for(i=1;i<n;i++)
            {
                d=0;
                for(j=0;j<n;j++)
                {
                  if(arr[i][j]==arr[0][l])
                  {
                      d=1;
                      break;
                  }
                }
                if(d!=1)
                {
                    break;
                }
                if(i==n-1&&d==1)
                {
                    tocount++;
                }
            }
           }
       }

      /* for(j=0;j<n;j++)
        {
            cout<<arr[0][j]<<" ";
        }*/
        cout<<tocount<<endl;
    }
}
