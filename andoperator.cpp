#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    if ((num % 2 == 0) && (num % 3 == 0)) {
        cout << num << endl;
    }
    
    return 0;
}
