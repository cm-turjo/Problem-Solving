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
	int a;
	cin >> n >> a;
	for (int i = 0; i < a; i++)
	{
		int x;
		x = n % 10;//check the last digit of the number zero or not
		//simple implementation problem
		if (x != 0)
		{
			n--;
		}
		else
		{
			n = n / 10;
		}
	}
	cout << n << endl;
	return 0;
}
