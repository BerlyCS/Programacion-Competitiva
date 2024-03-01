#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    char m[n][n];
    //bool has=false;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin>>m[i][j];
            
        }
    }

    for (int i=1;i<n-1;i++) {
        for (int j=1;j<n-1;j++) {
            if (m[i][j]=='#' && m[i-1][j]=='#' &&  m[i][j-1]=='#' && m[i][j+1]=='#' && m[i+1][j]=='#') {
                m[i-1][j]='.'; 
                m[i][j-1]='.';
                m[i][j+1]='.';
                m[i+1][j]='.';
                m[i][j] = '.';
            }
        }
    }
    
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (m[i][j]=='#') {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}
