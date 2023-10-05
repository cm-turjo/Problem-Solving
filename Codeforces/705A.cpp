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

	for (int i = 1; i < n; )
	{

		if (i == n)break;
		cout << "I hate that ";
		i++;

		if (i == n)break;
		cout << "I love that ";
		i++;


	}
	if (n % 2 == 0)cout << "I love it";
	else cout << "I hate it";
	return 0;
}