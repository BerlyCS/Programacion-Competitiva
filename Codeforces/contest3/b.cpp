//Minimize Penalty
#include <iostream>
#include <vector>
using namespace std;

long long solve() {
    long long w,d;
    cin>>w>>d;
    return max(0LL,w-d);
}
int main() {
    long long n;
    cin>>n;
    vector<long long> pen;
    for (long long i=0;i<n;i++) {
        pen.push_back(solve());
    }

    long long max = pen[0];
    for (long long i=1;i<pen.size();i++) {
        if (max < pen[i]) {
            max = pen[i];
        }
    }
    cout<<max;
}
