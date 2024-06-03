#include <iostream> 

using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    bool inc=false, dec=false;
    for (int i=0; i<n-1; i++) {
        if (arr[i] < arr[i+1]){
            inc=true;
        }
        if (arr[i] > arr[i+1]){
            dec=true;
        }
    }

    if (dec && inc) {
        cout<<"NEITHER";
    } else if (dec) {
        cout<<"DECREASING";
    } else if (inc) {
        cout<<"INCREASING";
    }
}
