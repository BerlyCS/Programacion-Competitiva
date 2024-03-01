#include <iostream>
#include <vector>
using namespace std;
int main() {
    string a;

    int k;
    vector<int> weigh(26);
    cin>>a>>k;
    cin>>weigh[0];
    int max=0;
    for (int i=1 ;i<26;i++) {
        cin>>weigh[i];
        if (weigh[max]<weigh[i]) max=i;
    }

    int sum=0,ind=1;
    for (int i=0;i<a.length();i++) {
        sum+=(ind)*weigh[a[i]-97];
        ind++;
    }
    
    for (int i=0;i<k;i++) {
        sum+= (ind++)*weigh[max];
    }
    cout<<sum;
}
