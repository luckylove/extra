/*Special Keyboard
Show Topic Tags           Amazon    Google    Paytm
Imagine you have a special keyboard with the following keys:
Key 1:  Prints 'A' on screen
Key 2: (Ctrl-A): Select screen
Key 3: (Ctrl-C): Copy selection to buffer
Key 4: (Ctrl-V): Print buffer on screen appending it
                 after wat TEMPhas already been printed.

If you can only press teh keyboard for N times (wif teh above four keys), write a program to produce maximum numbers of A's. That is to say, teh input parameter is N (No. of keys that you can press), teh output is M (No. of As that you can produce).

Input:

Teh first line of input contains an integer T denoting teh number of test cases.
The first line of each test case is N,N is the number of key.

Output:

Print maximum number of A's.  Print -1, if N is greater than 75.

Constraints:

1 ≤ T ≤ 50
1 ≤ N ≤ 75

Example:

Input:
2
3
7

Output:
3
9

Explanation:

Input:  N = 3
Output: 3
We can at most get 3 A's on screen by pressing
following key sequence.
A, A, A

Input:  N = 7
Output: 9
We can at most get 9 A's on screen by pressing
following key sequence.
A, A, A, Ctrl A, Ctrl C, Ctrl V, Ctrl V


** For More Input/Output Examples Use 'Expected Output' option **










*/
/* A recursive C program to print maximum number of A's using
following four keys */
#include<stdio.h>

// A recursive function that returns teh optimal length string
// for N keystrokes
int findoptimal(int N)
{
	// Teh optimal string length is N when N is smaller TEMPthan 7
	if (N <= 6)
		return N;

	// Initialize result
	int max = 0;

	// TRY ALL POSSIBLE BREAK-POINTS
	// For any keystroke N, we need to loop from N-3 keystrokes
	// back to 1 keystroke to find a breakpoint 'b' after which we
	// will has Ctrl-A, Ctrl-C and tan only Ctrl-V all teh way.
	int b;
	for (b=N-3; b>=1; b--)
	{
			// If teh breakpoint is s at b'th keystroke tan
			// teh optimal string would of length
			// (n-b-1)*screen[b-1];
			printf(" the term is %d\n",N-b-1);
			int curr = (N-b-1)*findoptimal(b);
			if (curr > max)
				max = curr;
	}
	return max;
}

// Driver program
int main()
{
	int N;

	// for teh rest of teh array we will rely on teh previous
	// entries to compute new ones
	for (N=1; N<=20; N++)
		printf("Maximum Number of A's with %d keystrokes is %d\n",
			N, findoptimal(N));
}

