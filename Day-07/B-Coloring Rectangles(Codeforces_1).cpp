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
	ll n , m;
	cin >> n >> m;

	ll ans = (n / 3) * m;

	if (n % 3 == 1) {
		ans += (m + 2) / 3;
	}
	else if ( n % 3 == 2) {
		if (m % 3 == 1) {
			ans += 1 + ((m / 3) * 2);
		}
		else if (m % 3 == 2) {
			ans += ((m + 2) / 3) * 2;
		}
		else {
			ans += (m / 3) * 2;
		}
	}

	cout << ans;
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