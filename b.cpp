// Author: darklight13
// created on: 2025-12-06T20:46:57
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

int32_t main() {
    FRE
    SYNC

    return 0;
}