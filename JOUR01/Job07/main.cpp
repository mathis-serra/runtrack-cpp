#include<iostream>
#include<algorithm> 
using namespace std;


void reverse(int &a){
    string s = to_string(a);
    reverse(s.begin(), s.end());
    a = stoi(s);
}

int main(){
    int a = 12345;
    int *b = &a;
    reverse(a);
    cout << a << endl;
    return 0;
}