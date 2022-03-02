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

	int n;
	cin >> n;
	char c;
	cin >> c;

	string s;
	cin >> s;



	bool b = false , forone = false;
	int ind;

	for (int i = 1; i <= n; i++)
	{
		if (s[i - 1] == c) {
			//b = true;
			if (i > (s.size() / 2)) {
				forone = true;
				ind = i;
			}
		}

		if (s[i - 1] != c) {
			b = true;
		}
	}

	if (b == false) {
		cout << 0;
		return;
	}

	if (forone == true) {
		cout << 1 << endl;
		cout << ind;
		return;
	}

	else {
		cout << 2 << endl;
		cout << s.size() - 1 << " " << s.size();
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