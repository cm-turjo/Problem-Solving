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
	int n;
	cin >> n;
	char arr[n];
	int var1 = 0, var2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 'A')
		{
			var1++;
		}
		else var2++;

	}

	if (var1 > var2)cout << "Anton" << endl;
	else if (var2 > var1)cout << "Danik" << endl;
	else cout << "Friendship" << endl;
	return 0;
}


