#include <iostream>

using namespace std;

void solution() {
   int n;
   cin>>n;
   if (n==2) cout<<"NO";
   else if (n%2==0) {
      cout<<"YES";
   }
   else {
      cout<<"NO";
   }
}
int main() {
   solution();
}
