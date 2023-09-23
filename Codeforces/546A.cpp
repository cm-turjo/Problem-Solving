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
	int k, n, w;
	cin >> k >> n >> w;
	int i = 2;
	int var1 = k;
	while (i <= w)
	{
		var1 += k * i;
		i++;
	}
	cout << var1 << endl;
	if ((var1 - n) > 0)cout << var1 - n << endl;
	else cout << 0 << endl;

}