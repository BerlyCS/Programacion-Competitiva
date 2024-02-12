#include <iostream>

using namespace std;

int main() {
    int count=0,n;
    cin >> n;
    string s;
    cin >> s;
    s=s+"1";
    for (int i = 0; i < n-1; i++)
    {
        if (s[i]==s[i+1]) {
            count++;
        }
    }
    cout << count;
}