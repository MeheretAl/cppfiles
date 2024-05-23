#include <iostream>
#include <unordered_set>

using namespace std;


bool hasDistinctDigits(int year) {
    unordered_set<int> digits;
    while (year > 0) {
        int digit = year % 10;
        if (digits.find(digit) != digits.end()) {
            return false;
        }
        digits.insert(digit);
        year /= 10;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    int comp = num;
    while (true)
    {
        comp += 1;
        if (hasDistinctDigits(comp)) {
            cout << comp << endl;
            break;
        }
    }
  
    return 0;
}
