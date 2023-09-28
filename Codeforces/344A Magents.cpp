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
	int a[n];
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] != a[i + 1]) {
			count++;
		}
	}
	//10 ke string hishahbe count nah kore
	//number hishabe count korlei easy solution
	//when 10 !=01 then count plus
	cout << count;
	return 0;

}