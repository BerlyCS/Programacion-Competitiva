#include <iostream>
using namespace std;
int main() {
    int n,sx=0,sy=0,sz=0;
    cin>>n;
    for (int i=0;i<n;i++) {
        
            int p;
            cin>>p;
            sx+=p;
            cin>>p;
            sy+=p;
            cin>>p;
            sz+=p;
    }

    if (sx == 0 && sy == 0 && sz == 0) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}
