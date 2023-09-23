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
	char arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int flag = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] == arr[i + 1])flag++;

	}
	cout << flag << endl;
	return 0;

}