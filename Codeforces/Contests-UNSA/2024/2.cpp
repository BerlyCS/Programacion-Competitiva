#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int get_max(vector<int> days, int group) {
    vector<int> combs;
    int max = INT_MIN;
    for (int i=0;i<days.size()-group+1;i++) {
        int sum= 0;
        for (int j=i;j<group+i;j++) {
            sum+=days[j];
        }
        combs.push_back(sum);
    }

    for (int i: combs) {
        if (max < i) {
            max = i;
        }
    }
    
    return max;
}
int main(){
    int n;
    cin>>n;
    vector<int> days(n);
    for (int i=0; i<n; i++) {
        /* int o; */
        /* cin>>o; */
        /* days[i] = o; */ 
        days[i]=0;
    }

    vector<int> combs;
    for (int i=1; i<=n; i++) {
        for (int j=0; j<n-i+1;j++) {
            combs.push_back(get_max(days, i));
        } 
    }
    
    int max = combs[0];
    for (int i=1; i<combs.size();i++) {
        if (max < combs[i]) {
            max= combs[i];
        }
    }

    cout<<max;
}
