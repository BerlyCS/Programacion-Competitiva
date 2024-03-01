#include <iostream>
using namespace std;
int main() {
    int M[3][3];
    int n;
    int a,b,c,d,count=0;
    cin>>n>>a>>b>>c>>d;
    M[0][1]=a;
    M[1][0]=b;
    M[1][2]=c;
    M[2][1]=d;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++) {
            M[0][0]=i;
            M[1][1]=j;
            int sum1 = M[0][0]+M[0][1]+M[1][0]+M[1][1];
            int nf = sum1 - M[0][1] - M[1][1] - M[1][2];
            if (nf>=n) continue;

            M[0][2]=nf;

            nf = sum1 - M[1][0] - M[1][1] - M[2][1];
            
            if (nf >= n) continue;

            M[2][0]=nf;
            nf = sum1 - M[1][1] - M[1][2] - M[2][1];

            if (nf>=n) continue;

            M[2][2]=nf;

            count++;
            

        }
    }
    cout<<count-n;
}
