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

	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	vector<int> len(n + 1 , INT_MIN);
	len[0] = 0;

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = i; j < n; j++) {
			sum += v[j];
			len[j - i + 1] = max(len[j - i + 1], sum);
		}
	}

	for (int i = 0; i <= n; i++) {
		int ans = 0;
		for (int j = 0; j <= n; j++) {
			ans = max(ans , min(j, i) * x + len[j]);
		}
		cout << ans << " ";
	}
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