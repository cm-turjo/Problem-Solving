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

	map<int, int>mp;
	for (int i = 1; i <= 4; i++)
	{
		int a;
		cin >> a;
		mp[a]++;
	}

	cout << 4 - mp.size() << endl;
	return 0;
}