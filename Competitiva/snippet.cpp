#include <iostream>
#include <fstream>

using namespace std;

void check_answer() {
    ifstream file("exercise_test.txt");
    if (!file.is_open()) {
        cerr<<"No se pudo abrir el archivo\n";
        return;
    }
    solution();
}

void solution() {
    string a;
    string b;
    string rev="";
    cin>>a>>b;
    for (char i:b)
    {
        rev=i+rev;
    }
    if (a==rev)
    {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}
int main (int argc, char *argv[]) {

}