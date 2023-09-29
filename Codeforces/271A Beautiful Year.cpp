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


	int n, a, b, c, d;
	cin >> n;
	while (true)
	{
		n++;
		a = n / 1000;
		b = n / 100 % 10;
		c = n / 10 % 10;
		d = n % 10;
		if (a != b && a != c && a != d && b != c && b != d && c != d)
		{
			break;
		}

	}
	cout << n << endl;
	return 0;
}
