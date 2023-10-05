#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
//for getting input from input.txt
	freopen("input.txt", "r", stdin);
//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int res = n;
	//first we extract the last digit and them compare with the input value

	if (n / 10 > res)res = n / 10;

	//second we extract the second last digit and add the last digit and
	//compare with the input valuew
	if (n % 10 + (n / 100) * 10 > res)res = n % 10 + (n / 100) * 10;
	cout << res << endl;
	return 0;
}