
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
	char s[20];

	cin >> s;
	int i, cnt = 0;
	int b = strlen(s);

	for (i = 0; i < b; i++)
	{
		if (s[i] == '4' || s[i] == '7')
		{
			cnt = cnt + 1;
		}
	}


	if (cnt == 4 || cnt == 7)
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
	return 0;
}