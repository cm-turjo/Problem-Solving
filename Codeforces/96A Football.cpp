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
	int flag1 = 0;
	//flag is taken to check
	//here one thing to notice is that when two characters are not similar I put the
	//Flag value set to 0 and check when found similar ,the total value of flag1 will be euqal
	//or high of 6
	//if I set the flag1=1 before then I can use flag1>=7
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i - 1] == s[i])flag1++;
		else flag1 = 0;



		if (flag1 >= 6) {
			cout << "YES" << endl;
			return 0;
		}

	}
	cout << "NO" << endl;
	return 0;
}

