#include <iostream>
using namespace std;
int main() {
    int s;
    cout << "enter your score: \n";
    cin >> s;
    if (s >= 86)
    {
        cout << "You recieved a grade of A \n";
    }
    else if (s >= 72)
    {
        cout << "You recieved a grade of B \n";
    }
    else if (s >= 60)
    {
        cout << "you recieved a grade of C \n";
    }
    else if (s >= 50)
    {
        cout << "You recieved a grade of D \n";
    }
    else if(s <= 50)
    {
        cout << "You recieved a grade of F \n";
    }
    return 0;
}