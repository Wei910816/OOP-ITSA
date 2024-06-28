#include <iostream>
#include <iomanip>
using namespace std;
//°òÂ¦ÃD¥Ø21

int main()
{
    float n[10];
    for (int i = 0; i < 10; i++) {
        cin >> n[i];
    }
    float max = n[0];
    float min = n[0];
    for (int i = 1; i < 10; i++) {
        if (n[i] > max) {
            max = n[i];
        }
        if (n[i] < min) {
            min = n[i];
        }
    }
    cout << fixed << setprecision(2) << "maximum:" << max << endl;
    cout << "minimum:" << min << endl;
}
