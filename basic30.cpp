#include <iostream>
#include <string>
using namespace std;
//°òÂ¦30

int main() {
    string str, str2;
    cin >> str >> str2;
    int mon, day;
    if (str[0] == '1')
        mon = str[1] - '0' + 10;
    else
        mon = str[1] - '0';
    if (str2[0] == '1')
        day = str2[1] - '0' + 10;
    else if (str2[0] == '2')
        day = str2[1] - '0' + 20;
    else if (str2[0] == '3')
        day = str2[1] - '0' + 30;
    else
        day = str2[1] - '0';
    if ((mon == 1 && day >= 21) || (mon == 2 && day <= 18))
        cout << "Aquarius" << endl;
    else if ((mon == 2 && day >= 19) || (mon == 3 && day <= 20))
        cout << "Pisces" << endl;
    else if ((mon == 3 && day >= 21) || (mon == 4 && day <= 20))
        cout << "Aries" << endl;
    else if ((mon == 4 && day >= 21) || (mon == 5 && day <= 21))
        cout << "Taurus" << endl;
    else if ((mon == 5 && day >= 22) || (mon == 6 && day <= 21))
        cout << "Gemini" << endl;
    else if ((mon == 6 && day >= 22) || (mon == 7 && day <= 22))
        cout << "Cancer" << endl;
    else if ((mon == 7 && day >= 23) || (mon == 8 && day <= 23))
        cout << "Leo" << endl;
    else if ((mon == 8 && day >= 24) || (mon == 9 && day <= 23))
        cout << "Virgo" << endl;
    else if ((mon == 9 && day >= 24) || (mon == 10 && day <= 23))
        cout << "Libra" << endl;
    else if ((mon == 10 && day >= 24) || (mon == 11 && day <= 22))
        cout << "Scorpio" << endl;
    else if ((mon == 11 && day >= 23) || (mon == 12 && day <= 21))
        cout << "Sagittarius" << endl;
    else
        cout << "Capricorn" << endl;
}
