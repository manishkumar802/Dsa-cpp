#include <iostream>
using namespace std;

// Function to compute the sum of the first n natural numbers
int sumN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum; // Return the computed sum
}

int main() {
    int result = sumN(5); // Call sumN with 5
    cout << result << endl; // Print the result
    return 0;
}
