#include <iostream>
using namespace std;
int main() {
    int n,a,b,c;
    cin>>n;

    a=1234567;
    b=123456;
    c=1234;
    
    int maxb,maxa,maxc;
    
    maxa=n/a;
    maxb=n/b;
    maxc=n/c;

    for (int i=maxa;i>=0;i--) {
        for (int k=0;k<maxb;k++){
            for (int p=0;p<maxc;p++) {
                if (i*a+k*b+p*c==n) {
                    cout<<"YES";
                    return 0;
                }    
            }
        }
    }
    cout<<"NO";

}
