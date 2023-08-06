#include <iostream>


using namespace std;

void calculator()
{
    char choice;

    cout << "\t\t\t Menu \t\t\t\n";
    cout << "\t\t Press + for addition \t\t\t\n";
    cout << "\t\t Press - for subtraction \\t\t\t\n";
    cout << "\t\t Press * for multiplication \t\t\t\n";
    cout << "\t\t Press / for division \t\t\t\n";
    cout << "\t\t Press '%' for remainder \t\t\t\n ";
    cout << "\t\t Press e for exit \t\t\t\n";
    cin >> choice;

    switch (choice)
    {
    case '+':
        cout << "You have chosen " << choice << ".\n";
        return choice;
        break;
    case '-':
        cout << "You have chosen " << choice << ".\n";
        return choice;
        break;
    case '*':
        cout << "You have chosen " << choice << ".\n";
        return choice;
        break;
    case '/':
        cout << "You have chosen " << choice << ".\n";
        return choice;
        break;
    case '%':
        cout << "You have chosen " << choice << ".\n";
        return choice;
        break;
    case 'e':
        cout << "You have chosen to quit.\n";
        return choice;
        break;
    default:
        cout << "Invalid Input! Please choose a correct operator.\n";
        return choice;
        calculator();
    }
}

void operations() {

}

int main()
{
    calculator();
    operations();
    return 0;
}