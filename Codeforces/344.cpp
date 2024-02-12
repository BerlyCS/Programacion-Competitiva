#include <iostream>
using namespace std;

int main() {
    int n, count=1, mg, pile;
    cin >> n;
    cin >> mg;
    pile=mg;
    for (int i = 0; i < n-1; i++)
    {
        cin >> mg;
        if (mg != pile) {
            count++;
            pile=mg;
        }
    }
    cout << count;
}
