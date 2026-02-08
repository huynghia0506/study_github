#include    <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // check if the number is positive, negative or zero
    if (number > 0) {
        cout << number << " is a p";
    } else if (number < 0) {
        cout << number << " is a .";
    } else {
        cout << ";
    }

    return 0;
}