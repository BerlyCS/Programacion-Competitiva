#include <deque>
#include <iostream>
#include <set>

using namespace std;
int main() {
    int n;
    cin>>n;
    set<int> p;
    for (int i=0;i<n;i++) {
        p.insert(i+1);
    }
    
    int ind=0,s=2;
    for (int i=0;i<n-1;i++) {
        ind+=s;
        p.erase(ind%n);
        if (ind == n || ind == n-1) {
            s*=2;
        }

        for (int k:p) {
            cout<<k<<" ";
        }
        cout<<endl;
         
    }
    cout<<*p.end();

}
