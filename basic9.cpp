#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 
//°òÂ¦ÃD¥Ø9

int main()
{
    int input;
    cin >> input;
    int answer = 0;
    for (int i = 1; i <= input; i++) {
        if (i % 3 == 0)
            answer += i;
    }
    cout << answer << endl;
}
