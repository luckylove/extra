#include<iostream>
using namespace std;
# define MAX 500
int multiply(int x, int arr[], int size)
{
	int carry = 0; // Initialize carry
    for (int i=0; i<size; i++)
	{
		int prod = arr[i] * x + carry;
		arr[i] = prod % 10;
		carry = prod/10;
	}

   while (carry)
	{
		arr[size] = carry%10;
		carry = carry/10;
		size++;
	}
	return size;
}


void factorial(int n)
{
	int arr[MAX];

	arr[0] = 1;
	int size = 1;

	// Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
	for (int x=2; x<=n; x++)
		size = multiply(x, arr, size);


	for (int i=0; i<size; i++)
    {
        if(arr[i]!=0){
            cout<<arr[i]<<endl;
            break;
            }
    }
}


int main()
{
      int test;
    int n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        factorial(n);


    }
}

