#include <iostream>

using namespace std;

int main()
{
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