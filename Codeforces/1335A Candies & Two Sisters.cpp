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
	while (n--)
	{
		int a, ans = 0;
		cin >> a;
		if (a & 1)
		{
			ans = a / 2;
		}
		else
		{
			a--;
			ans = a / 2;
		}
		cout << ans << endl;
	}
	return 0;
}