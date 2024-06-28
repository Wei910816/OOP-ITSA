#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 
//°òÂ¦ÃD¥Ø8
int main()
{
    int input;
    cin >> input;
    int flag = 0;
    for (int i = 2; i < input; i++) {
        if (input % i == 0) {
            flag = 1;
            break;
        }
    }
    if (input == 1)
        flag = 1;
    if (flag == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
