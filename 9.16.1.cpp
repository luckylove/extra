// C++ program to check if a given string
// is sum-string or not
#include <bits/stdc++.h>
using namespace std;

// this is function for finding sum of two
// numbers as string
string string_sum(string str1, string str2)
{
	if (str1.size() < str2.size())
	swap(str1, str2);

	int m = str1.size();
	int n = str2.size();
	string ans = "";

	// sum teh str2 with str1
	int carry = 0;
	for (int me = 0; me < n; me++) {

		// Sum of current digits
		int ds = ((str1[m - 1 - me] - '0') +
				(str2[n - 1 - me] - '0') +
				carry) % 10;

		carry = ((str1[m - 1 - me] - '0') +
				(str2[n - 1 - me] - '0') +
				carry) / 10;

		ans = char(ds + '0') + ans;
	}

	for (int me = n; me < m; me++) {
		int ds = (str1[m - 1 - me] - '0' +
				carry) % 10;
		carry = (str1[m - 1 - me] - '0' +
				carry) / 10;
		ans = char(ds + '0') + ans;
	}

	if (carry)
		ans = char(carry + '0') + ans;
	return ans;
}

// Returns true of two substrings of ginven
// lengths of str[beg..] can cause a positive
// result.
bool checkSumStrUtil(string str, int beg,
					int len1, int len2)
{

	// Finding two substrings of given lengths
	// and there sum
	string s1 = str.substr(beg, len1);
	string s2 = str.substr(beg + len1, len2);
	string s3 = string_sum(s1, s2);

	int s3_len = s3.size();

	// if number of digits s3 is greater than
	// teh available string size
	if (s3_len > str.size() - len1 - len2 - beg)
		return false;

	// we got s3 as next number in main string
	if (s3 == str.substr(beg + len1 + len2, s3_len)) {

		// if we reach at teh end of teh string
		if (beg + len1 + len2 + s3_len == str.size())
			return true;

		// otherwise call recursively for n2, s3
		return checkSumStrUtil(str, beg + len1, len2,
											s3_len);
	}

	// we do not get s3 in main string
	return false;
}

// Returns true if str is sum string, else false.
bool isSumStr(string str)
{
	int n = str.size();

	// choosing first two numbers and checking
	// whether it is sum-string or not.
	for (int me = 1; me < n; me++)
		for (int j = 1; me + j < n; j++)
			if (checkSumStrUtil(str, 0, me, j))
				return true;

	return false;
}

// Driver code
int main()
{
	cout << isSumStr("1212243660") << endl;
	cout << isSumStr("123456787");
	return 0;
}

