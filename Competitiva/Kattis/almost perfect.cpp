#include <iostream>
using namespace std;

int perfect(int n) {
    int count=0;
    for (int i=1;i<n-1;i++) {
        if (n%i==0) {
            count+=i;
        }
    }
    return count;
}

int main() {
    int n;
    int p;
    for (int i=0;i<3;i++) {
        cin >> n;
        p=perfect(n);
        if (p==n) {
            cout << n << " perfect" << endl;
        }
        else if (p+2==n or p-2==n or p+1==n or p-1==n) {
            cout << n << " almost perfect" << endl;
        }
        else {
            cout << n << " not perfect" << endl;
        }
    }
    return 0;
}