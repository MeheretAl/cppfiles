#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){
    int n,m;
    

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    cin >> n , m;

    if (n>=m)
    {
        string answer(n+m,'B');
        for (int i = 1; i < m*2; i+=2)
        {
            answer[i] = 'G';
        }
        cout << answer << endl;
    } else {
        string answer (n+m,'G');
        for (int i = 1; i < n*2; i+=2)
        {
            answer[i] = 'B';
        }
        cout << answer << endl;
    }
    
    return 0;
}