#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
//for getting input from input.txt
	freopen("input.txt", "r", stdin);
//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	vector<int>v;
	v.clear();

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '.')cout << 0;
		else if (s[i] == '-' && s[i + 1] == '.')
		{
			cout << 1;
			i++;
		}
		else if (s[i] == '-' && s[i + 1] == '-')
		{

			cout << 2;
			i++;
		}

	}

	return 0;
}