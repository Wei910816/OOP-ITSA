#include <iostream>
#include <string>
using namespace std;
//ºî¦X6

int main() {
    string str;
    cin >> str;
    if(str[0] >= 48 && str[0] <= 57)
    {
        int flag = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] == '.')
                flag = 1;
        }
        if(flag)
            cout << "float\n";
        else
            cout << "int\n";
    }
    else
    {
        if(str.size() > 1)
            cout << "string\n";
        else
            cout << "char\n";
    }
}
