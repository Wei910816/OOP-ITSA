#include <iostream>
#include <iomanip>
using namespace std;
//��¦�D��38
  
int main()  
{
    int input;
    cin >> input;
    float total_sum = 0;
    int sum_input = input;
    float total_non_sum = 0;
    int non_sum_input = input;
    
    if (sum_input > 700) {
        total_sum += (sum_input - 700) * 5.63;
        sum_input = 700;
        total_non_sum += (non_sum_input - 700) * 4.5;
        non_sum_input = 700;
    }
    
    if (sum_input > 500) {
        total_sum += (sum_input - 500) * 4.97;
        sum_input = 500;
        total_non_sum += (non_sum_input - 500) * 4.01;
        non_sum_input = 500;
    }
    
    if (sum_input > 330) {
        total_sum += (sum_input - 330) * 4.39;
        sum_input = 330;
        total_non_sum += (non_sum_input - 330) * 3.61;
        non_sum_input = 330;
    }
    
    if (sum_input > 120) {
        total_sum += (sum_input - 120) * 3.02;
        sum_input = 120;
        total_non_sum += (non_sum_input - 120) * 2.68;
        non_sum_input = 120;
    }
    
    total_sum += sum_input * 2.1;
    total_non_sum += non_sum_input * 2.1;
    
    cout << "Summer months:" << fixed << setprecision(2) << total_sum << endl;
    cout << "Non-Summer months:" << fixed << setprecision(2) << total_non_sum << endl;
}

