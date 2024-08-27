#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int somme = 0;
    for( int i = 5 ; i < n ; i = i + 1){
        float square = pow(i,2);
        somme = somme + square;

    }
    cout << somme << endl;
    return 0;

}