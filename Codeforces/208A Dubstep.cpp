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
	string s1;
	cin >> s1;
	int flag = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] == 'W' && s1[i + 1] == 'U' && s1[i + 2] == 'B')
		{
			flag++;
			if (flag == 1)
			{
				cout << " ";

			}
			i = i + 2;
		}
		else
		{
			cout << s1[i];
			flag = 0;
		}
	}
	return 0;
}