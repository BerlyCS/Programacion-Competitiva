#include <iostream>

using namespace std;

int main() {
    int n,useless;
    int day;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> useless >> day;
        cout << i+1 << " " << (day+2)*(day+1)/2-1 << endl;
    }
}