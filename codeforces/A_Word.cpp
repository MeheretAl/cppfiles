#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    string word;
    cin >> word;
    int upperCount(0), lowerCount(0);
    for (char c : word)
    {
        if (isupper(c))
        {
            upperCount += 1;
        }
        else
        {
            lowerCount += 1;
        }
    }
    string answer = "";
    if (upperCount > lowerCount)
    {
        for (char c : word)
        {
            answer += toupper(c);
        }
    }
    else
    {
        for (char c : word)
        {
            answer += tolower(c);
        }
    }
    cout << answer;
    return 0;
}
