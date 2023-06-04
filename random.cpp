#include <iostream>

using namespace std;

int main() {
    int tries,guess,rand;
    tries =10;
    rand = 21;
    cout << "Guess a number between 1 and 100\n";
    cout << "You have 10 tries to correctly guess the number.\n";
    cin >> guess;
    while (tries > 0) {
        tries --;
        if(guess > rand) {
            cout << "Guess lower\n";
            cout << "You've " << tries << " tries left.\n";
            cin >> guess;
        }
        else if (guess < rand) {
            cout << "Guess higher\n";
            cout << "You've " << tries << " tries left.\n";
            cin >> guess;
        }
        else {
            cout << "You've correctly guessed the number with " << tries << " tries left.\n";
            break;
        }
        if (tries == 0) {
            cout << "You've failed to correctly guess the number.\n";
        }
    }

    return 0;
}