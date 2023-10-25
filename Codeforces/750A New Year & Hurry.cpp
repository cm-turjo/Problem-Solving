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
	int n, k;
	cin >> n >> k;

	int res = 240 - k;
	int cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		res -= 5 * i;

		if (res >= 0)
		{

			cnt++;



		}
		else break;
	}
	cout << cnt << endl;
	return 0;
}
