#include<bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0)
#define ll long long
const ll mod = 1000000007; //10^9+7

#ifdef ONLINE_JUDGE
#define debug(...) void(0);
#else
#include "debug.hpp"
#endif

void heySaksham() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
}

void problem_solver()
{
	int n , x;
	cin >> n >> x;

	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}

	vector<int> b = v;

	sort(b.begin() + 1, b.end());

	for (int i = 1; i <= n; i++)
	{
		int m1 = i - 1;
		int m2 = n - i;
		if (max(m1, m2) < x  && v[i] != b[i]) {
			cout << "NO";
			return ;
		}
	}

	cout << "YES";
}

int32_t main() {
	heySaksham();
	fast;
	ll t = 1;
	cin >> t;
	while (t--)
	{
		problem_solver();
		cout << endl;
	}

	return 0;
}