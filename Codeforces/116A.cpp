#include <iostream>

using namespace std;

int main() {
    int n,p=0,in,max=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>in;
        p-=in;
        cin>>in;
        p+=in;
        if (p>max)
        {
            max=p;
        }
    }
    cout<<max;
}