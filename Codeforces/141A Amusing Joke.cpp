
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
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	map<char, int>m1, m2;
	s1 += s2;
	for (int i = 0; i < s1.size(); i++)
	{
		m1[s1[i]]++;
	}
	for (int i = 0; i < s3.size(); i++)
	{
		m2[s3[i]]++;
	}
	bool flag = 1;

	if (m1.size() != m2.size())
	{
		cout << "NO" << endl;
		return 0;
	}


	for (int i = 0; i < s1.size(); i++)
	{
		int a = m1[s1[i]];
		int b = m2[s1[i]];
		if (a != b)
		{
			flag = 0;
			break;
		}
	}

	if (flag)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}

