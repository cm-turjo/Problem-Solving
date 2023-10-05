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
	int n;
	cin >> n;
	string s1;
	cin >> s1;
	map<char, int>mp;
	map<char, int>::iterator it;
	//first we count the occurence of every letter
	for (int i = 0; i < s1.size(); i++)
	{
		s1[i] = tolower(s1[i]);
		mp[s1[i]]++;
	}
	if (n < 26)//as the problem suggests that the string should contain
		//every character so if total char count is less than 26 cout no
	{
		cout << "NO" << endl;
	}
	else
	{
		if (mp.size() == 26)//if the map size is equal to 26 that means all
			//characters are counted one or more time
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;

		}
	}
	return 0;
}
