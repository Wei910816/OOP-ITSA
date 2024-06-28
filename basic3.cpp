#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int result = sqrt(pow(x, 2) + pow(y, 2));
    if (result <= 100)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;
}
