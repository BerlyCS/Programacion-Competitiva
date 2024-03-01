#include <iostream>
#include <iterator>
#include <shared_mutex>
#include <vector>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;

    vector<int> players(n);
    for (int i=0;i<n;i++) {
        cin>>players[i];
    }

    int next,wins=0,i=0;
    while (true) {
        for (int k=1;k<i+2;k++) {
            if (players[k]!=0) {
                next=i;
                break;
            }
        }
        if (players[0] > players[next]) {
            players.push_back(players[next]);
            players[1] = 0;
            wins++;
        }
        else {
            swap(players[0], players[next]);
            players.push_back(players[next]);
            players[1] = 0;
            wins=0;
        }
        i++;

        if (wins==k) {
            break;
        }
    }
    cout<<players[0];
}
