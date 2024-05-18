#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int n,r;
    cin>>n>>r;
    int p[n][2];
    for (int i=0;i<n;i++) {
        for (int j=0;j<2;j++) {
            cin>>p[i][j];
        }    
    }

    int max=p[0][0];
    for (int i=1;i<n;i++) {
        if (max<p[i][0]) max = p[i][0];
    }

    int max_r = r;
    //int min_r 
    for (int i=0;i<n;i++) {
        if (p[i][1]>0) {
            max_r+=p[i][1];
        }
    }

    if (max<=max_r){
        cout<<"YES";
    }
    else cout<<"NO";
}
