#include <iostream>
using namespace std;

int main() {
    int staticArray[5] = {1, 2, 3, 4, 5};
    int ppt = staticArray[0];
    for (int i = 0; i < 5; i++) {
        if (ppt>staticArray[i]){ 
            ppt = staticArray[i];
        }
    }
    cout << ppt << endl;
    return 0;

}