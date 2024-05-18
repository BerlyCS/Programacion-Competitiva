#include <iostream>
using namespace std;
int main() {
    int n,a,b;
    cin>>n>>a>>b;
    
    int maxb,maxa;
    
    maxa=n/a;
    maxb=n/b;

    for (int i=maxa;i>=0;i--) {
        for (int k=0;k<maxb;k++){
            if (i*a+k*b==n) {
                cout<<"YES"<<'\n'<<i<<" "<<k;
                return 0;
            }
        }
    }
    cout<<"NO";

}
