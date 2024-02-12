#include <bits/stdc++.h>
 
 //NO RESUELTO
using namespace std;

int main() {
    int n,e;
    cin >> n >> e;
    char cad[n]={};
    for (int i = 0; i < n; i++)
    {
        cin >> cad[i];
    }
    while (e>0) {
        for (int i = n; i > 0; i--) {

            if(cad[i-1]=='B' && cad[i]=='G') {
                cad[i-1]='G';
                cad[i]='B';
            }
        }
        for (char i:cad) cout << i;
        cout<<endl;
        e--;
    }
    for (char i:cad) cout << i;
}
