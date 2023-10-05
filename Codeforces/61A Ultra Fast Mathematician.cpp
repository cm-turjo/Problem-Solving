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
	int i;
	char ara1[105], ara2[105], ara3[105];
	cin >> ara1;
	cin >> ara2;

	int  b = strlen(ara1);

	for (i = 0; i < b; i++)
	{

		if (ara1[i] == ara2[i])
		{
			ara3[i] = '0';
		}
		else
		{
			ara3[i] = '1';
		}
	}
	for (i = 0; i < b; i++)
	{
		cout << ara3[i];
	}
	cout << endl;
	return 0;
}

