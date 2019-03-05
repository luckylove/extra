// how to find out all the subsets of the given set in lexicographical order
// that is finding the smallest character then replace it with the first character and the print it
#include<iostream>
using namespace std;
void swapp(char* A, char* B)
{
    char temp;
    temp=*A;
    *A=*B;
    *B=temp;
}
void swaparray(char arr[],int l, int r)
{
    if(l==r)
    {
        cout<<arr<<" ";
        return ;
    }
    int i,j,k,no;
    char s,ss;
    char temp;
       for(k=l;k<r;k++)
        {

                ss=arr[k];
                no=k;
                for(j=0+k;j<r;j++)
                {
                    if(ss>arr[j])
                    {
                        swapp(&ss,&arr[j]);
                      no=j;
                    }
                }
                swapp(&arr[l],&arr[no]);
                cout<<arr[l]<<endl;
                swaparray( arr, l+1,r);
    }

}
int main()
{
    char arr[]="ABC";
    swaparray(arr,0,3);
}
