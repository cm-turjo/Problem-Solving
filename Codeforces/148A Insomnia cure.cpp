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
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;

	int cnt = 0;
	for (int i = 1; i <= d; i++)
	{
		//just simple intuition
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)cnt++;
	}
	cout << cnt << endl;
	return 0;
}
