#include <iostream>
#include <string>

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

bool lucky(int n) {
    string f{to_string(n)};

    rep(i,0,f.size()) {
        if (f[i] != '4' && f[i] != '7') {
            return false;
        }
    }
    return true;
}
void solve() {
    int n;
    cin>>n;

    if (lucky(n)) {
        cout<<"YES";
    } else if ( n%4==0 || n%7==0 || n%44==0 || n%77==0 || n%47==0 || n%74==0 || n%477==0 || n%444==0 || n%474==0 || n%447==0) {
        cout<<"YES";
    } else {
        cout<<"NO";
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
