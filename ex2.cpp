#include <iostream>
using namespace std;

int main() {
    int firstnumber,secondnumber,thirdnumber;
    cout << "Welcome!\n" << "Input the first number you want for comparison:\n";
    cin >> firstnumber;
    cout << "Input the second number:\n";
    cin >> secondnumber;
    cout << "Input the third number:\n";
    cin >> thirdnumber;

    if ((firstnumber > secondnumber) && (firstnumber > thirdnumber)) {
        cout << firstnumber << " is the biggest number.\n";
    } else if ((secondnumber > firstnumber) && (secondnumber > thirdnumber)) {
        cout << secondnumber << " is the biggest number.\n";
    } else {
        cout << thirdnumber << " is the biggest number.\n";
    }
    return 0;
}