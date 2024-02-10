#include <iostream>

using namespace std;

int main() {
    int c=0;
    string n;
    cin>>n;
    for (char i:n){
        if (i=='4' or i=='7') {
            c++;
        }
    }
    if (c==7 or c==4) 
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
}
