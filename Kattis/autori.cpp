#include <iostream>
int main() {
    std::string name, sh;
    std::cin>>name;
    sh += name[0];
    for (int i=1; i<name.length()-1; i++) {
        if (name[i] == '-'){
            sh += name[i+1];
        }
    }
    std::cout<<sh;
}
