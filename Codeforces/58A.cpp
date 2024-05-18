#include <iostream>
#include <queue>
using namespace std;
int main() {
    string expr;
    cin>>expr;
    queue<char> needed;
    needed.push('h');
    needed.push('e');
    needed.push('l');
    needed.push('l');
    needed.push('o');
    for (int i=0; i<expr.size(); i++){
        if (expr[i] == needed.front()){
            needed.pop();
        }
    }
    if (needed.empty())
        cout<<"YES";
    else {
        cout<<"NO";
    }
}
