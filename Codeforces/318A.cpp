#include <bits/stdc++.h>

using namespace std;

// Definiciones útiles
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define F first
#define S second
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define per(i, a, b) for(int i = a; i >= (b); --i)

void solve() {
    long long n, pos;
    cin >> n >> pos;

    long long mid;
    if (n%2==0) {
        mid = n/2;
    } else {
        mid = n/2+1;
    }

    if (pos <= mid) {
        cout<<(pos*2-1);
    } else {
        cout<<(pos-mid)*2;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    /* cin >> t; */
    while (t--) {
        solve();
    }

    return 0;
}
