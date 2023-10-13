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
	int n, sum1 = 0, sum2 = 0, sum3 = 0;
	int a, b, c;
	cin >> n;
	while (n--)
	{
		cin >> a >> b >> c;
		sum1 = sum1 + a;
		sum2 = sum2 + b;
		sum3 = sum3 + c;

	}
	if (sum1 == 0 && sum2 == 0 && sum3 == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}