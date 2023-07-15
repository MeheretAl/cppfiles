#include <iostream>
using namespace std;

int main() {
    int input1,sum;
    for (int i = 0; i < 5;i++) {
        cout << "Input the 5 numbers you want to be added:\n";
        cin >> input1;
        sum += input1;
    }
    cout <<"Here is the sum " << sum << ".\n";
    return 0;
}