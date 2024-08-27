#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int somme = 0;
    for( int i = 5 ; i < n ; i = i + 1){
        float cube = pow(i,3);
        somme = somme + cube;

    }
    cout << somme << endl;
    return 0;

}