#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int main() {
    int lb = 1,ub=100,random,guess,tries=10;
    srand(time(0));
    random = (rand() % (ub-lb+1)) + lb;
    cout << "Guess a number between 1 and 100.\n";
    cout << "You have 10 tries to correctly guess the number.\n";
    cin >> guess;
    while (tries>1) {
        tries --;
        if (random < guess) {
            cout<< "Guess lower.\n" << "You have " << tries << " tries left.\n";
            cin >> guess;
        }
        else if (random > guess) {
            cout << "Guess higher.\n" << "You have " << tries << " tries left.\n"; 
            cin >> guess;
        }
        else {
            cout << "Congrats!, You've correctly guessed the number with " << tries << " tries left.\n";
            break;
        }
        if (tries==1) {
            cout << "You've failed to correctly guess the number.\n";
            cout << "The correct number was " << random << ".";
    }
    }
    return 0;
}