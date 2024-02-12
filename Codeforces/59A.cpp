//Bear and Big Brother
#include <iostream>
using namespace std;

string to_lower(string cad) {
    for (int i = 0; i < cad.length(); i++)
    {
        if (cad[i]-0<97) {
            cad[i]=cad[i]+32;
        } 
    }
    return cad;
}

string to_upper(string cad) {
    for (int i = 0; i < cad.length(); i++)
    {
        if (cad[i]-0>96) {
            cad[i]=cad[i]-32;
        } 
    }
    return cad;
}


int main() {
    string s;
    int l=0,u=0;
    cin >> s;
    for (int i:s) {
        if (i<97) {
            u++;
        } else {
            l++;
        }
    }
    if (l<u) {
        cout << to_upper(s);
    } else {
        cout << to_lower(s);
    }
    return 0;
}