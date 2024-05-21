#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number,k;
    cin >> number;
    cin >> k;
    while(k--){
        if(number % 10 == 0) {
            number/=10;
        }  else {
            number -=1;
        }
    }
    cout << number;

    return 0;
}
