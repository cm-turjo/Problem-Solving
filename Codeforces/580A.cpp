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
	int n, f;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int k = 1, o = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] >= arr[i - 1])k++;
		else o = max(o, k),
			     k = 1;
	}
	o = max(o, k);//check the condition if the maximum sublength stays at the end of array

	cout << o << endl;
	return 0;
}

