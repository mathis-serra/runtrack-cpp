#include <iostream>
 
void swapValues(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main( ){
    int a = 5;
    int b = 3;

    std::cout << a << " et " << b << std::endl;
    swapValues(a, b);
    std::cout << a << " et " << b << std::endl;
    return 0;
}