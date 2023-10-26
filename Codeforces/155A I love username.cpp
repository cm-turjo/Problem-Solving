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
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int maxs = arr[0];
	int cnt = 0;
	int mins = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > maxs)
		{
			maxs = arr[i];
			cnt++;
			//cout << "Max is: " << maxs << endl;
		}
		else if (arr[i] < mins)
		{
			mins = arr[i];
			cnt++;

			//cout << "Min is: " << maxs << endl;
		}
	}
	cout << cnt << endl;
	return 0;
}
