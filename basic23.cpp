#include <iostream>
#include <iomanip>
using namespace std;
//°òÂ¦ÃD¥Ø23

int main()
{
    int N, a1, a2, a3;
    char comma; 
    cin >> N >> comma >> a1 >> comma >> a2 >> comma >> a3;

    int total = a1 * 15 + a2 * 20 + a3 * 30;
    int remain = N - total;
    int cnt_50 = 0, cnt_5 = 0, cnt_1 = 0;
    bool flag = false;

    if (remain < 0)
        flag = true;
    while (remain >= 50) {
        remain -= 50;
        cnt_50++;
    }
    while (remain >= 5) {
        remain -= 5;
        cnt_5++;
    }
    while (remain >= 1) {
        remain -= 1;
        cnt_1++;
    }

    if (flag)
        cout << "0" << endl;
    else
        cout << cnt_1 << "," << cnt_5 << "," << cnt_50 << endl;
}
