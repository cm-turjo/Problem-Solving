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
	string s;
	cin >> s;
	int ct = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
		{
			ct = 1;
			cout << "YES" << endl;
			break;
		}

	}

	if (ct == 0)cout << "NO" << endl;
	return 0;
}
