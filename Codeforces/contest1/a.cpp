#include <iostream>
#include <vector>
using namespace std;

struct P {
    int a;
    int b;
    int pair;
    P(int a, int b) : a(a), b(b) {}
};

int main(){
    int n;
    cin>>n;

    vector<P> M;
    vector<P> F;

    for (int i=0; i<n;i++) {
        char genre;
        int x,y;
        cin>>genre>>x>>y;
        if (genre == 'M') {
            M.push_back(P(x,y));
        } else {
            F.push_back(P(x,y));
        }
    }
    vector<bool> m(M.size(),false);
    vector<bool> f(F.size(),false);

    for (int i=0;i<M.size();i++) {
        for(int j=0;j<F.size();j++) {
            if (M[i].b >= F[j].a || F[j].b >= M[i].a && !m[i] && !f[i]) {
                m[i]=true; f[i]=true;
                M[i].pair=j; F[j].pair=i;
            }
        }
    }

    vector<int> groups;



}
