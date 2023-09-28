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

	long long int cnt;
	cin >> cnt;
	while (cnt--)
	{
		long long int a, b, res, var1, var2;
		cin >> a >> b;
		if (a % b == 0)
		{
			cout << 0 << endl;


		}
		else
		{
			// b theke mod ta - korlei ans pawa jai
			cout << b - a % b << endl;
		}
	}
	return 0;
}

