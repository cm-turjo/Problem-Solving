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
	int res = 0;

	//every time the amount is divided into corresponding bills and keep them count
	//finally print the total minimum number of bills

	if (n >= 100)
	{
		res += n / 100;
		n = n % 100;
	}

	if (n >= 20)
	{
		res += n / 20;
		n = n % 20;
	}

	if (n >= 10)
	{
		res += n / 10;
		n = n % 10;
	}
	if (n >= 5)
	{
		res += n / 5;
		n = n % 5;
	}
	if (n >= 1)
	{
		res += n / 1;

	}
	cout << res << endl;
	return 0;
}

