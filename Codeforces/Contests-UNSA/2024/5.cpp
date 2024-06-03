#include <iostream>
#include <locale>
#include <map>
#include <queue>
#include <vector>
using namespace std;

bool exists(const vector<int>& values, int n) {
    for (int i=0; i<values.size(); i++) {
        if (values[i] == n) {
            return true;
        }
    }
    return false;
} 

bool is_max(const vector<int>& values, int n) {
    int max = values[0];
    for (int i=1; i<values.size(); i++) {
        if (max < values[i])
            max= values[i];
    }

    if (n > max) {
        return true;
    }
    return false;
}

void replace(vector<int>& values, int n) {
    vector<int> max;
    for (int i=0; i<values.size();i++) 
    {
        if (values[i] > n) {
            max.push_back(values[i]);
        }
    }

    int min=max[0];
    for (int i=1; i<max.size();i++) {
        if (min>max[i]) {
            min = max[i];
        }
    }

    for (int i=0;i<values.size();i++) {
        if (values[i] == min) {
            values[i] = n;
        }
    }
}

void print(vector<int> val) {
    for(int i=0;i<val.size();i++) {
        cout<<val[i]<<" ";
    }
    cout<<endl;
}

int contar(vector<int> values, int min, int max) {
    int count=0;
    for (int i: values) {
        if (i <= max && i >=min) {
            count++;
        }
    }
    return count;
} 

int main() {
    int n, op;
    cin>>n>>op;

    vector<int> values(n);
    for (int i=0; i<n;i++) {
        int num;
        cin>>num;
        values[i]= num;
    }
 
    /*Si el elemento ya está presente en la colección, la colección no cambia.
Si el elemento k es mayor que cualquier elemento en la colección, se añade al final de la colección.
La primera ocurrencia del elemento más pequeño que es mayor que k es reemplazado por k
.*/
for (int i=0; i<op;i++) {
    int opc;
    cin>>opc;
    if (opc == 1) {
        int k;
        cin>>k;
        if (exists(values, k)) continue;
        else if ( is_max(values, k) )
            values.push_back(k);
        else {
            replace(values, k);
        } 
    }
    //consultas
    else if (opc == 2) {
        int a,b;
        cin>>a>>b;
        cout<<contar(values, a, b)<<endl;
    }
}

}
