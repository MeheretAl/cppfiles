#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int N = 100;
    for (int i = 0; i<5; i++)
        cout << rand() % N << " ";

    return 0;
}