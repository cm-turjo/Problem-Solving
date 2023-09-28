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
	int n;
	cin >> n;
	int arr[n];
	bool flag = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 1)flag = 0;
	}
	if (flag == 0)
	{
		cout << "HARD" << endl;
	}
	else
	{
		cout << "EASY" << endl;
	}
	return 0;
}