#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int fr;
    vector<int> f={};
    vector<int> sol(n);
    for (int i = 0; i < n; i++)
    {
        cin >> fr;
        f.push_back(fr);
    }
    for (int i = 0; i < n; i++)
    {
        int a=f[i]-1;
        sol[a]=i+1;
    }
    for (int i:sol) cout << i << " ";
}