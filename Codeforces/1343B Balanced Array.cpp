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
	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		int x = a / 2;
		if (x & 1)
		{
			cout << "NO" << endl;
			continue;
		}
		else
		{
			cout << "YES" << endl;
			int m = 0;
			int sum = 0;
			for (int i = 1; i <= x; i++)
			{
				m += 2;
				cout << m << ' ';

				sum += m;
			}
			//cout << "Sum: " << sum << endl;

			int n = 1;
			int sum2 = 1;
			cout << 1 << " ";// for handling a=4 case efficiently case
			for (int i = 1; i < x - 1 ; i++)
			{
				n += 2;

				cout << n << ' ';

				sum2 += n;



			}//This functionality of whole loop can be implemented by 3*a-1
			cout << sum - sum2 << endl;


		}

	}
	return 0;
}
