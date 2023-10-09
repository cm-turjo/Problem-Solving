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
	int flag = 0;

	flag += n / 5;
	n = n % 5;

	flag += n / 4;
	n = n % 4;
	flag += n / 3;
	n = n % 3;
	flag += n / 2;
	n = n % 2;
	flag += n / 1;
	cout << flag;
	return 0;
}
