#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int n;
    int start,end,counter=0;
    bool count=false;
    cin >>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (nums[i]+1==nums[i+1]) {
            counter++;
            if (count){
                end=nums[i+1];
                continue;
            } else {
                count=true;
                start=nums[i];
                continue;
            }
        }
        else if (count){
            if (counter<2) {
                count=false;
                counter=0;
                cout << nums[i-1]<<" ";
            } else {
            count=false;
            counter=0;
            cout << start<<"-"<<end<<" ";
            continue;}
        }
        cout << nums[i]<<" ";
    }
}