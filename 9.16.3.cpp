#include<stdio.h>
#include<iostream>
// A O(n^2) time and O(n^2) extra space method for Pascal's Triangle
void printPascal(int n)
{
int arr[n][n]; // An auxiliary array to store generated pscal triangle values

// Iterate through every line and print integer(s) in it
for (int line = 0; line < n; line++)
{
	// Every line has number of integers equal to line number
	for (int me = 0; me <= line; me++)
	{
	// First and last values in every row are 1
	if (line == me || me == 0)
		arr[line][me] = 1;
	else // Other values are sum of values just above and left of above
		arr[line][me] = arr[line-1][me-1] + arr[line-1][me];
	printf("%d ", arr[line][me]);
	}
	printf("\n");
}
}
// Driver program to test above function
int main()
{
int n = 7;
printPascal(n);
return 0;
}
