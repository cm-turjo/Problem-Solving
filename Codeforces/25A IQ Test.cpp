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
	int n, even = 0, odd = 0;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
		if (a % 2 == 0)even++;
		else odd++;
	}
	//First we count the number of odd & even to check which type of number is
	//unique in terms of randomness
	//then we iterate the vector and as it is 1 position index
	//we increment the value of i while printing
	for (int i = 0; i < v.size(); i++)
	{
		if (odd == 1)
		{
			if (v[i] % 2 == 1)
			{	cout << i + 1 << endl;
				return 0;
			}
		}
		if (even == 1)
		{
			if (v[i] % 2 == 0) {
				cout << i + 1 << endl;
				return 0;
			}
		}
	}
}