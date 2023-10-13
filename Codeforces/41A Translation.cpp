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
	string s1, s2;
	cin >> s1 >> s2;
	reverse(s2.begin(), s2.end());
	if (s1 == s2)cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
