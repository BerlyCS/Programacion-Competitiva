#include <iostream>
#include <map>
#include <ostream>
#include <string>

void sol() {
    int n, visited=0;
    std::map<std::string, bool> places;
    std::cin>>n;
    for (int i=0; i<n; i++) {
        std::string city;
        std::cin>> city;
        if (places[city] == false) {
            visited++;
            places[city] = true;
        }
    }
    std::cout<<visited<<std::endl;
}

int main(){
    int cases;
    std::cin>>cases;
    for (int i =0 ; i<cases; i++){
        sol();
    }
}
