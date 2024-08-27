#include <iostream>
using namespace std;

int main(){
    int a ;
    int b ; 
    cin >> a >> b ;
    cout << a << " et " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << a << " et " << b << endl;
    return 0;

}