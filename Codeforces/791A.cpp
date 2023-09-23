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

	int a, b;
	cin >> a >> b;
	int flag = 0;
	while (a <= b)
	{
		a = a * 3;
		b = b * 2;
		flag++;
	}
	cout << flag << endl;
}