#include <iostream> 
#include <ostream>
#include <queue>
#include <vector>
using namespace std;

void process_scennario(int e) {
    int a, b;
    cin>>a>>b;
    priority_queue<int> fr;
    for (int i = 0; i<b;i++){
        int n;
        cin>>n;
        fr.push(n);
    }
    int sum=0,count=0;
    do {
        sum+=fr.top();
        fr.pop();
        count++;
        if (count>b) {
            cout<<"Scenario #"<<e+1<<":\n"
                <<"impossible"<<endl;
            return;
        }
    } while (sum<a);
    cout<<"Scenario #"<<e+1<<":\n"
        <<count<<endl;
}
int main() {
    int r;
    cin>>r;
    for (int i = 0; i<r;i++){
        process_scennario(i);
    }
}
