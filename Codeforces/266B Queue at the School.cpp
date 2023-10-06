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
	int a, b;
	cin >> a >> b;
	string s1;
	cin >> s1;
	for (int i = 0; i < b ; i++)//time value is stored in b and thus checked how many times
		// the process will continue;
	{
		for (int j = 0; j < s1.size(); j++)
			if (s1[j] == 'B' && s1[j + 1] == 'G')
			{	swap(s1[j], s1[j + 1]);
				//after swapping we increment the value of j to stop extra processing
				//if swapping is done then we check from the next value of the swapped charecters

				j++;
			}
	}
	cout << s1 << endl;
	return 0;
}