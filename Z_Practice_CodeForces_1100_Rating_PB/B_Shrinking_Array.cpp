
#include <bits/stdc++.h>
using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define all(x) (x).begin(), (x).end()
#define input(arr)       \
    for (auto &it : arr) \
    cin >> it
#define forr(k, n) for (int i = k; i < n; i++) // k = start,  n = end
#define forrr(k, n) for (int i = k; i >= n; i--)
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);


void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	for (int i = 1; i < n; i++) {
		if (abs(a[i - 1] - a[i]) <= 1) {
			cout << 0 << endl;
			return;
		}
	}
	for (int i = 1; i + 1 < n; i++) {
		if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
			cout << 1 << endl;
			return;
		}
		if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
			cout << 1 << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main() {
    ASHRAFUL
    
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
// https://codeforces.com/problemset/problem/2112/B