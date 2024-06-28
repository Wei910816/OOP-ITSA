#include <iostream>
#include <string>
using namespace std;
//ºî¦X8

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int score = (a + c * 2 + b * 2 + d * 2) - (e * 2);
    if(score >= 45)
        cout << "A\n";
    else if(score <= 44 && score >= 35)
        cout << "B\n"; 
    else if(score <= 34 && score >= 25)
        cout << "C\n";
    else
        cout << "D\n";
}
