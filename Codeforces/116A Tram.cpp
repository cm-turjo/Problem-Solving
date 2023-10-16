#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


int main()
{
#ifndef ONLINE_JUDGE
//for getting input from input.txt
	freopen("input.txt", "r", stdin);
//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	optimize();
	int n;
	cin >> n;
	int res = 0, res1 = 0;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		res1 -= a;
		res1 += b;
		res = max(res, res1);

	}
	cout << res << endl;
	return 0;
}