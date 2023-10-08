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
	char c;
	bool check = true;
	//first I check from 1 index that if any character is small case or not if yes i changed the check flag as false

	for (int i = 1; i < s1.size(); i++)
	{
		if (islower(s1[i]))check = false;
	}

	if (check == true)
	{	//as the check flag is true I just changed the case of the strings and print it.
		for (int j = 0; j < s1.size(); j++)
		{
			if (islower(s1[j]))c = toupper(s1[j]);
			else c = tolower(s1[j]);
			cout << c;
		}
	}
	else
		cout << s1 << endl;
	return 0;
}


