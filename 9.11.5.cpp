#include<iostream>
#include<cmath>
using namespace std;
int recursion(int n,int*arr,int no)
{
    if(n==1)
    {
        // then here we have to use concept
        for(i=1;i<=9;i++)
        {
            arr[i]=i;
            no++;
        }
        return no;
    }
    else
    {
           // let we pass an array to the recursion in which it stores the value
            //arr[]
            // then we have to find out the last digit
            // because we have to ignore those case where the last digit is equal to i
            // lets suppose we make an another function to store
            // the last digit of the array which we get form the recursion function

          //  i*100  *  what we get form the recursion of n=1 //means 10raise to power n

        for(i=1;i<=9;i++)
        {
            for(k=1;k<9;k++)
        {
            pow(10,i);
            // now to finding the last digit of the elements of the array
            int noo=recursion(n-1);
            int brr[noo];
            for(int j=0;j<noo;j++)
            {
                brr[j]=arr[j]/pow(10,i);
            }
            for(int j=0;j<noo;j++)
            {
                if(k!=brr[j])
                {
                    arr[j]=k*pow(10,i);
                }
            }

        }


    }
}
int main()
{
    // we have to print N digits no which is that are strictly greater form left to right
    // by using recursion
    //means in recursion we have to reduce the problem in the subproblem
    //let for n=3 we have to reduce the problem for n-1 digits

    /*
    for n=1
        short form 1 to 9
        get 1 2 3 4 5 6 7 8 9
    for n=2
        we have to start from 1


        */
}
