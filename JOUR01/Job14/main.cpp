#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; 
    cin >> n;
    for( int i = 5 ; i < n ; i = i + 1){
        float square = pow(i,2);
        cout << square << endl;

    }
    return 0;

}