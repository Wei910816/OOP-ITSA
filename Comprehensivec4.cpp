#include <iostream>
using namespace std;


//ºî¦X4

int main() {
    int input;
    cin >> input;
    if(input >= 90 && input <= 100)
        cout << "A\n";
    else if(input >= 80 && input <= 89)
        cout << "B\n";
    else if(input >= 70 && input <= 79)
        cout << "C\n";
    else if(input >= 60 && input <= 69)
        cout << "D\n";
    else if(input >= 0 && input <= 60)
        cout << "E\n";
    else
        cout << "error\n";
}
