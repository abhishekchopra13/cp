// Author: darklight13
// created on: 2025-11-24T19:10:30

#define _CRT_SECURE_NO_DEPRECATE
#include "bits/stdc++.h"
using namespace std;
#define int long long
#define SYNC std::ios_base::sync_with_stdio(0); cout.tie(nullptr);
#define FRE freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

void __print(int x) {cerr << x;}
void __print(int32_t x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...) 42
#endif

const int MOD = 1e9 + 7;
const int MOD1 = 998244353;
const int N = 2e5 + 5;
const int INF = 1000111000111000111LL;
const long double EPS = 1e-12;
const long double PI = 3.141592653589793116;

void solve() {
	int n; cin >> n;
	vector<vector<int>> p(n, vector<int>());
	vector<int> dp(n, 0);
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		x--;
		p[x].push_back(i);
	}
	int prev_num_max_len = 0, prev_num_max_len_2 = 0;
	for (int v = 0; v < n; v++) {
		int u = v - 1;
		if (v == 0 or (int)p[u].size() == 0) {
			int v_cnts = p[v].size();
			int max_dp_cur = 0;
			for (int i = v_cnts - 1; i >= 0; i--) {
				dp[p[v][i]] = prev_num_max_len_2 + v_cnts - i;
				max_dp_cur = max(max_dp_cur, dp[p[v][i]]);
			}
			prev_num_max_len_2 = max(prev_num_max_len_2, prev_num_max_len);
			prev_num_max_len = max_dp_cur;
			continue;
		}
		int v_cnts = p[v].size();
		int i = (int)p[u].size() - 1;
		int len_from_prev = prev_num_max_len_2, max_dp_cur = 0;
		int prev_max_same_num = 0;
		for (int j = v_cnts - 1; j >= 0; j--) {
			while (i >= 0 && p[u][i] > p[v][j]) {
				len_from_prev = max(len_from_prev, dp[p[u][i]]);
				i--;
			}
			if (j < v_cnts - 1) {
				prev_max_same_num = max(prev_max_same_num, dp[p[v][j+1]]);
			}
			dp[p[v][j]] = max({dp[p[v][j]], v_cnts-j+len_from_prev, prev_max_same_num+1});
			max_dp_cur = max(max_dp_cur, dp[p[v][j]]);
		}
		prev_num_max_len_2 = max(prev_num_max_len_2, prev_num_max_len);
		prev_num_max_len = max_dp_cur;
	}
	cout << n - *max_element(dp.begin(), dp.end()) << '\n';
}


int32_t main() {
	// FRE
	SYNC
	int T; cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}