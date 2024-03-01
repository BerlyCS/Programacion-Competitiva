#include<bits/stdc++.h>
using namespace std;


int f1(int x, int y) {
    return x*x+y;
}

int f2(int x,int y) {
    return x+y*y;
}

void solution() {
   int a,b,sols=0;
   cin>>a>>b;
   int max=a;
   if (a<b) max=b;
   for (int i=0;i<max+10;i++) {
       for (int k=0;k<max+10;k++) {
           if (f1(i,k)==a && f2(i,k)==b) {
               //cout<<i<<k<<endl;
               sols++;
           }
       }
   }
   cout<<sols;
}

int main(){
    solution();
    return 0;
}
