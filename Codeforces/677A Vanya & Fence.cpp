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
	int n, h;
	cin >> n >> h;
	int arr[n];
	int res = n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > h)res++;
	}
	cout << res << endl;
	return 0;
}

