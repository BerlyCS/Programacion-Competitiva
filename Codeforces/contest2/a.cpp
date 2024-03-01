#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
void check_brackets() {
    string c;
    cin>>c;
    stack<char> qs;
    qs.push(' ');
    for (int i=0;i<c.length(); i++) {
        if (c[i] == '[' || c[i] == '(' || c[i] == '{') {
            qs.push(c[i]);
        }
        else if (c[i] == '[' || c[i] == '(' || c[i] == '{' && qs.empty()) {
            cout<<"NO\n";
            return;
        }
        else if (c[i] == ']' && qs.top() == '[' ) {
            qs.pop();
        }
        else if (c[i] == '}' && qs.top()=='{') {
            qs.pop();
        }
        else if (c[i] == ')' && qs.top() == '(') {
            qs.pop();
        }

        else {
            cout<<"NO\n";
            return;
        }
    }
    qs.pop();
    if (qs.empty()) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
}

int main() {
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        check_brackets();
    }
}
