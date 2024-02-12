#include <iostream>

using namespace std;

int main() {
    int n,ap=0,dp=0;
    cin >> n;
    string s;
    cin>> s;
    for (char i:s) {
        if (i=='D')
        {
            dp++;
        }
        else if (i=='A')
        {
            ap++;
        }
    }
    if (ap==dp)
    {
        cout<<"Friendship";
    } else if (ap<dp) {
        cout<<"Danik";
    } else {
        cout<<"Anton";
    }
}