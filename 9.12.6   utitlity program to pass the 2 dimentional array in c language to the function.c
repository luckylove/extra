// passing 2 Dimentional array to the function in the c language

// this program works only in the c language but now in the  c++ language
    // here n much be declared before declaring the array

// The following program works only if you're compiler is C99 compatible.
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
