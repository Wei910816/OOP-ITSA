#include <iostream>
using namespace std;


//ºî¦X5

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int biggest = -1;
    int index;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (a[i] > biggest)
            {
                index = i;
                biggest = a[i];
            }
        }
        cout << biggest;
        if(j == 2)
            cout << "\n";
        else
            cout << ">";
        a[index] = -1;
        biggest = -1;
    }
        
}
