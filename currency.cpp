#include <iostream>
#include <string>

using namespace std;

int main() {
    float euro,dollar,pound;
    string input,output;
    cout << "Please choose a currency you want to convert.\n Dollar(D),Euro(E),Pound(P)\n";
    cin >> input;
    cout << "How much do you want to convert?\n";
    if (input=="D") {
        cin >> dollar;
    } else if (input == "E") {
        cin >> euro;
    } else {
        cin >> pound;
    }
    cout << "To which currency do you want it to be converted to?\n";
    cin >> output;
    if (input=="D" and output == "E") {
        cout << dollar <<" Dollars are " << .93*dollar << " euros." <<endl;
    } else if (input == "D" and output == "P") {
        cout << dollar << " Dollars are " << .81*dollar << " pounds" << endl;
    } else if (input=="D" and output == "D") {
        cout << dollar << " Dollars are " << dollar << " dollars." << endl;
    }
    if (input=="E" and output == "D") {
        cout << euro <<" Euros are " << 1.07*euro << " dollars." <<endl;
    } else if (input == "E" and output == "D") {
        cout << euro << " Euros are " << 0.86*euro << " pounds" << endl;
    } else if (input=="E" and output == "E") {
        cout << euro << " euros are " << euro << " euros." << endl;
    }
    if (input=="P" and output == "D") {
        cout << pound <<" pounds are " << 1.24*pound << " pounds." <<endl;
    } else if (input == "E" and output == "P") {
        cout << euro << " euros are " << 1.16*pound << " pounds" << endl;
    } else if (input=="P" and output == "P") {
        cout << euro << " pounds are " << pound << " pounds." << endl;
    }
    return 0;
}