#include <iostream>
using namespace std;
int main() {
    string players;
    cin>>players;
    int count=0;
    for (int i=1; i<players.size(); i++) {
        if (players[i] == players[i-1]) {
            count++;
        }
        else {
            count = 0;
        }
        if (count > 7) {
            cout<<"NO";
            return 0;
        }
        cout<<
    }
    cout<<"YES";
}
