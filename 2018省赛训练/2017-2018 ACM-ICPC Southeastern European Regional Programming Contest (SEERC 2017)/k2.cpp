#include <bits/stdc++.h>
using namespace std;
typedef double db;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pw(x) (1ll << (x))
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define rep(i,l,r) for(int i=(l);i<(r);i++)
#define per(i,l,r) for(int i=(r)-1;i>=(l);i--)
#define dd(x) cout << #x << " = " << x << ", "
#define de(x) cout << #x << " = " << x << endl

//-----
const int N = 1e5 + 7;
int n, b[N];
pii a[N];
int main() {
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	cin >> n;
	rep(i, 0, n) cin >> a[i].fi, a[i].se = i;
	sort(a, a + n);
	rep(i, 0, n) b[a[i].se] = n - i;
	rep(i, 0, n) cout << b[i] << " \n"[i == n - 1];

	return 0;
}
