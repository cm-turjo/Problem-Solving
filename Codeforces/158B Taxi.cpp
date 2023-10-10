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
	map<int, int> m;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		m[x]++;
	}
	// first we count the occurence of 4 and decrease the number of 4

	while (m[4])
	{
		cnt++;
		m[4]--;
	}
	while (m[3] && m[1])//as 3 and 1 can be grouped together so
		//we grouped them and count the occurences
	{
		cnt++;
		m[3]--;
		m[1]--;
	}
	while (m[3])//remaining occurences of 3 are dealt here
	{
		cnt++;
		m[3]--;
	}
	//here 3 is added so that we get ceil value
	//suppose 2*m[2] +m[1]=10 but we need 3 cars if we divide by 4
	//so to get ceil value we add 3 so that after division the result we will
	//get as a ceil value of the previous one
	cnt += (2 * m[2] + m[1] + 3) / 4;
	cout << cnt << endl;
	return 0;
}


