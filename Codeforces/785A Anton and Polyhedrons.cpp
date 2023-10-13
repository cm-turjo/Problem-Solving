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
	int ans = 0;
	while (n--)
	{
		string s1;
		s1.clear();
		cin >> s1;
		if (s1 == "Icosahedron")
		{
			ans += 20;
		}
		else if (s1 == "Cube")
		{
			ans += 6;
		}
		else if (s1 == "Tetrahedron")
		{
			ans += 4;
		}
		else if (s1 == "Dodecahedron")
		{
			ans += 12;
		}
		else if (s1 == "Octahedron")
		{
			ans += 8;
		}
	}
	cout << ans << endl;
	return 0;
}