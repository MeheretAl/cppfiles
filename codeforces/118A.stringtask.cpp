#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    string word;
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = isupper(word[i]);
    }
    
    return 0;
}
