/*Possible words from Phone digits
Show Topic Tags             Amazon    Flipkart

Given a keypad as shown in diagram, and a n digit number, list all words which are possible by pressing these numbers.



Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N,N is the number of digits.
The second line of each test case contains D[i], N number of digits.

Output:

Print all possible words from phone digits with single space.

Constraints:

1 ≤ T ≤ 10
1 ≤ N ≤ 5
2 ≤ D[i] ≤ 9

Example:

Input
1
3
2 3 4

Output
adg adh adi aeg aeh aei afg afh afi bdg bdh bdi beg beh bei bfg bfh bfi cdg cdh cdi ceg ceh cei cfg cfh cfi
*/

#include<iostream>
using namespace std;
void fun2(int*crr,int n,int j,int k=0)
{
    if(k<=n-1)
        return;

    cout<<(char)(crr[k]+97+j);
    cout<<endl;
    fun2(crr,n,j,k++);
}
void fun1(int*crr,int n,int*arr,int i,int j=0)
{
    if(i<0)
        return;

    if(arr[i]==0)
    {
       i=i-1;
       j=0;
    }
    fun2(crr,n,j) ;// printout the first term
    arr[i]--;
    fun1(crr,n,arr,i,j++);

}
void fun(int*brr,int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        if(brr[i]!=7||brr[i]!=9)
        {
            arr[i]=3;
        }
        else
        {
            arr[i]=4;
        }
    }
    int crr[n];
    crr[0]=0;
    for(int i=1;i<n;i++)
    {
        crr[i]=crr[i-1]+arr[i-1];
    }

    fun1(crr,n,arr,n-1);// second n denotes the no of terms

}

int main()
{
    int i,j,k,b,c;
    int test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
       int brr[n];

       for(i=0;i<n;i++)
       {
           cin>>brr[i];
       }

        fun(brr,n);

    }
}

