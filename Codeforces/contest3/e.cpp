#include <iostream>
using namespace std;
int solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b+c >= 2) {
        return 1;
    }
    return 0;
}
int main() {
    int n,count=0;
    cin>>n;
    for (int i=0;i<n;i++) 
        count+=solve();

    cout<<count;
}
