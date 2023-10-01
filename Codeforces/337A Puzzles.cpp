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

	int n, m;
	cin >> n >> m;
	int arr[m];
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
	}

	//we have to take a number of elements that is equal to n and where
	//the difference between maximum-minimum value of that particular part
	//is minimum so we have to iterate through that and check whether the
	//maximum value arr[i+n-1]-arr[i] is the minimum or not
	// not every time the first n elements will be the ans so we have to
	//iterate through m-n times to find the value
	sort(arr, arr + m);

	int res = arr[n - 1] - arr[0];

	for (int i = 1; i <= m - n; ++i)
	{
		if (arr[i + n - 1] - arr[i] < res)
		{
			res = arr[i + n - 1] - arr[i];
		}
	}

	cout << res << endl;
	return 0;
}