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
	int var1 = 0, var2 = 0;
	while (n--)
	{
		int m, c;
		cin >> m >> c;
		if (m > c)var1++;
		else if (m < c)var2++;

	}
	if (var1 == var2)
	{
		cout << "Friendship is magic!^^" << endl;
	}
	else if (var1 > var2)
	{
		cout << "Mishka" << endl;
	}
	else cout << "Chris" << endl;
	return 0;
}
