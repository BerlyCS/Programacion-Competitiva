#include <iostream>
using namespace std;

int main () {
    float n;
    cin>>n;
    int sum=0;
    for (int i=0;i<n;i++) {
        int a;
        cin>>a;
        sum+=a;
    }
    cout<<sum/n;
}