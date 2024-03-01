#include <iostream>
#include <string>
using namespace std;

bool isDistinct(int n) {
    string temp= to_string(n);
    bool digits[] = {false,false,false,false,false,false,false,false,false,false};
    for (int i=0; i<temp.length(); i++) {
        if (!digits[temp[i]-48]) {
            digits[temp[i]-48] = true;
        }
        else {
            return false;
        }
    }
    return true;
}
int main() {
    int a,b;
    cin>>a>>b;
    string x,y;
    x=to_string(a);
    y=to_string(b);
    
    for (int i=0;i<=b-a;i++) {
        if (isDistinct(a+i)) {
            cout<<a+i;
            return 0;
        }
    }
    cout<<-1;
}
