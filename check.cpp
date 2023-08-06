#include <cstdlib>
#include <iostream>
#include <time.h>
#include <limits>

using namespace std;


int main() {
    unsigned short lb = 1,ub=100,random,tries=10,guess;
    srand(time(0));
    random = (rand() % (ub-lb+1)) + lb;

    cout << "Guess a number between 1 and 100.\n";
    cout << "You have 10 tries to correctly guess the number.\n";
    cin >> guess;

    while(1) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<< "You have entered the wrong input" << endl;
            cin>>guess;
        }
        if (!cin.fail())
        break;
    }

    while (tries>1) {
        while(1) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<< "You have entered the wrong input" << endl;
            cin>>guess;
        }
        if (!cin.fail())
        break;
    }
    tries --;
    if (random < guess) {
        cout<< "Guess lower.\n" << "You have " << tries << " tries left.\n";
        cin >> guess;
        
    }
    else if (random > guess) {
        while(1) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<< "You have entered the wrong input" << endl;
            cin>>guess;
        }
        if (!cin.fail())
        break;
    }
        cout << "Guess higher.\n" << "You have " << tries << " tries left.\n"; 
        cin >> guess;
 
    }
    else {
        while(1) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<< "You have entered the wrong input" << endl;
            cin>>guess;
        }
        if (!cin.fail())
        break;
    }
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