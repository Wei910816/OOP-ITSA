#include <iostream>
using namespace std;


//ºî¦X31

int main() {
    int input;
    cin >> input;
    int player[input][4];
    int score[input];
    for (int i = 0; i < input; i++)
    {
        cin >> player[i][0] >> player[i][1] >> player[i][2] >> player[i][3];
        score[i] = player[i][0] + player[i][1] * 2 + player[i][2] + player[i][3];
    }
    int biggest = -1;
    int index;
    for (int j = 0; j < input; j++)
    {
        for (int i = 0; i < input; i++)
        {
            if (score[i] > biggest)
            {
                biggest = score[i];
                index = i;
            }
            if (i == (input - 1))
            {
                cout << index+1 ;
                score[index] = -1;
                biggest = -1;
            }
        }
        if(j == (input - 1))
            cout << "\n";
        else
            cout << " ";
    }
        
} 
