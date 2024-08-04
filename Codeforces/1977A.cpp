#include <iostream>
#include <fstream>

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
    int n,m;
    cin>>n>>m;
    if (m>n) {
        cout<<"NO\n";
    } else if ((n-m)%2==1 || (m-n)%2==1) {
        cout<<"no\n";
    } else {
        cout<<"Yes\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
