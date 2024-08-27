#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (a % 4 == 0) {
        cout << "Année bissextile" << endl;
    } else {
        cout << "Année non bissextile" << endl;
    }
}