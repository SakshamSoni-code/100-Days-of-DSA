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
	ll n , k , ans = 0;
	cin >> n >> k;


	vector<ll> v(k);

	for (ll i = 0; i < k; i++)
	{
		cin >> v[i];
	}

	sort(v.begin() , v.end());

	//for (ll i = 0; i < k; i++) cout << v[i] << " ";

	ll sum = 0;

	for (ll i = k - 1; i >= 0; i--) {
		sum += n - v[i];
		if (sum < n) {
			ans++;
		}
	}
	cout << ans;



	/*vector<pair<int, int>> v;

	for (auto it : mp) {
		v.push_back(it);
	}

	if (t == 104) {
		cout << n << " " << k << endl;
		for (ll i = 0; i < v.size(); i++)
		{
			cout << v[i].first << " " << v[i].second << endl;;
		}

	}

	ll low = 0;
	ll start = 0;
	ll end = v.size() - 1;
	ll save = 0 , eat = 0;

	while (start <= end)
	{
		if (v[end].first + 1 != n) {
			v[end].first++;
		}
		else {
			v[end].second--;
			save++;
			if (v[end].second == 0) end--;

		}



		if (low + 1 != v[start].first) {
			low++;
		}
		else {
			eat += v[start].second;
			v[start].second = 0;
			low = v[start].first;
			start++;
		}
	}

	cout << save + eat; */




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