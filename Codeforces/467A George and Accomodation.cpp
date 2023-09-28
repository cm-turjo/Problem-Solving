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
	while (n--)
	{
		int p, q;
		cin >> p >> q;
		//capacity-current people er diff
		//2 er cheye beshi holei 2 jon eksathe thakte parbe
		if ((q - p) >= 2)res++;
	}
	cout << res << endl;
	return 0;
}
