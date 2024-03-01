#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> pa,pb,pc;
    int sa,sb,sc;
    for (int i=0;i<a;i++) {
        int n;
        cin>>n;
        pa.push_back(n);
        sa+=n;
    }

    for (int i=0;i<b;i++) {
        int n;
        cin>>n;
        pb.push_back(n);
        sb+=n;
    }

    for (int i=0;i<c;i++) {
        int n;
        cin>>n;
        pc.push_back(n);
        sc+=n;
    }

    while (!(sc == sa) && !(sa == sb)) {
        if (sc <= 0 && sa <= 0 && sb <= 0) break;
        else if (sc >= sa && sc >= sb) {
            sc -= *pc.end();
            pc.pop_back();
            continue;
        }
        else if (sb >= sa && sb >= sc) {
            sb -= *pb.end();
            pb.pop_back();
            continue;
        }
        else if (sa >= sb && sa >= sc) {
            sa -= *pa.end(); 
            pa.pop_back();
            continue;
        }
    }
    cout<<a<<endl;

}
