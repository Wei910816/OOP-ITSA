#include <iostream>
#include <iomanip>
using namespace std;
//basic 2
int main()
{
    int mile;
    cin >> mile;
    double km = mile * 1.6;
    cout << fixed << setprecision(1) << km << endl;
}
