#include <iostream>
using namespace std;


//ºî¦X32

int main() {
    int input;
    cin >> input;
    char str[input][50];
    int salary[input];
    int fans[input];
    for (int i = 0; i < input; i++)
    {
        cin >> str[i] >> salary[i] >> fans[i];
    }
    for (int i = 0; i < input; i++)
    {
        int biggest = -1;
        int index;
        for (int j = 0; j < input; j++)
        {
            if(salary[j] > biggest)
            {
                biggest = salary[j];
                index = j;
            }
            if(salary[j] == biggest && biggest != -1)
            {
                if(fans[j] > fans[index])
                {
                    index = j;
                }
            }
            if(j == (input - 1))
            {
                cout << str[index];
                biggest = -1;
                salary[index] = -1;
            }
        }
        if(i == (input - 1))
            cout << endl;
        else
            cout << " ";
    }
}     

