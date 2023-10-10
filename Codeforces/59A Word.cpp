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

	char s[100];
	int b = 0, i, j = 0;
	cin >> s;
	int m = strlen(s);
	for (i = 0; i < m; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			b++;
		}
		else
		{
			j++;
		}

	}
	if (b > j)
	{
		for (i = 0; i < m; i++)
		{
			s[i] = toupper(s[i]);
			cout << s[i];
		}
	}
	else
	{
		for (i = 0; i < m; i++)
		{
			s[i] = tolower(s[i]);
			cout << s[i];

		}
	}
	cout << endl;
	return 0;
}