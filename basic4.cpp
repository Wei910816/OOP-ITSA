#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int t1_1, t1_2, t2_1, t2_2;
    cin >> t1_1 >> t1_2;
    cin >> t2_1 >> t2_2;
    
    int t1_min = t1_1 * 60 + t1_2;
    int t2_min = t2_1 * 60 + t2_2;
    int total_min = t2_min - t1_min;
    int money = 0;
    
    for (int i = 0; i < 4; i++) { // 2 hours
        if (total_min < 30)
            break;
        total_min -= 30;
        money += 30;
    }
    
    for (int i = 0; i < 4; i++) { // 4 hours
        if (total_min < 30)
            break;
        total_min -= 30;
        money += 40;
    }
    
    while (true) { // More than 4 hours
        if (total_min < 30)
            break;
        total_min -= 30;
        money += 60;
    }
    
    cout << money << endl;
}
