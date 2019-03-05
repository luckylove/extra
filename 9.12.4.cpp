// the program to psss the 2 dimentional array to the function in the c++ language
 // here this method is not globally used
    // in general we pass the 2 dimentional array to the function in the c++ programming
    //// by using the the pointer described later in the file


/*#include<iostream>
using namespace std;
const int c=10;
void fun(int arr[][c],int x,int y)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<arr[i][j]<<"   ";
        }
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    int arr[a][c];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    fun(arr,a,b);
}
*/



// the following program works only in the case of c language
// and n is declared before the array is declared in the function
// The following program works only if you're compiler is C99 compatible.

/*
#include <stdio.h>

// n must be passed before the 2D array
void print(int m, int n, int arr[][n])
{
    int me, j;
    for (me = 0; me < m; me++)
      for (j = 0; j < n; j++)
        printf("%d ", arr[me][j]);
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3, n = 3;
    print(m, n, arr);
    return 0;
}

*/



// here is how we declare the 2 dimentional array to the pass to the funciotn as a pointer
// in the c++ programming
  // now this is quite a lengthy process so try to avoid it by using certain assumption

#include <stdio.h>
void print(int *arr, int m, int n)
{
    int me, j;
    for (me = 0; me < m; me++)
      for (j = 0; j < n; j++)
        printf("%d ", *((arr+me*n) + j));
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3, n = 3;

    // We can also use "print(&arr[0][0], m, n);"
    print((int *)arr, m, n);
    return 0;
}
