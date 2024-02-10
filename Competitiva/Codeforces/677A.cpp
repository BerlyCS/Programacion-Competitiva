#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,h;
    cin >> n >> h;
    short arr[n];
    int result=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i:arr) {
        if (i <= h) result++;
        else result+=2;
    }
    cout << result;
}
