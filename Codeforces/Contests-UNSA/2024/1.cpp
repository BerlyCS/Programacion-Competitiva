#include <iostream>

int main(){
    int n,sum=0;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int k, p;
        std::cin>>k>>p;
        if(k>p){
            sum++;
        }
    }
    std::cout<<sum;
    return 0;
}
