//Bear and Big Brother
#include <iostream>

using namespace std;

int main() {
    int a,b,y=1;
    bool small = true;
    cin >> a >> b;
    while (small) {
        a=a*3;
        b=b*2;
        if (a>b) {
            cout << y;
            return 0;
        } else {
            y++;
        }
    }
}